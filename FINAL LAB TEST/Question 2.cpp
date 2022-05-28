#include<bits/stdc++.h>
using namespace std;
int main()
{
 double x[5] = {0, 1, 2, 3, 4};
 double y[5] = {1, 0, 3, 10, 21};
 double sum_x=0, sum_y=0;
 int m = 5;
 double x_square[m], sum_x_square=0.0;
 double xy[m], sum_xy=0;

 cout <<"\n X(i)\tY(i)\tX(i)^2\tX(i)*Y(i)" <<endl;

 for(int i=0; i<m; i++)
 {
 sum_x+=x[i];
 sum_y+=y[i];
 x_square[i]=pow(x[i],2);
 sum_x_square+=x_square[i];
 xy[i]=x[i]*y[i];
 sum_xy+=xy[i];
 }
 for(int i=0;i<m;i++)

   {
 cout<<" "<<x[i]<<"\t"<<y[i]<<"\t"<<x_square[i]<<"\t"<<xy[i]<<endl;
 }
 cout <<"................................" <<endl;
 cout<<" "<<sum_x<<"\t"<<sum_y<<"\t"<<sum_x_square<<"\t"<<sum_xy<<endl<<endl;

 cout<<"Summation of X:"<<sum_x<<endl;
 cout<<"Summation of X square:"<<sum_x_square<<endl;
 cout<<"Summation of XY:"<<sum_xy<<endl;

}
