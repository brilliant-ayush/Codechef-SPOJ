#include<iostream>

using namespace std;


int main()
{
    int t;

    cin>>t;

    while(t--)
    {
        int g;
        cin>>g;

        while(g--)
        {
            int n,i,q;

            cin>>i>>n>>q;

            int *arr = new int[n];

            for(int j=0;j<n;++j)
            {
                arr[j] = i;
            }

            /*
            for(int j=0;j<n;++j)
            {
                for(int k=0;k<=j;++k)
                {
                    if(arr[k] == 1)
                        arr[k] = 2;
                    else
                        arr[k] = 1;
                }
            }
            */

            for(int j = n-1,k = 1;j>=0;j--,++k)
            {
                if(k&1)
                {
                    if(arr[j] == 1)
                        arr[j] = 2;
                    else
                        arr[j] = 1;
                }

            }

            int count = 0;
            for(int j=0;j<n;++j)
            {
                if(arr[j] == q)
                    count++;
            }

            cout<<count<<endl;
        }
    }
}
