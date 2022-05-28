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
 long long int n=5;
 double x[n]={0.10, 0.15, 0.20, 0.25, 0.30};
 double y[n][n];
 y[0][0]=0.1003;
 y[1][0]=0.1511;
 y[2][0]=0.2027;
 y[3][0]=0.2553;
 y[4][0]=0.3093;
 cout<<"\n\nX\tY\tdel\t";
 for(int i=1; i<n; i++){
 if(i>=2){
 cout<<"del^"<<i<<"\t";
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

  double x1,p,h;
 cout<<"Enter the value of x: ";
 cin>>x1;
 p=(x1-x[0])/(x[1]-x[0]);
 h=(x[1]-x[0]);
 cout<<"x0="<<x[0]<<endl;
 cout<<"x="<<x1<<endl;
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
 l=l/(factorial(i+1)*1.0);
 l*=y[0][i+1];
 sum+=l;
 }
 cout<<"\n\nValue at "<<x1<<" is :"<<sum<<endl;
}

