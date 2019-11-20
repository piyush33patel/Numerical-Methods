#include<iostream>
#include<math.h>
using namespace std;
double fun(int *coef, double i, int l)
{
   double sum = 0;
   for(int j = 0; j < l; j++)
	{
	sum = sum + (pow(i,j)*coef[j]);
	}
    return sum;
}

int main()
{
//f(x) : "x^4 - x - 10"
//fd(x) : "4x^3 - 1"
int coef[] = {-10,-1,0,0,1};
int coefd[] = {-1,0,0,4};
int l = 5;
int ld = 4;

double x0 = 0;
double sum1 = fun(coef, 1, l);
double sum2 = fun(coef, 2, l);

if(abs(sum1) < abs(sum2))
	x0 = 1;
else	
	x0 = 2;

double x1 = x0 - ((fun(coef,x0,l))/(fun(coefd,x0,ld)));	
while(abs(x1-x0) > 0.001)
{
	x0 = x1;
	x1 = x0 - ((fun(coef,x0,l))/(fun(coefd,x0,ld)));	
}
cout<<"The root is = "<<x1<<endl;
return 0;
}
