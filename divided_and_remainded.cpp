// write a program that displays the numbers that, when divided by 4, give the remainder 3. 
//The quantity of numbers is entered by the user from the keyboard

#include<iostream>

int main()
{
	int The_Numbers;
	std::cout << "Insert the quantity of didgits to check: ";
	std::cin >> The_Numbers;
	puts("");
	for (int i = 1; i <= The_Numbers; i++)
		if (i % 4 == 3)
			std::cout << i << " ";
	getchar(); getchar();


}
