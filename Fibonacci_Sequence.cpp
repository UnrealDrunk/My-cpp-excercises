// This program counts the value of Fibonacci numbers with the corresponding sequence number, starting with 1
//The quantity of numbers is inserted from the keyboard

#include<iostream>

int RecursionFN(int Steps);

int main()
{
	int Quantity_Numbers;
	std::cout << "Insert Ordinal Fibonacci number and press Enter: ";
	std::cin >> Quantity_Numbers;
	std::cout << "\n";
	std::cout << "Fibonacci Sequence Elements:  ";
	for (int step = 1; step <= Quantity_Numbers; step++)
		std::cout << RecursionFN(step) << " ";

	getchar(); getchar();

}


int RecursionFN(int Steps)
{
	if (Steps == 0)
		return 0;
	else if (Steps == 1 || Steps == 2)
		return 1;
	else
		return RecursionFN(Steps - 1) + RecursionFN(Steps - 2);

}
