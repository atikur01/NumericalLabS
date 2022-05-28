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

