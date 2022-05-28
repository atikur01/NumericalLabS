#include<bits/stdc++.h>
using namespace std;
int main()
{
 double EA, ER;
 double Tm=146.2,T=145.9;

 ///question 1
  cout<<"Answer 1:"<<endl;
   EA = abs(T-Tm);
 cout<<"Absolute error:"<< EA <<endl;
   ER = EA/T;
 cout<<"Relative error:" << ER <<endl;
 cout<<endl;



 ///question 2
 #include<bits/stdc++.h>
using namespace std;

int main()
{
    double Tm = 48.0474, ER = 0.0042;
    double T, EA, EP;

    T = Tm/(ER+1);

    EA = (T*ER);

    cout<<"\nTrue value= "<<T<<"\nAbsolute error= "<<EA<<endl;

    EP = ER*100;
    cout<<"Percentage error is: " << EP << "%" <<endl;

return 0;
}


 ///question 3

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
