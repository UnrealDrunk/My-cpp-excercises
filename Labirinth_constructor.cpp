// This program constructs a labirinth

#include<iostream>

const int Arr_field = 10;


int main()
{
	// 1 - стенки лабиринта
	// 0 - путь
	int Lab_Construct[Arr_field][Arr_field] =
	{
		{1,1,1,1,1,1,1,1,1,1,},
		{1,1,0,0,0,0,0,0,0,1,},
		{0,0,0,1,1,1,1,0,1,1,},
		{1,1,1,1,0,0,1,0,0,1,},
		{1,0,0,1,0,1,1,1,0,1,},
		{1,0,1,1,0,0,0,0,0,1,},
		{1,0,1,1,0,1,1,1,1,1,},
		{1,0,0,0,0,0,0,0,1,1,},
		{1,0,1,1,0,1,1,0,0,0,},
		{1,1,1,1,1,1,1,1,1,1,}
	};
	int Dot_s1 = 2;
	int Dot_s2 = 0;
	Lab_Construct[Dot_s1][Dot_s2] = 2;

	do
	{
		for (int i = 0; i < Arr_field; i++) //переключение по строкам
		{
			for (int j = 0; j < Arr_field; j++)// переключение по столбцам
			{
				if (Lab_Construct[i][j] == 1)
				{
					std::cout << '\xDB'; // static_cast<char>(219);
					std::cout << '\xDB'; // static_cast<char>(219);
				}
				if (Lab_Construct[i][j] == 0)
				{
					std::cout << "  ";
				}
				if (Lab_Construct[i][j] == 2)
				{
					std::cout << '\xB6'; // static_cast<char>(182);
					std::cout << '\xB6'; //static_cast<char>(182);
				}
			}
			std::cout << '\n';
		}

		std::cin.get();
	} while (true);

	std::getchar();
}
