//Bisection with just root//
#include<bits/stdc++.h>
using namespace std;
#define CACRIFICE 0.001
double functionn(double x)
{
    return (pow(x,3)-x-4);
}

void bisection(double a,double b)
{
    if(functionn(a)*functionn(b)>=0)
    {
        cout<<"Condition Does not fulfill";
        exit(0);
    }
    double c;
    while((b-a)>= CACRIFICE)
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
    cout<<"The value of ROOT:" <<c;
}

int main()
{
    double a,b;
    cout<<"Enter the Value of 'a' and 'b': ";
    cin>>a>>b;
    bisection(a,b);
}
