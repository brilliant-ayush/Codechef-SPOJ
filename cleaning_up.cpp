#include<iostream>
#include<vector>

using namespace std;



int main()
{
    int t;
    vector<bool> v(1005);


    cin>>t;

    while(t--)
    {
       int n,m,d;
       cin>>n>>m;
       for(int i=0;i<=n;++i)
       {
           v[i] = true;
       }
       v[0] = false;
       for(int i=0;i<m;++i)
       {
           cin>>d;
           v[d] = false;
       }
       int flag = 0;
       ///Chef ko kaam milega
       for(int i=1;i<=n;++i)
       {
           if(v[i] && flag == 0)
           {
               cout<<i<<" ";
               v[i] = false;
               flag = 1;
               continue;
           }

           if(v[i] && flag == 1)
           {
               flag = 0;
               continue;
           }
       }
       cout<<endl;
       ///Assistant ko kamm milega
       for(int i=1;i<=n;++i)
       {
           if(v[i])
            cout<<i<<" ";
       }
    }
    return 0;
}
