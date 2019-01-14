//Write a program that displays the first 5 odd numbers

#include<iostream>

int main()
{
	const int SumOfNumbers = 10;
	for (int i = 1; i <= SumOfNumbers; i++)
		if (i % 2 != 0)
			std::cout << i << " ";
	getchar();


}
