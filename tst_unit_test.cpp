#include <QtTest>
#include "../project/singlton.h"

// add necessary includes here

class unit_test : public QObject
{
    Q_OBJECT

public:
    unit_test();
    ~unit_test();

private slots:
    void test_case1();
    void test_case2();
    void test_case3();
    void test_case4();
    void test_case5();
    void test_case6();
    void test_case7();
    void test_case8();
    void test_case9();
    void test_case10();
};

unit_test::unit_test()
{

}

unit_test::~unit_test()
{

}

void unit_test::test_case1()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(13,14);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),27);
}

void unit_test::test_case2()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(7,13);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),20);
}

void unit_test::test_case3()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(2,14);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),16);
}

void unit_test::test_case4()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(15,21);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),36);
}

void unit_test::test_case5()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(17,24);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),41);
}

void unit_test::test_case6()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(34,24);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),58);
}

void unit_test::test_case7()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(41,24);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),65);
}

void unit_test::test_case8()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(65,31);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),96);
}

void unit_test::test_case9()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(72,91);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),163);
}

void unit_test::test_case10()
{
    int temp_time = std::time(nullptr); // возвращает текущее время
    MeticRegister::getInstance()->MeticRegister::add_metr(72,95);
    QCOMPARE(MeticRegister::getInstance()->coutn_cometr(temp_time),167);
}

QTEST_APPLESS_MAIN(unit_test)

#include "tst_unit_test.moc"
