#include<bits/stdc++.h>
using namespace std;
double equation(double h)
{
    return(3.1416*pow(h,2)*((9-h)/3));
}

int main()
{
    double v,h,f=0;
    cout << "Enter Volume(in m3): ";
    cin >> v;
    for(float i=0;;i=i+0.001){
        if(equation(i)==v){
            h=i;
            f=1;
            break;
        }
        if(equation(i)>v){
            h=i;
            break;
        }
    }
    cout << "Depth= " << h << "m" << endl;
    return 0;
}
