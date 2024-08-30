#include<iostream>

using namespace std;

int main()
{
    int n,x,y,result;
    cin>>n;

    while(n--)
    {
        cin>>x>>y;
        if(x%y==0)
        {
            cout <<0<<endl;
        }
        else
        {
            result= y-(x%y);
        cout<< result<<endl;
        }
    }
    return 0;
}
