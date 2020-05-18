#include "ratio.h"




void ratio::Input(fstream &file)
{
	file >>numerator;
	file >> denominator;
}

void ratio::Output(fstream &file)
{
	if (numerator%denominator == 0)
	{
		file << numerator / denominator;
		return;
	}
	file << numerator << "/" << denominator;
}

ratio ratio::Plus(ratio b)
{
	ratio temp;
	temp.numerator = numerator * b.denominator + denominator * b.numerator;
	temp.denominator = denominator * b.denominator;
	temp.Compact();
	return temp;
}

ratio ratio::Minus(ratio b)
{
	ratio temp;
	temp.numerator = numerator * b.denominator - denominator * b.numerator;
	temp.denominator = denominator * b.denominator;
	temp.Compact();
	return temp;
}

ratio ratio::Multi(ratio b)
{
	ratio temp;
	temp.numerator = numerator * b.numerator;
	temp.denominator = denominator * b.denominator;
	temp.Compact();
	return temp;
}

ratio ratio::Division(ratio b)
{

	ratio temp;
	temp.numerator = numerator * b.denominator;
	temp.denominator = denominator * b.numerator;
	temp.Compact();
	return temp;
}

int ratio::getterNumerator()
{
	return numerator;
}

int ratio::getterDenominator()
{
	return denominator;
}

void ratio::setterNumerator(int num)
{
	numerator = num;
}

void ratio::setterNumerator(double num)
{
	numerator = num;
	
}

void ratio::setterDenominator(int num)
{
	denominator = num;
}

void ratio::setterDenominator(double num)
{
	denominator = num;
}

void ratio::Compact()
{
	
	int temp=UCLN(numerator, denominator);
	if (temp == abs(numerator*denominator))
		return;
	numerator /= temp;
	denominator /= temp;
}

ratio::ratio()
{
}


ratio::~ratio()
{
}

int UCLN(int x, int y)
{
	int a = abs(x);
	int b = abs(y);
	while (a*b != 0)
	{
		if (a > b)
			a %= b;
		else
			b %= a;
	}
	return a + b;
}
