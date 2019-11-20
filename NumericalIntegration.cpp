#include<bits/stdc++.h>
using namespace std;
//fx = 1/(1+(x*x))
double fx(double x)
{
   return (1/(1+(x*x)));									//define function
}
int main()
{
double low = 0, high = 6;									//define limits
int interval = 6;										//define interval
double h = high/interval;
double x[interval+1]={}, y[interval+1]={}, sum = 0, ans = 0;

for(int i = 0; i <= interval; i++)
{
   x[i] = sum;
   y[i] = fx(sum);
   sum = sum + h;
}

cout<<"x"<<"  "<<"y"<<endl;
for(int i = 0; i <= interval; i++)
	cout<<x[i]<<"  "<<y[i]<<endl;


double FnL = y[0] + y[interval];


//Trapezoidal Rule
for(int i = 1; i < interval; i++)
{
	ans = ans + y[i];
}
ans = (h/2)*(FnL + 2*ans);
cout<<"Via Trapezoidal Rule = "<<ans<<endl;


//Simpson's 1/3 Rule
double even = 0,odd=0;
for(int i = 1; i < interval; i++)
{
  if(i%2==0)
     even = even + y[i];
  else 
     odd = odd + y[i];
}
ans = (h/3)*(FnL + 4*odd + 2*even);
cout<<"Via Simpson 1/3 Rule = "<<ans<<endl;


//Simpson's 3/8 Rule
double three=0, nonthree=0;
for(int i = 1; i < interval; i++)
{
  if(i%3==0)
     three = three + y[i];
  else
     nonthree = nonthree + y[i];
}
ans = (3*h/8)*(FnL + 3*nonthree + 2*three);
cout<<"Via Simpson 3/8 Rule = "<<ans<<endl;
return 0;
}
