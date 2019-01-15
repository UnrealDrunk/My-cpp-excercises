//Some simple usage of arrays

#include<iostream>
#include<cmath>

int main()
{
	const int ARR_LENGHT = 20;

	// The array of even numbers
	int Array_A[ARR_LENGHT];
	for (int i = 0; i <= ARR_LENGHT; i++)
	{
		Array_A[i] = i;
		if(i % 2 ==0 && i != 0)
			std::cout << Array_A[i] << " ";

	}
	puts("");
	// The array of odd numbers

	int Array_B[ARR_LENGHT];
	for (int i = 0; i <= ARR_LENGHT; i++)
	{
		Array_B[i] = i;
		if (i % 2 != 0 && i != 0)
			std::cout << Array_B[i] << " ";

	}
	puts("");
	// The array of numbers powered to 2

	int Array_C[ARR_LENGHT];
	for (int i = 0; i <= ARR_LENGHT; i++)
	{
		Array_C[i] = (int)pow(i,2);
		std::cout << Array_C[i] << " ";

	}
	puts("");
	//The array of all numbers two powered to "i"
	int Array_D[ARR_LENGHT];
	for (int i = 0; i <= ARR_LENGHT; i++)
	{
		Array_D[i] = (int)pow(2, i);
		std::cout << Array_D[i] << " ";

	}
	puts("");

	//Fibonacci Array, first two numbers equal to 1
	int Array_E[ARR_LENGHT];
	Array_E[0] = 1;
	Array_E[1] = 1;
	for (int i = 2; i < ARR_LENGHT; i++)
	{
		Array_E[i] = Array_E[i - 1] + Array_E[i - 2];
	}

	for (int i = 0; i < ARR_LENGHT; i++)
	{
		std::cout << Array_E[i] << " ";
	}
	puts("");

	//Array where even numbers are idexes and odd numbers a powered to 2

	int Array_F[ARR_LENGHT];
	for (int i = 0; i <= ARR_LENGHT; i++)
	{
		if (i % 2 != 0)
			Array_F[i] = (int)pow(i, 2);
		else
			Array_F[i] = i;
	}

	for (int i = 0; i < ARR_LENGHT; i++)
	{
		std::cout << Array_F[i] << " ";
	}

	getchar(); getchar();
}
