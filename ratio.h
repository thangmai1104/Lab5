#pragma once
#include<iostream>
#include<fstream>

using namespace std;


int UCLN(int a, int b);
class ratio
{
private:
	int numerator;
	int denominator;

public:

	void Input(fstream &file);
	void Output(fstream &file);
 

	ratio Plus(ratio b);
	ratio Minus(ratio b);
	ratio Multi(ratio b);
	ratio Division(ratio b);


	// getter and setter
	int getterNumerator();
	int getterDenominator();
	void setterNumerator(int num);
	void setterNumerator(double num);
	void setterDenominator(int num);
	void setterDenominator(double num);


	void Compact();
	ratio();
	~ratio();
};

