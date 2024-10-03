/*
Title Distance Per Tank of Gas
File name DistancePerTankOfGas_Ozair_Ghaissi.cpp
Programmer: Ozair Ghaissi
Date: 10/03/2024




*/

#include <iostream>
using namespace std;

int main()
{
	double gallons, miles, mpg; 

	cout << "Enter the number of gallon of gas used"; 
	cin >> gallons; 

	cout << "Enter the number of miles driven "; 
	cin >> miles; 
	
	mpg = miles / gallons; 

	cout << "Miles per gallon: " << mpg << endl;

	return 0;

  
}

