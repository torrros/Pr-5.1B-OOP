///////////////////////Rational.h
#pragma once
#include <iostream>
#include <string>
#include "Exception.h"
using namespace std;

class Rational
{
	int a, b;
public:
	Rational(int a=0 , int b=1) throw(Exception);
	Rational(const Rational&r);
	Rational& operator=(const Rational&r);
	operator string () const;
	friend ostream& operator<< (ostream& os, const Rational& r);
	friend istream& operator>> (istream& is, Rational& r);

	friend Rational operator /( const Rational& r1, const Rational& r2);
	friend bool operator ==(const Rational& r1, const Rational& r2);
	friend bool operator >(const Rational& r1, const Rational& r2);
	friend bool operator <(const Rational& r1, const Rational& r2);

	Rational& operator++();
	Rational operator++(int);
	Rational& operator--();
	Rational operator--(int);
	
};

