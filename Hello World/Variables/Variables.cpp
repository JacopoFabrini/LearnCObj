// Variables.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	cout << "Please enter your first name and age:\n";
	string first_name = "???";
	int age = -1;
	cin >> first_name;
	cin >> age;
	cout << "Hello, " << first_name << " (" << age << ")!\n";
    return 0;
}

