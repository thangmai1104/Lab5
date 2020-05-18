#include"ratio.h"



int main()
{
	ratio a;
	ratio b;
	fstream file;
	file.open("Input.txt", ios_base::in);


	a.Input(file);
	b.Input(file);
	file.close();
	
	file.open("Output.txt", ios_base::out);

	// getter 
	file <<"a's numerator: " << a.getterNumerator();
	file <<"\na's denomintor: "<< a.getterDenominator();

	
	file << "\na= ";


	a.Output(file);

	// setter 
	a.setterDenominator(3);
	a.setterNumerator(1);
	
	file <<"\na (after setter) = ";
	a.Output(file);


	file << "\nb= ";
	b.Output(file);
	file << endl;


	file << "\na+b= ";
	a.Plus(b).Output(file);

	file << "\na-b= ";
	a.Minus(b).Output(file);

	file << "\na*b= ";
	a.Multi(b).Output(file);

	file << "\na/b= ";
	a.Division(b).Output(file);
	file.close();
	return 0;
}