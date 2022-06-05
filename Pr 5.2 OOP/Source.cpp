///////////////////////Source.cpp
#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

int main()
{
	bool result;
	Rational a;
	Rational b(3, 4);
	
	do {
		try 
		{
			result = true;
			 cin >> a;
			cout << "a/b - " << a / b << endl;
			if (a == b)
				cout << "Equal" << endl;
			else
				cout << "Not Equal" << endl;
			
			if (a<b)
				cout << "Great" << endl;
			else
				cout << "Less" << endl;
			
			if (a>b)
				cout << "Great" << endl;
			else
				cout << "Less" << endl;

			cout << "a++ -" << a++ << endl;
			cout << "++a -" << ++a << endl;
			cout << "a-- -" << a-- << endl;
			cout << "--a -" << --a << endl;
		}
		catch (Exception)
			{
			result = false;
			cout << "Exception - b can`t be 0" << endl;
			
		}
		
	} while (!result);
} 