#include <map>
#include <ctime>
#include <iostream>

class MeticRegister;

class MeticRegisterDestroyer
{
private:
    MeticRegister * p_instance;
public:
    ~MeticRegisterDestroyer() { delete p_instance;}
    void initialize(MeticRegister * p){p_instance = p;}
};


class MeticRegister
{
private:
    //int time; //int resp_t; //int wait_t;  Всё это хранится в map
    std::map <int, std::pair<int, int>> m1 ;
    static MeticRegister * p_instance;
    static MeticRegister destroyer;
protected:
    MeticRegister(){}
    MeticRegister(const MeticRegister& );
    MeticRegister& operator = (MeticRegister &);
    ~MeticRegister() {}
    friend class MeticRegisterDestroyer;
public:
    static MeticRegister* getInstance(){
        if (!p_instance)
        {
            p_instance = new MeticRegister();
            //destroyer.initialize(p_instance);     Почему-то не работает
        }
        return p_instance;
    }
    bool add_metr(int resp_t, int wait_t);//добавление метрики
    bool show_mert();//вывести на экран все значения, упорядоченные по ключу
    int coutn_cometr(int key);//вычислить вспомогательную метрику: возвращает сумму времени ожидания и времени отклика для данного ключа.
};
