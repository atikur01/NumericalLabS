#include<bits/stdc++.h>
using namespace std;
#define CACRIFICE 0.001
double functionn(double x)
{
    return (pow(x,3)-3*x-5);
}

void bisection(double a,double b)
{
    if(functionn(a)*functionn(b)>=0)
    {
        cout<<"Condition Does not fulfill";
        exit(0);
    }
    double c;
    for(int i=0;i<=10;i++)
      {
         c=(a+b)/2;
        if(functionn(c)==0.0)
        break;
        else if(functionn(c)*functionn(a)<0)
        {
            b=c;
        }
        else
            a=c;
      }

    cout<<"The value of 10th Iteration of ROOT:" <<c;
}

int main()
{
    double a=2,b=3;
    cout<<"Enter the Value of 'A' and 'B': ";
    cin>>a>>b;
    bisection(a,b);
}
