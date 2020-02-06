#pragma once

//class decleration
class Complex
{
private:
	double real;
	double imag;
public:
	//setting real number
	void setReal(double);

	//setting imaginary number
	void setImaginary(double);

	//Functions= declerations for implementing adding and subtracting
	Complex add(Complex);
	Complex subtract(Complex);

	// this function is going to print this complex number:3+5i
	void print() const;

	Complex();

	Complex(double newReal, double newImag);
};