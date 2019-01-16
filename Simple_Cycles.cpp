// This program shows the usage of some simple cycles

#include<iostream>

int main()
{
	//write a program to calculate the sum of odd natural numbers using a cycle "for"

	const int Upper_Board = 10;
	int Sum_of_Odds = 0;
	std::cout << "Generated natural numdbers are: ";
	for (int i = 0; i <= Upper_Board; i++)
	{
		if (i % 2 != 0)
		{
			std::cout << i << " | ";
			Sum_of_Odds = Sum_of_Odds + i;
		}
		
	}
	std::cout << "\n" << "The Sum of odds is "<<Sum_of_Odds << std::endl;

	
	//write a program to calculate the sum of even natural numbers using a cycle "do - while"
	
	int Sum_of_Even = 0;
	std::cout << "\n" << "Generated natural numdbers are: ";
	int Number_Counter = 0;
	do
	{
		if (Number_Counter % 2 == 0 && Number_Counter != 0)
		{
			std::cout << Number_Counter << " | ";
			Sum_of_Even = Sum_of_Even + Number_Counter;
		}
		Number_Counter++;

	} while (Number_Counter <= Upper_Board);

	std::cout << "\n" << "The Sum of even is " << Sum_of_Even << std::endl;
 
	//User enters the number from the keyboard. The number has got another numbers, that divide entered number
	//without remainder. The program displays these numbers

	int User_Enters_Number;
	std::cout << "\n" << " Insert the number, please: ";
	std::cin >> User_Enters_Number;
	std::cout <<"\n"<< "These numbers divide user's number without remainder: ";
	for (int i = 1; i <= User_Enters_Number; i++)
	{
		if(User_Enters_Number % i ==0)
			std::cout << i << " | ";
	}
	
	
	getchar(); 	getchar();
}
