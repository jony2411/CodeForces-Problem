#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i =0;i<t;i++)
    {
        int n,num;
        cin>>n;
        int index = 0;
        for(int i =1;i<=n;i++)
        {
            cin>>num;
            if(i%2!=0)
            {
                index +=num;
            }
            else
            {
                index-=num;
            }
        }
        cout<<index<<endl;
    }
}