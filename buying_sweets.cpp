#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int t;
    cin>>t;

    vector<int> v;

    while(t--)
    {
        int n,x,d;
        cin>>n>>x;

        int total_amount_given = 0;
        int min = 100000;


        for(int i=0;i<n;++i)
        {
            cin>>d;
            v.push_back(d);
            total_amount_given += d;
            if(d<min)
                min = d;

        }

        int total_amount_needed = n*x;

        int no_sweets_he_can_buy = total_amount_given/x;
        int remaining_amount = total_amount_given - min;

        if(remaining_amount/x == no_sweets_he_can_buy)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<total_amount_given/x<<endl;
        }
        v.clear();
    }

    return 0;
}
