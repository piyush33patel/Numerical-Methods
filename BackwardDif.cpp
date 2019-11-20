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

//double x[5] = {1891,1901,1911,1921,1931};
//double y[5] = {46,66,81,93,101};

double sum = y[n-1];
double value = 1;
double fact = 1;
double u = (a-x[n-1])/abs(x[0]-x[1]);
cout<<"u = "<<u<<endl;
cout<<"Difference Table :\n";
for(int i = n-1; i > 0; i--)
{
   int d[i];
   for(int j = 0; j < i; j++)
   {
	d[j] = y[j+1] - y[j];
	y[j] = d[j];
	cout<<d[j]<<" ";
   }
	value = value*(u+(n-i-1));
	fact = fact * (n-i);
	value = value/fact;
	sum = sum + (value*d[i-1]);
	cout<<endl;
}
cout<<"\nf("<<a<<") = "<<sum<<endl;
return 0;
}
