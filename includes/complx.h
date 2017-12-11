#ifndef __COMPLX_H
#define __COMPLX_H

/*
The matrix class represents a simple 2x2 matrix with elements:

	|  e00  e01  |
	|  e10  e11  |

it contains member functions to add and multiply matrices. it can also find determinants and inverses.


*/

class complx
{
private:
	double real;
	 double imaginary ;
	

public:



	complx();
	complx(double Real, double Imag);
	double getReal();
	double getImaginary(); 
	double absoluteValue();
	double phase();
	
	complx& add(complx& a);//add to complex numbers
	
   complx& multiply(complx& m);  // TO DO: Multiply the comp by another comp

	double element(int,int); // TO DO: return the specified element using its column and row number
	double determinant(); // TO DO: return the determinant of the matrix
	//matrix& inverse(); // TO DO: return the inverse of the matrixs

	void print(); // TO DO: a function to print out the complex # to the console.
};


#endif