#include<iostream>



int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "             Задача1" << "\n";


	int t, s;
	s = 0;

	std::cout << "Введите целое число,которое меньше 500:";
	std::cin >> t;

	while (t > 500)
	{
		std::cout << "Введёное число больше или равно 500!!!" << "\n";
		std::cout << "Введите целое число,которое меньше 500:";
		std::cin >> t;
		if (t < 500)
		{
			break;
		}
	}

	for (int i = t; i <= 500; i++) 
	{
		s = s + i;
	}

	std::cout << "Сумма чисел от а до 500:" << s;





	std::cout << "\n\n"<<"      Задача2" << "\n";

	int x, y, xy = 0;

	std::cout << "Введите целое число х:";
	std::cin >> x;

	std::cout << "\n" << "Введите целое число у:";
	std::cin >> y;


	xy = std::pow(x, y);
	std::cout << "х в степени у:" << xy;
	



	std::cout << "\n\n" << "     Задача3"<<"\n";


	double w = 1, sr = 0;

	while (w < 1000)
	{
		sr = w + sr;
		w++;
		if (w >= 1000)
		{
			break;
		}
	}

	sr = sr /988;
	std::cout << "Среднее арифметическое от 1 до 1000: " << sr;
	





	std::cout << "\n\n" << "     Задача4"<<"\n";


	int a, proizv = 1;


	std::cout << "Введите целое,положительное число,которое > 0 и < 21: ";
	std::cin >> a;


	while (a <= 0 || a >= 21)
	{
		std::cout << "Число не подходит по условию!!!";
		std::cout << "Введите целое,положительное число,которое > 0 и < 21: ";
		std::cin >> a;
		if (a > 0 || a < 21)
		{
			break;
		}
	}

	while (a > 0 || a < 21)
	{
		proizv = proizv * a;
		a++;
		if (a == 21)
		{
			break;
		}
	}


	std::cout << proizv;









	return 0;
}



