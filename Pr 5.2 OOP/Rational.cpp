///////////////////////Rational.cpp
#include "Rational.h"
#include <iostream>
#include <sstream>

using namespace std;

Rational::Rational(int a, int b)
{
	this->a = a;
	this->b = b;
	
	if (b == 0)
		throw Exception ("Can`t cout zero");
}

Rational::Rational(const Rational& r)
{
	*this = r;
}

Rational::  operator string() const
{
	stringstream ss;
	ss << a << "/" << b;
	return ss.str();
}

Rational& Rational::operator= (const Rational& r)
{
	a = r.a;
	b = r.b;
	return *this;
}

ostream& operator<< (ostream& os, const Rational& r)
{
	os << r.a << "/" << r.b;
	return os;
}

istream& operator>> (istream& is, Rational& r)
{
	cout << " a - ";
	cin >> r.a;
	cout << " b - ";
	cin >> r.b;
	if (r.b == 0)
	{
		throw Exception("Can`t cout zero");
	}
	return is;

}

bool operator == (const Rational& r1, const Rational& r2)
{
	return (r1.a * r2.b == r2.a * r1.b);
}

bool operator > ( const Rational& r1, const Rational& r2)
{
	return (r1.a * r2.b > r2.a * r1.b);
}

bool operator < (const Rational& r1, const Rational& r2)
{
	return (r1.a * r2.b < r2.a * r1.b);
}

Rational operator / (const Rational& r1, const Rational& r2)
{
	return Rational(r1.a * r2.b, r2.a * r1.b);
	if (r2.b == 0)
	{
		throw Exception("Can`t divide zero");
	}
}

Rational& Rational::operator ++ ()
{
	a++;
	return *this;
}

Rational& Rational:: operator -- ()
{
	a--;
	return *this;
}

Rational Rational:: operator ++ (int)
{
	Rational r(*this);
	a++;
	return r;
}

Rational Rational:: operator -- (int)
{
	Rational r(*this);
	a--;
	return r;
}