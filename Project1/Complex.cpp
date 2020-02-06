/*
Project:    CS 1415 Lab #5
File:       CS1415Lab05.cpp
Purpose:    Driver program for the Complex class
Author:     Durli Hojayeva
Date:       6 February,2020
*/
#include <iostream>
#include "Complex.h"

Complex::Complex()//default constructor 
{
	real = 0.0;
	imag = 0.0;
}

Complex::Complex(double newReal, double newImag)//constructor
{
	real = newReal;
	imag = newImag;
}

// setting real number for complex2
void Complex::setReal(double r)
{
	real = r;

}

//setting imaginary
void Complex::setImaginary(double i)
{
	imag = i;
}

//getting imaginary
Complex Complex::add(Complex anotherComplex)
{
	double R, I;
	R = real + anotherComplex.real;
	I = imag + anotherComplex.imag;

	Complex newComplex(R, I);

	return newComplex;

}

//subtracting function
Complex Complex::subtract(Complex againReal)
{
	double R, I;
	R = real - againReal.real;
	I = imag - againReal.imag;

	Complex newComplex(R, I);

	return newComplex;

}

//print function
void Complex::print() const
{
	std::cout << real << "+" << imag << "i";

}

