//This program is a simple converter

#include<iostream>


int main()
{
	//conversion of kilometers to miles

	const double Km_to_miles = 0.62137;
	float Kilometers;
	std::cout << "Set the distance in kilometers: ";
	std::cin >> Kilometers;
	std::cout << "\n" << "The distance in mile is: " << Kilometers * Km_to_miles << std::endl;
	puts("");

	//conversion of "sazhen" to meters
	const double Sz_to_meters = 2.14;
	float Sazhen;
	std::cout << "Set the distance in 'sazhen':   ";
	std::cin >> Sazhen;
	std::cout << "\n" << "The distance in meters is " << Sazhen / Sz_to_meters << std::endl;
	puts("");




	getchar(); getchar();
}
