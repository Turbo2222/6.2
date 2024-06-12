#include <iostream>
#include<string>
#include "func.h"



int main()
{
    setlocale(LC_ALL, "ru");
    system("chcp 1251");

    std::string init;
    std::string comand;
    std::cout << "Вы хотите ввести начальное значение счетчика: да или нет?" << std::endl;
    std::cin >> init;

    if (init == "да") {
        int num;

        std::cout << "Введите начальное значение: ";
        std::cin >> num;
        counter onecount(num);
        onecount.SetCount(num);

        while (comand != "х") {
            std::cout << "Введите команду ('+' , '-' , '=' или 'x')";
            std::cin >> comand;
            if (comand == "+") {
                onecount.plus();
            }
            else if (comand == "-") {
                onecount.minus();
            }
            else if (comand == "=") {
                onecount.GetCount();
            }
            else if (comand == "х") {
                std::cout << "До свидания!";
            }
        }
    }
    else if (init == "нет") {
        counter twocount;

        while (comand != "х") {
            std::cout << "Введите команду ('+' , '-' , '=' или 'x')";
            std::cin >> comand;
            if (comand == "+") {
                twocount.plus();
            }
            else if (comand == "-") {
                twocount.minus();
            }
            else if (comand == "=") {
                twocount.GetCount();
            }
            else if (comand == "х") {
                std::cout << "До свидания!";
            }
        }
    }

}