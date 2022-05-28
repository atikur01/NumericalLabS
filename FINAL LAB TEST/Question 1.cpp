#include<bits/stdc++.h>
using namespace std;

int factorial(int l)
{
 int val=1;
 for(int i=1; i<=l; i++){
 val*=i;
 }
 return val;
}

int main()
{
    long long int n=7;
 double x[n]={3, 4, 5, 6, 7, 8, 9};
 double y[n][n];
 y[0][0]=13;
 y[1][0]=21;
 y[2][0]=31;
 y[3][0]=43;
 y[4][0]=57;
 y[5][0]=73;
 y[6][0]=91;

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

  //find p
    double X,p,h;
 cout<<"Enter the value of X: ";
 cin>>X;
 p=(X-x[0])/(x[1]-x[0]);
 h=(x[1]-x[0]);
 cout<<"x0="<<x[0]<<endl;
 cout<<"X="<<X<<endl;
 cout<<"h="<<h<<endl;
 cout<<"p="<<p<<endl;
 double sum=y[0][0],l;
 for(int i=0; i<n-1; i++)
 {
 l=p;
 for(int j=1; j<=i; j++)
 {
 l*=(p-j);
 }
 l=l/(factorial(i+1));
 //cout<<l<<endl;//
 //cout<<l*y[0][i+1]<<endl;//
 l*=y[0][i+1];
 sum+=l;
 }
 cout<<"\n\nValue at "<<X<<" is :"<<sum<<endl;
}



