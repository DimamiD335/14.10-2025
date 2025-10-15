#include <iostream>

class Counter
{
    int count = 0;
public:
    void plus()
    {
        count++;
    }
    void minus()
    {
        count--;
    }
    int result()
    {
        return count;
    }
    void setter_count(int counter)
    {
        this->count = counter;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    Counter counter;
    int num1;
    char symbol;
    int start_count;

    std::cout << "Вы хотите поставить начальное число счетчика?" << std::endl;
    std::cout << "Если да, то напишите число с которого начнет работать счетчик, если нет - напишите 0" << std::endl;
    std::cin >> num1;

    if (num1 > 0)
    {
        start_count = num1;
    }
    if (num1 == 0)
    {
        start_count = 1;
    }
    counter.setter_count(start_count);

    std::cout << "Значение счетчика: " << counter.result() << std::endl;

    do {
        std::cout << "\nВведите команду ( + , - , = или x ):" << std::endl;
        std::cin >> symbol;

        if (symbol == '+')
        {
            counter.plus();
        }
        else if (symbol == '-')
        {
            counter.minus();
        }
        else if (symbol == '=')
        {
            std::cout << "Результат счетчика: " << counter.result() << std::endl;
        }
        else if (symbol == 'x')
        {
            std::cout << "Завершение работы программы." << std::endl;
        }
        if (symbol != 'x' && symbol != '+' && symbol != '-' && symbol != '=')
        {
            std::cout << "\nОшибка! Недопустимая команда. Используйте только: +, -, = или x" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }

    } while (symbol != 'x');

    return 0;
}