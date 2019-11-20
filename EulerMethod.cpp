#include<bits/stdc++.h>
using namespace std;

double fun(double a, double b)
{
	return ((b-a)/(b+a));
}
int main()
{
//dy/dx = (y-x)/(y+x)
//y(0) = 1
//h = 0.2
double y[10]={};
double x[10]={};
double h = 0.02;
y[0] = 1;
for(int i = 1; i < 10; i++)
{
   y[i] = y[i-1] + h*fun(x[i-1],y[i-1]);
   x[i] = x[i-1]+h;
   cout<<"y("<<x[i]<<") = "<<y[i]<<endl;
}
return 0;
}
