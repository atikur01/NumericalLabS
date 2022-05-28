#include<bits/stdc++.h>
using namespace std;

double functionn ( double x, double y)
{
return ((pow(x,3)-3*x-5)*(pow(y,3)-3*y-5));
}
double functionn (double x)
{
return (pow(x,3)-3*x-5);
}

double bisection(double a, double b)
{
double c,t=10;
while((t--)>0)
{
c=(a+b)/2;
if(functionn(c)==0) break;
else if(functionn(c,a)<0) b=c;
else a=c;
}
return c;
}

int main()
{
double x,y;

cout<<"X= ";
cin>>x;
cout<<"Y= ";
cin>>y;
if(functionn(x,y)<0)
cout<<"The root is "<<bisection(x,y);
else
cout<<"Wrong Input";

return 0;
}
