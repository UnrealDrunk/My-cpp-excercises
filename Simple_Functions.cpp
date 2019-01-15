//This pragram shows some usage of simple functions

#include<iostream>

int SimpleSum(int a, int b);
int OddSum(int c, int d, int* x, int* y, int* z);

int main()
{
	// Sum of integers
	int a, b;
	std::cout << "insert number a: ";
	std::cin >> a;
	std::cout <<"\n" <<"insert number b: ";
	std::cin >> b;
	std::cout<< "\n" << "the sum of numbers A & B is "<< a <<" + "<< b <<" = "<< SimpleSum(a, b) << std::endl;
	puts("");


	// Sum of odd numbers

	int c = 0;
	int d = 0; 
	int x = 0;
	int y = 0;
	int z = 0;
	int result = 0;
	std::cout << "This program will sum only odd numbers. Keep attention, please" << std::endl;
	std::cout << "insert number c: ";
	std::cin >> c;
	std::cout << "\n" << "insert number d: ";
	std::cin >> d;
	puts("");
	result = OddSum(c, d, &x, &y, &z);
	switch (result)
	{
	case 0:
		std::cout << "\n" << "the sum of numbers C & D is " << x << " + " << y << " = " << z << std::endl;
		std::cout << "all the numbers are odd" << std::endl;
		break;
	case 1:
		std::cout << "\n" << "the sum of numbers C & D is " << x << " + " << y << " = " << z << std::endl;
		std::cout << "number d is even, that's why it's zero" << std::endl;
		break;
	case 2:
		std::cout << "\n" << "the sum of numbers C & D is " << x << " + " << y << " = " << z << std::endl;
		std::cout << "number c is even, that's why it's zero" << std::endl;
		break;
	case 3:
		std::cout << "\n" << "the sum of numbers C & D is " << x << " + " << y << " = " << z << std::endl;
		std::cout << "it's zero, because all the numbers are even" << std::endl;
		break;
	default:
		std::cout << "Something strange has happen" << std::endl;
		break;
	}

	getchar(); getchar();
}


int SimpleSum(int a, int b)
{
	int result = a + b;
	return result;
}

int OddSum(int c, int d, int* x, int* y, int* z)
{
	if (c % 2 != 0 && d % 2 != 0)
	{
		*x = c;
		*y = d;
		*z = c + d;
		return 0;
	}
	else if (c % 2 != 0 && d % 2 == 0)
	{
		*x = c;
		*y = 0;
		*z = c;
		return 1;

	}
	else if (c % 2 == 0 && d % 2 != 0)
	{
		*x = 0;
		*y = d;
		*z = d;
		return 2;
	}
	else
	{
		*x = 0;
		*y = 0;
		*z = 0;
		return 3;
	}


}
