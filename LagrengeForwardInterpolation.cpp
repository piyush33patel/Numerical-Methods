#include<bits/stdc++.h>
using namespace std;
int main()
{
int n;
double a;
cout<<"Enter the number of inputs\n";
cin>>n;
double x[n],y[n];
cout<<"Enter "<<n<<" values of x and corresponding f(x)\n";
for(int i = 0; i < n; i++)
	cin>>x[i]>>y[i];
cout<<"Enter the value of x for which f(x) is to be calculated\n";
cin>>a;
double sum = 0;
double sn[n],sd[n];
memset(sn,1,n*sizeof(double));
memset(sd,1,n*sizeof(double));
//for(int i = 0; i < n; i++)
//	cout<<sn[i]<<" "<<sd[i]<<endl;

for(int i = 0; i < n; i++)
{
   for(int j = 0; j < n; j++)
   {
	if(i != j)
	{
	sn[i] = sn[i] * (a - x[j]);
	sd[i] = sd[i] * (x[i] - x[j]);
	}
   }
   sum = sum + ((sn[i]/sd[i])*y[i]);
}
cout<<"f("<<a<<") = "<<sum<<endl;
return 0;
}
