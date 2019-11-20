#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
double k;
cout<<"Enter the number of values\n";
cin>>n;
double x[n], y[n];
cout<<"Enter the values of x and corresponding y\n";
for(int i = 0; i < n; i++)
	cin>>x[i]>>y[i];
cout<<"Enter the value\n";
	cin>>k;
//n=7;
//double x[7] = {1.0, 1.1, 1.2, 1.3, 1.4, 1.5, 1.6};
//double y[7] = {7.989, 8.403, 8.781, 9.129, 9.451, 9.750, 10.031};
//k=1.1
double dely[6][6]={};
int a = -1;
for(int i = n-1; i > 0; i--)
{
   double d[i];
   a++;
   for(int j = 0; j < i; j++)
   {
	d[j] = y[j+1] - y[j];
	y[j] = d[j];
	cout<<d[j]<<"    ";
	dely[a][j] = d[j];
   }
	cout<<endl;
}
double h = x[1]-x[0];
int z = (k-x[0])/h;
//first derivative
double first[] = {1,-0.5,0.33,-0.25,0.2,-0.166};
double f = 0;
for(int i = 0; i < n-(1+z); i++)
{ 
  f = f + (first[i]*dely[i][z]);
}
cout<<"First Derivate = "<<f/h<<endl;
//second derivative
double second[] = {1,-1,0.916,-0.833,0.761};
f = 0;
for(int i = 1; i < n-(1+z); i++)
{
  f = f + (second[i-1]*dely[i][z]);
}
cout<<"Second Derivative = "<<f/(h*h)<<endl;
//third derivate
double third[] = {1,-1.5};
f = 0;
for(int i = 2; i < n-(1+z); i++)
{
  f = f + (third[i-2]*dely[i][z]);
}
cout<<"Third Derivative = "<<f/(h*h*h)<<endl;
return 0;
}
