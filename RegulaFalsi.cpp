#include<iostream>
#include<math.h>
using namespace std;

double x0, x1;

double fun(int *coef, double i, int l)
{
   double sum = 0;
   for(int j = 0; j < l; j++)
	{
	sum = sum + (pow(i,j) * coef[j]);
	}
   return sum;
}

void approx(int *coef, int l)
{
   double fx0 = fun(coef, x0, l);
   double fx1 = fun(coef, x1, l);
   double x = x0 - (((x1 - x0) / (fx1 - fx0)) * fx0);
   double sum = fun(coef, x, l);
   if(sum > 0)
	x1 = x;
   if(sum < 0)
	x0 = x;
   cout<<"x0 = "<<x0<<endl;
   cout<<"x1 = "<<x1<<endl;
}

int main()
{
//equation : "x^3 - 2*x - 5"
int coef[] = {-5, -2, 0, 1};
int length = sizeof(coef)/4;
int i = 0;
double positive = 0, negative = 0;

while(1)
{
  double sum = fun(coef, i, length);
  if(sum > 0)
    {
	positive = sum;
	x1 = i;
    }
  if(sum < 0)
    {
 	negative = sum;
	x0 = i;
    }
  if(positive != 0 && negative !=0)
	{ break; }
i++;
sum = 0;
}

cout<<"Initial Value\n";
cout<<"x0 = "<<x0<<endl;
cout<<"x1 = "<<x1<<endl;
double oldx0, oldx1, newx0, newx1;
for(int k = 1; k <15; k++)
{
oldx0 = x0;
oldx1 = x1; 
 cout<<"Approximation "<<k<<" : \n";
 approx(coef, length);
newx0 = x0;
newx1 = x1;
double dx0 = oldx0-newx0;
double dx1 = oldx1-newx1;
if(abs(dx0) < 0.00001 && abs(dx1) < 0.00001)
	break;
}
int flagx1 = 0, flagx0 = 0;
if(oldx1 == newx1)
	flagx1 = 1;
if(oldx0 == newx0)
	flagx0 = 1;
if(flagx1 == 1)
	cout<<"\nRoot is = "<<x0<<endl;
else
	cout<<"\nRoot is = "<<x1<<endl;
return 0;
}
