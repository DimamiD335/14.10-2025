#include <iostream>

class Calculator
{
private:
    double num1, num2;

public:
    double add()
    {
        return num1 + num2;
    }
    double multiply()
    {
        return num1 * num2;
    }
    double subtract_1_2()
    {
        return num1 - num2;
    }
    double subtract_2_1()
    {
        return num2 - num1;
    }
    double divide_1_2()
    {
        return num1 / num2;
    }
    double divide_2_1()
    {
        return num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (num1 != 0) {
            this->num1 = num1;
            return true;
        }
        return false;
    }
    bool set_num2(double num2) {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        }
        return false;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    double num1, num2;
    int num3;

    do {
        Calculator good;


        do {
            std::cout << "Введите первое число, num1: ";
            std::cin >> num1;
            if (!good.set_num1(num1)) {
                std::cout << "Неверный ввод! Число не должно быть равно 0." << std::endl;
            }
        } while (!good.set_num1(num1));


        do {
            std::cout << "Введите второе число, num2: ";
            std::cin >> num2;
            if (!good.set_num2(num2)) {
                std::cout << "Неверный ввод! Число не должно быть равно 0." << std::endl;
            }
        } while (!good.set_num2(num2));


        std::cout << "num1 + num2: " << good.add() << std::endl;
        std::cout << "num1 * num2: " << good.multiply() << std::endl;
        std::cout << "num1 - num2: " << good.subtract_1_2() << std::endl;
        std::cout << "num2 - num1: " << good.subtract_2_1() << std::endl;
        std::cout << "num1 / num2: " << good.divide_1_2() << std::endl;
        std::cout << "num2 / num1: " << good.divide_2_1() << std::endl;

        std::cout << "\nДля продолжения напишите 1, для окончания напишите 0\n" << std::endl;
        std::cin >> num3;

    } while (num3 != 0);

    return 0;
}