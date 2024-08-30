#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int pos;
    vector<int>id(n+1);
    for(int i  = 1;i<=n;i++)
    {
        cin>>pos;
        id[pos]= i;
    }
    for(int i = 1;i<=n;i++)
    {
        cout<<id[i]<< " " ;
    }
    return 0;
}
