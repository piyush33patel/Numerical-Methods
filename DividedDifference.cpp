#include<iostream>
#include<math.h>
using namespace std;
int main()
{
int n;
cout<<"Enter the number of values\n";
cin>>n;
int x[n], y[n];

cout<<"Enter the values of x\n";
for(int i = 0; i < n; i++)
	cin>>x[i];

cout<<"Enter the values of y\n";
for(int i = 0; i < n; i++)
	cin>>y[i];

double a;
cout<<"Enter the value for which f(value) is to be calculated\n";
cin>>a;

//double x[5] = {-4,-1,0,2,5};
//double y[5] = {1245,33,5,9,1335};
//int n = 5;
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
double sum = 1;
double ans = dd[0];
for(int i = 1; i < n; i++)
{
  sum = sum*(a-(x[i-1]));
  ans = ans + (dd[i]*sum);
}
cout<<"f("<<a<<")="<<ans<<endl;
return 0;
}
