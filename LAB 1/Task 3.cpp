#include <bits/stdc++.h>
 using namespace std;
 int main()
 {
     double N=-1, del_X, ER;
     double X = 8.6;

     del_X = 0.5*(pow(10,N));

     ER = del_X / X ;
     cout<<"Relative Error = " << ER << endl;
     return 0;

 }
