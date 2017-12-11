#include <stdio.h>
#include <stdlib.h>  
#include <complx.h>
#include <windows.h>
#include <cmath>


int main(int argc, char* argv[])
{

 complx one(2., 2.);
 complx two (1.,1.);
//one.print();

complx three(5.,5.);

//three.add(two);
three.multiply(one);
double i = (three.getImaginary());
printf("%f\n",i);

double e= (one.phase());
printf("%f\n",e);


//our.inverse();


	//double x = 2;
//matrix one(x);
//matrix two(x);

//matrix three(2,2,2,2);
//three.multiply(4.);

//three.multiply(one);

double z = (one.absoluteValue());
double real = (one.getReal());

//double test = one.element(0,0);
//double det = three.determinant();


printf("%f\n",z);
printf("%f\n",real);

three.print();
//printf("%f\n",det);
return 0;
}