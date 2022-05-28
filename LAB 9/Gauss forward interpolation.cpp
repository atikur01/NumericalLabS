#include<bits/stdc++.h>
using namespace std;

int main()
{
 long long int n;
 cout<<"Enter number of rows: ";
 cin>>n;
 double x[n],y[n][n];
 cout<<"x[]= ";
 for(int i=0; i<n; i++)
 {
 cin>>x[i];
 }
 cout<<"y[]= ";
 for(int i=0; i<n; i++)
 {
 cin>>y[i][0];
 }

 //Difference table
 cout<<"\n\nX\tY\tdel\t";

 int del=2;
 for(int i=1; i<n; i++)
 {
 if(i>=2)
 {
 cout<<"del^"<<del<<"\t";
 del++;
 }
 for(int j=0; j<n-i; j++)
 {
 y[j][i]=y[j+1][i-1]-y[j][i-1];
 }
 }
 cout<<endl;
 for(int i=0; i<n; i++)
 {
 cout<<x[i]<<"\t";
 for(int j=0; j<n-i; j++)
 {
 cout<<y[i][j]<<"\t";
 }
 cout<<endl;
 }
  cout<<endl;

      double X,p,h,Sum, G1, G2, G3, G4, G5 ;

 cout<<"Enter the value of X: ";
 cin>>X;
 p=(X-x[3])/(x[1]-x[0]);
 h=(x[1]-x[0]);
 cout<<"x0="<<x[3]<<endl;
 cout<<"X="<<X<<endl;
 cout<<"h="<<h<<endl;
 cout<<"p="<<p<<endl;

 for(int i=0; i<n-1; i++)
 {
 printf("%lf", x[i]);
 for(int j=0; j<n-i; j++)
 {
     if (y[i][j]>0.0001)
     {
         printf("\t%lf", y[i][j]);
     }
     printf("\n");
 }
    G1= p * y[i][1];
    G2 = p * (p - 1) * y[i - 1][2] / 2;
    G3 = (p + 1) * p * (p - 1) * y[i - 2][3] / 6;
    G4 = (p + 1) * p * (p - 1) * (p - 2) * y[i - 3][4] / 24;
    G5 = (p + 1) * p * (p - 1) * (p - 2)* (p+2) * y[i - 3][4] / 120;

    Sum= x[i]+ G1 + G2 + G3 + G4 + G5;
 cout<<"\n\nValue at "<<X<<" is :"<<Sum<<endl;
}
}

