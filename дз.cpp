#include<iostream>



int main()
{
	setlocale(LC_ALL, "ru");

	std::cout << "             ������1" << "\n";


	int t, s;
	s = 0;

	std::cout << "������� ����� �����,������� ������ 500:";
	std::cin >> t;

	while (t > 500)
	{
		std::cout << "������� ����� ������ ��� ����� 500!!!" << "\n";
		std::cout << "������� ����� �����,������� ������ 500:";
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

	std::cout << "����� ����� �� � �� 500:" << s;





	std::cout << "\n\n"<<"      ������2" << "\n";

	int x, y, xy = 0;

	std::cout << "������� ����� ����� �:";
	std::cin >> x;

	std::cout << "\n" << "������� ����� ����� �:";
	std::cin >> y;


	xy = std::pow(x, y);
	std::cout << "� � ������� �:" << xy;
	



	std::cout << "\n\n" << "     ������3"<<"\n";


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
	std::cout << "������� �������������� �� 1 �� 1000: " << sr;
	





	std::cout << "\n\n" << "     ������4"<<"\n";


	int a, proizv = 1;


	std::cout << "������� �����,������������� �����,������� > 0 � < 21: ";
	std::cin >> a;


	while (a <= 0 || a >= 21)
	{
		std::cout << "����� �� �������� �� �������!!!";
		std::cout << "������� �����,������������� �����,������� > 0 � < 21: ";
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



