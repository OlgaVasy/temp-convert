// This program converts Celsius temperatures to Fahrenheit temperatures 
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	int fahrenheit, celsius;
	double number1, number2, number3; //constants	

	number1 = 9;
	number2 = 5;
	number3 = 32;		

	//get input
	cout << "Enter a Celsius temperature (degrees C): ";
	cin >> celsius;	

	//calculate a Fahrenheit temperature
	fahrenheit = number1/number2*celsius + number3;

	//display the result	
	cout << "The Fahrenheit temperatute (degrees F): " << fahrenheit << "\n";	

	system("pause");
	return 0;
}