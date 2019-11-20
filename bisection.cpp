/*
1) Function 'fun' calculates the value of f(x) i.e., value of the polynomial at various values of x.
2) Function 'approx' calculates the approximation values of 'a' and 'b'. 
*/

#include<iostream>
#include<math.h>
using namespace std;

double a,b;

double fun(int *coef, double i, int length)
{
double sum = 0;
 for(int j = 0; j < length; j++)
  { 
    sum = sum + (pow(i,j) * coef[j]);
  }
return sum;
}

void approx(int *coef, int l)
{
  double x = 0.5 * (a + b);
  double sum = fun(coef,x,l);
  if (sum > 0)
	b = x;
  if (sum < 0)
	a = x;
cout<<"a = " <<a<<endl;
cout<<"b = "<<b<<endl;
}

int main()
{
//equation 1 : "x^3 - 4x -9"
int coef [] = {-9,-4,0,1}; 
//equation 1 : "x^3- 4*x +2"
//int coef[] = {2, -4, 0, 1};
int length = sizeof(coef)/4;
int i = 1;
double positive = 0, negative = 0;

/* This part calculates initial values of 'a' and 'b' */
while(1)
{
 double sum = fun(coef, i, length);
if( sum > 0 )
	{
	 positive = sum;
	 b = i;
	}
if( sum < 0 )
	{
	 negative = sum;
	 a = i;
	}
if(positive != 0 && negative != 0)
	{ break; }
sum = 0;
i++;
}
/* This part calculated initial value of 'a' and 'b' */

cout<<"Initial Values \n";
cout<<"a = "<<a<<endl;
cout<<"b = "<<b<<endl;

for(int m = 1; m < 20; m++)
{
	cout<<"Approximation "<<m<<" :\n";
	approx(coef, length);
}
return 0;
}
