#include<bits/stdc++.h>
using namespace std;
#define f(x)  x*pow(x,e)-1
double g(double x)
{
 return (1/exp(x));
}
int main()
{
 int i=1;
 double x0=1,x,error;

 cout<<"\tXn\tXn+1\tError"<<endl;
 while(1)
 {
 x=g(x0);
 error=abs(x-x0);
 printf("\t%.4lf\t%.4lf \t%.4lf\n",x0,x,error);
 if(error<=0.0001){
 break;
 }
 i++;
 x0=x;
 }
 printf("\nThe root is : %.4lf\n\n",x);
}
