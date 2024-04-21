/*
In this code, we will see some recursive functions 

Developer = Barış Someroğlu
Date = 21.04.2024 - 03:30 pm
*/


#include <iostream>

using namespace std;

// Prototype for functions
int Factorial(int);
int Fibonacci(int);

int main()
{
	int Number;

	cout << "Please Enter a Number = ";
	cin >> Number;

	cout << "\n";

	cout << "Factorial for the number = " << Factorial(Number) << endl; // Call the function

	cout << "Fibonacci number at " << Number << ". step = " << Fibonacci(Number) << "\n"; // Call the function

	return 0;
}

// Function definition
int Factorial(int Number)
{
	if (Number < 0)
		return -1;

	else if (Number <= 1)
		return 1;

	else
		return Number * Factorial(Number - 1);
}

// Function definition
int Fibonacci(int Number)
{
	if (Number <= 0)
		return -1;

	else if (Number == 1 || Number == 2)
		return 1;

	else
		return Fibonacci(Number - 1) + Fibonacci(Number - 2);
}
