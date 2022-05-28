#include<bits/stdc++.h>
using namespace std;
#define ESP 0.001
double funct(double x)
{
    return (pow(x,3)-3*x-5);
}

double funct(double x, double y)
{
    return (pow(x,3)-3*x-5)*(pow(y,3)-3*y-5);
}

void bisect(double a, double b)
{
    if(funct(a,b)>=0){
        cout<< "Condition Does not fulfill";
        exit(0);
    }
    double c;
     while((b-a)>= ESP){
        c=(a+b)/2;
        if(funct(c)==0.0)
        break;
        else if(funct(c,a)<0){
            b=c;
        }
        else
            a=c;
    }
    cout << "The value of ROOT:" <<c <<endl;


}

int main()
{
    double a=2, b=3;
    bisect(a,b);
}
