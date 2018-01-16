#include<iostream>
#include<vector>

using namespace std;

int gcd(int a, int b)
{
    int divisor, dividend, remainder;
    if(a<b)
    {
        divisor = a;
        dividend = b;
    }
    else
    {
        divisor = b;
        dividend = a;
    }

    while(divisor != 0)
    {
        remainder = dividend%divisor;
        dividend = divisor;
        divisor = remainder;
    }

    return dividend;

}

int main()
{
    vector<int> v;

    int t;
    cin>>t;

    while(t--)
    {
        int n,d;
        cin>>n;
        for(int i=0;i<n;++i)
        {
           cin>>d;
           v.push_back(d);
        }
        int result = v[0];

        for(int i=1;i<n;++i)
        {
            result = gcd(v[i],result);
        }
        cout<<result<<endl;
        v.clear();

    }
    return 0;
}
