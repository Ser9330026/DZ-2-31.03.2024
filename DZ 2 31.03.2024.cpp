#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");

	/*1. Напишите программу, проверяющую число, 
	введенное c клавиатуры на четность.*/

	int num1 = 0;
	std::cout << "Введите число: ";
	std::cin >> num1;

	if (num1 % 2 == 0)
	{
		std::cout << "Число четное" << std::endl;
	}
	else 
	{
		std::cout << "Число не четное" << std::endl;
	}

	/*2. Дано натуральное число а(a < 100).Напишите про -
		грамму, выводящую на экран количество цифр в этом
		числе и сумму этих цифр*/

	int num2 = 0;
	std::cout << "Введите число: ";
	std::cin >> num2;
	int a = num2 % 10;
	int b = num2 / 10;
	
	if (b != 0)
	{
		std::cout << "Число двузначное, сумма двух чисел равна: " 
			<< a + b << std::endl;
	}
	else
	{
		std::cout << "Число меньше 10" << std::endl;
	}

	/*3. Известно, что 1 дюйм равен 2.54 см.Разработать при -
		ложение, переводящие дюймы в сантиметры и наобо -
		рот.Диалог с пользователем реализовать через систему
		меню.*/

	int numMenu = 0;
	double length = 0;

	do {
	std::cout << "Выберите пункт меню: \n"
			<< "1. перевести в сантиметры\n"
			<< "2. перевести в дюймы\n"
			<< "3. выйти" << std::endl;
	std::cin >> numMenu;

		switch (numMenu)
		{
		case 1:
			std::cout << "Введите длину в дюймах: ";
			std::cin >> length;
			std::cout << "Длина состаляет " << length / 2.54 << " сантиметров" << std::endl;
			break;
		case 2:
			std::cout << "Введите длину в сантиметрах: ";
			std::cin >> length;
			std::cout << "Длина состаляет " << length * 2.54 << " дюймов" << std::endl;
			break;
		case 3:
			std::cout << "Выйти из программы!!!";
			break;
		default:
			std::cout << "Некорректно задано значение, попробуйте снова" << std::endl;
		}
	} while (numMenu != 3);

	/*4. Написать программу - калькулятор.Пользователь вводит
		два числа и выбирает арифметическое действие(+, -,
			*, / , максимум, минимум).Вывести на экран результат
		действия.*/
	double num3 = 0.0, num4 = 0.0;
	char ch;
	
	do {

	std::cout << "Введите два числа: ";
	std::cin >> num3 >> num4;
	std::cout << "Введите арифметическое действие (+, -, *, / , максимум(M), минимум(m)): ";
	std::cout << "Для выхода нажмите E" << std::endl;
	std::cin >> ch;
	
	switch (ch)
	{
		case '+':
			std::cout << num3 << ch << num4 << '=' << num3 + num4 << std::endl;
			break;
		case '-':
			std::cout << num3 << ch << num4 << '=' << num3 - num4 << std::endl;
			break;
		case '*':
			std::cout << num3 << ch << num4 << '=' << num3 * num4 << std::endl;
			break;
		case '/':
			std::cout << num3 << ch << num4 << '=' << num3 / num4 << std::endl;
			break;
		case 'm':
			if (num3 < num4) {
				std::cout << num3 << " меньше " << num4 << std::endl;
			}
			else if (num4 < num3) {
				std::cout << num4 << " меньше " << num3 << std::endl;
			}
			else if (num3 == num4) {
				std::cout << "Оба числа равны" << std::endl;
			}
			break;
		case 'M':
			if (num3 > num4) {
				std::cout << num3 << " больше " << num4 << std::endl;
			}
			else if(num4 > num3) {
				std::cout << num4 << " больше " << num3 << std::endl;
			}
			else if(num3 == num4) {
				std::cout << "Оба числа равны" << std::endl;
			}
			break;
		case 'E':
			std::cout << "ПОКА!!!" << std::endl;
			break;
		
		default:
			std::cout << "Некорректно задано значение, попробуйте снова" << std::endl;
	}
	
	} while (ch != 'E');

	return 0;
}