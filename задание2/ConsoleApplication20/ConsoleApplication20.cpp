#include <iostream>

class Counter
{

	int count=0;
public:
	void plus(int num )
	{
		this->count += num;
	}
	void set_count(int counter)
	{
		this->count = counter;
	}
	void result()
	{
		std::cout << count;
	}
};

int main()
{
	setlocale(LC_ALL, "Russian");
	Counter counter;
		char symbol;
		int num1;
		int start_count;
		std::cout << "Вы хотите поставить начальное число счетчика?" << std::endl;
		std::cout << "Если да, то напишите число с которого начнет работать счетчик, если нет - напишите 0" << std::endl;
		std::cin >> start_count;
		if (start_count > 0)
		{
			num1 = start_count;
		}
		else {
			num1 = 0;
		}
		std::cout << "Значение счетчика: " << num1 << std::endl;

		do{
			std::cout << "\nВведите команду ( + , - ,  =  или  x ):" << std::endl;
			std::cin >> symbol;
			if (symbol == '+')
			{
				num1++;
				counter.set_count(num1);
			}
			if (symbol == '-')
			{
				num1--;
				counter.set_count(num1);
			}

			if (symbol == '=')
			{
				std::cout << "Результат счетчика: "; counter.result();
			}


		} while (symbol != 'x');
}