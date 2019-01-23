// Some excersizes with arrays and pointers

#include<iostream>
#include<cmath>

using namespace std;

const int Arr_Lenght = 5;
const int Power = 2;

void PrintArr(int* Arr_1);
void ShowMultipNums(int* Arr_1, int* Arr_2);
int SumParwElem(int* Arr_1, int* Arr_2);
void PowerArray(int* Arr_1);
int SumOfPowNums(int* Arr_1, int* Arr_2);

int main()
{
	/* This Block of program creates two arrays of integers of the same size. Calculate sum of parwise elements */

	int Arr_A[Arr_Lenght] = { 1,2,3,4,5 };
	int Arr_B[Arr_Lenght] = { 5,4,3,2,1 };

	cout << "Array A contains next numbers: ";
	PrintArr(Arr_A);

	cout << "Array B contains next numbers: ";
	PrintArr(Arr_B);

	cout << "Sums of parwise elements of Array A and Array B: ";
	ShowMultipNums(Arr_A, Arr_B);

	cout << "The sum of " << Arr_Lenght << " parwise elements of Arrays A & B is " << SumParwElem(Arr_A, Arr_B);

	/* This block of program calculates Sum of parwise ellements powered to 2*/

	cout << "\n\n" << "The numbers of Array A powered to " << Power << " are:  ";
	PowerArray(Arr_A);

	cout << "The numbers of Array B powered to " << Power << " are:  ";
	PowerArray(Arr_B);

	cout << "The sum of " << Arr_Lenght <<
		" parwise elements powered to " << Power << " of Arrays A & B  is " << SumOfPowNums(Arr_A, Arr_B);


	getchar();
}

void PrintArr(int* Arr_1)
{
	for (int i = 0; i < Arr_Lenght; i++)
		cout << Arr_1[i] <<" ";
	cout << "\n\n";
}

void ShowMultipNums(int* Arr_1, int* Arr_2)
{
	for(int i = 0; i < Arr_Lenght; i++)
		cout << Arr_1[i] * Arr_2[i] << " ";
	cout << "\n\n";
}

int SumParwElem(int* Arr_1, int* Arr_2)
{
	int result = 0;
	for (int i = 0; i < Arr_Lenght; i++)
		result += (Arr_1[i] * Arr_2[i]);
	return result;
}

void PowerArray(int* Arr_1)
{
	for (int i = 0; i < Arr_Lenght; i++)
		cout << pow(Arr_1[i], Power) << " ";
	cout << "\n\n";
}

int SumOfPowNums(int* Arr_1, int* Arr_2)
{
	int result = 0;
	for (int i = 0; i < Arr_Lenght; i++)
		result += (int)(pow(Arr_1[i], Power) + pow(Arr_2[i], Power));
	return result;
}
