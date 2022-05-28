
#include<bits/stdc++.h>
#include<math.h>
using namespace std;

#define f(a) sin(a)-10*a+10 //equation
#define g(a) cos(a)-10 // derivative of the equation

int main()
{
    float ai,a,fi,gi,f=1,e=1;
    cout<< "enter the initial guess a0:";
    cin>>ai;
    std::cout<< std::fixed;
    std::cout<< std::setprecision(8);
    while(e>=0.0001 && f!=0)
    {
        fi=f(ai);
        gi=g(ai);
        a=ai-(fi/gi); //working formula
        f=f(a);
        e=fabs((a-ai)/a);
        ai=a;
    }
    cout<< "\n the root of the equation="<<a;
    return 0;
}

