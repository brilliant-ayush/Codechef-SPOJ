#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double p,s;
        cin>>p>>s;
        double x,y;
        x = (p-sqrt(p*p-24*s))/12.0;
        y = (p+sqrt(p*p-24*s))/12.0;
        double v1=x*x*(p/4.0-2.0*x),v2 = y*y*(p/4.0-2.0*y);
        double volume = v1>v2?v1:v2;
        cout<<fixed<<setprecision(2)<<volume<<endl;
    }
    return 0;
}
