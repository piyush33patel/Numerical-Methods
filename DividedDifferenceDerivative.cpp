#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
double a;
/*
cout<<"Enter the number of values\n";
cin>>n;

double x[n], y[n];
cout<<"Enter the values of x and corresponding y\n";
for(int i = 0; i < n; i++)
	cin>>x[i]>>y[i];

cout<<"Enter the value for which f(value) is to be calculated\n";
	cin>>a;
*/
n = 5;
a = 10;
double x[5] = {3,5,11,27,34};
double y[5] = {-13,23,899,17315,35606};
double dd[n] = {};
dd[0] = y[0];
int del=0;
int count = 0;
cout<<"Difference Table :\n";
for(int i = n-1; i > 0; i--)
{
   int d[i];
   count++;
   del++;
   for(int j = 0; j < i; j++)
   {
	d[j] = (y[j+1] - y[j]) / (x[count+j]-x[j]);
	y[j] = d[j];
	cout<<d[j]<<" ";
	dd[del] = d[0];
   }
  cout<<endl;
}

//First Derivative
double ans = dd[1] + (((2*a)-(x[0]+x[1]))*dd[2]) + (((3*a*a) - ((2*a)*(x[0]+x[1]+x[2])) + (x[0]*x[1]+x[1]*x[2]+x[2]*x[3]))*dd[3]);
cout<<"First Derivative = "<<ans<<endl;
return 0;
}
