#include <bits/stdc++.h>
 using namespace std;
 int main()
 {
     float Tt, Tm, EA, ER;
     Tm = 146.2;
     Tt = 145.9;
     EA = Tm - Tt;
     cout<< "EA = " <<abs(EA)<<endl;

     ER = abs(EA) / Tm;
     cout<<"ER = " << ER <<endl;
     return 0;

 }
