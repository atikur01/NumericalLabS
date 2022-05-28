#include<bits/stdc++.h>
using namespace std;
int main()
{
 double EA, ER;
 double Ta=2.751, Tt=2.76;

   EA = abs(Tt-Ta);
 cout<<"Absolute error:"<< EA <<endl;
   ER = EA/Tt;
 cout<<"Relative error:" << ER <<endl;
 cout<<endl;
}

