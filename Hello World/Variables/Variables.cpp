// Variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

void OperatorError()
{
	int count = -999;
	string name = "???";

	cout << "Please enter an integer and your name:\n";
	cin >> count;
	cin >> name;

	int c2 = count + 2;
	string s2 = name + "Jr. ";

	int c3 = count - 2;
	//string s3 = name - "Jr. ";    Error! Operator - not defined for string.		
}

void OperatorAdmissable()
{
	cout << "Please enter a floating point value: ";
	double n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times n == " << 3 * n
		<< "\ntwice n == " << n + n
		<< "\nn squared == " << n * n
		<< "\nhalf of n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< "\n";
}

void CheckRepetition()
{
	string previous = " "; //Initialized to "not a word"
	string current;			

	while (cin >> current) { //Read a stream of words
		if (previous == current)
			cout << "repeated word: " << current << '\n';
		previous = current;
	}
}


int main()
{
	//OperatorError();
	//OperatorAdmissable();
	CheckRepetition();
	
    return 0;
}