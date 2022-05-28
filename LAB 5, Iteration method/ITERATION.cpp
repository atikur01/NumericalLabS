//Iteration method without showing steps//

#include<bits/stdc++.h>
using namespace std;
#define f(x)  sin(x)-10*x+10
double g(double x)
{
 return (sin(x)+10) /10;
}
int main()
{
 int i=1;
 double n,x,error;
 cout<<"Choose the values of x0: ";
 cin>>n;
 cout<<"\tXn\tXn+1\tError"<<endl;
 while(1)
 {
 x=g(n);
 error=abs(x-n);
 printf("\t%.4lf\t%.4lf \t%.4lf\n",n,x,error);
 if(error<=0.001){
 break;
 }
 i++;
 n=x;
 }
 printf("\nThe root is : %.4lf\n\n",x);
}
