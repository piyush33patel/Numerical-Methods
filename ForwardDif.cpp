#include<iostream>
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
//int x[6] = {5,10,15,20,25,30};
//int y[6] = {9962,9848,9659,9397,9063,8660};

for(int i = n-1; i > 0; i--)
{
   int d[i];
   for(int j = 0; j < i; j++)
   {
	d[j] = y[j+1] - y[j];
	y[j] = d[j];
	cout<<d[j]<<" ";
   }
	cout<<endl;
}
return 0;
}
