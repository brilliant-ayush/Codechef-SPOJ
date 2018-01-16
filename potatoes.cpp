#include<iostream>

using namespace std;

bool isPrime(int d)
{
    if(d == 1||d == 0)
        return false;

    for(int i=2;i*i<=d;++i)
    {
        if(d%i==0)
            return false;
    }
    return true;
}


int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int x,y;

        cin>>x>>y;

        int z = x+y;

        ///Sieve of eratothenes

        for(int i=z+1;i<=10000;++i)
        {
            if(isPrime(i)){
                cout<<i-z<<endl;
                break;
            }
        }
    }
}
