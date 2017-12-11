#include <complex.h>
#include <stdio.h>
#include <stdlib.h> 
#include <complx.h> 
#include <cmath>
complx::complx()
{
	/*
		This constructor (the default constructor) 
	*/

    real =0;
    imaginary = 0;
	
}
complx::complx(double Real, double Imag)

{
	/*
		This constructor set the real and imaginary parts

		
	*/
		
	real = Real;
	imaginary = Imag;

}
double complx::getReal()
{
    return real; //returns real part
}

double complx::getImaginary()
{
    return imaginary; //returns imaginary part

}

double complx::absoluteValue()
	 // returns absolte value of comlpex number
	{
		if(imaginary>0)
		{
		double z = ((real*real)+(real*imaginary)-(real*imaginary)+(imaginary*imaginary));
		return z;
		}		
  if(imaginary<0)
	{	double a = ((real*real)-(real*imaginary)+(real*imaginary)+(imaginary*imaginary));		
		return a;
	}
  if(imaginary==0)
  {
double b = (real*real);

			return b;
}
	}

double complx::phase()
{
	double a =imaginary/real;
	double phaseAngle = tan(a);

	return phaseAngle;
	//returns phase angle of complex number
}

complx& complx::add(complx& a)
{
	/*
		The add two complex numbers 
	*/

	real = real + a.real;
	imaginary = imaginary + a.imaginary;
	
	return *this;
}
complx& complx::multiply(complx& m)
{
	/*
		multiplies to complex numbers
	*/

	real = real * m.real + imaginary * m.imaginary;
	imaginary = m.real * m.imaginary;
	
	return *this;
}
void complx::print()
{//prints out class info and fixes i to postive or negative depending on imaginary part

	printf("%f ", getReal() );
	if(imaginary>0)
    printf("+%fi \n",getImaginary());
   if(imaginary<0)
    printf("%fi \n",getImaginary());

}