#include <iostream>


class Calculator
{
public:
	double num1, num2;


	void calc(double num1, double num2)
	{
		this->num1 = num1;
		this->num2 = num2;

	}

	double add()
	{
		return num1 + num2;
	}
	double multyplu()
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
	double num1, num2;
	int num3;
	do {
		setlocale(LC_ALL, "Russian");
		Calculator good;
		std::cout << "Введите первое число, num1: " << std::endl;
		std::cin >> num1;
		std::cout << "Введите второе число, num2: " << std::endl;
		std::cin >> num2;
		good.calc(num1, num2);
		std::cout << "num1 + num2: " << good.add() << std::endl;
		std::cout << "num1 * num2: " << good.multyplu() << std::endl;
		std::cout << "num1 - num2: " << good.subtract_1_2() << std::endl;
		std::cout << "num2 - num1: " << good.subtract_2_1() << std::endl;
		std::cout << "num1 / num2: " << good.divide_1_2() << std::endl;
		std::cout << "num2 / num1: " << good.divide_2_1() << std::endl;

		std::cout << "\nДля продолжения напишите 1, для окончания напишите 0\n" << std::endl;
		std::cin >> num3;

	} while (num3 != 0);



}