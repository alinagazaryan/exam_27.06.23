#include "singlton.h"

bool MeticRegister::add_metr(int resp_t, int wait_t){ //добавление метрики
    int k1 = m1.size(); // изначальный размер массива
    int temp_time = std::time(nullptr); // возвращает текущее время
    m1[temp_time] = std::make_pair(resp_t, wait_t);
    int k2 = m1.size(); // нынешний размер массива
    if (k2>k1){
        return true;
    }
    else{
        return false;
    }
}
bool MeticRegister::show_mert(){ //вывести на экран все значения, упорядоченные по ключу
    // Время идёт только вперёд, т.е. map уже упорядочен
    for (auto it = m1.begin(); it != m1.end(); ++it) {
        std::cout << "Ключ: " << it->first << ", Время отклика: " << it->second.first << ", Время ожидания: " << it->second.second << std::endl;
    }
    return true; // в любом случае
}
int MeticRegister::coutn_cometr(int key){ //вычислить вспомогательную метрику: возвращает сумму времени ожидания и времени отклика для данного ключа.
    auto it = m1.find(key);  // находим нужный итератор по ключу
    int result; // инициализируем вывод
    if (it != m1.end()) { // если что-то нашлось
        result = it->second.first + it->second.second;
    }
    return result;
}
