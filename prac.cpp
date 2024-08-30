#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,p,x;
    cin>> n >>p;
    cout<<p<<endl;
    set<int>levels;
    for(int i =0;i<p;i++)
    {
        cin>>x;
        cout<<x<<endl;
        levels.insert(x);
    }

    int q,y;
    cin>>q;
    cout<<q<<endl;
    for(int i=0;i<q;i++)
    {
        cin>>y;
        levels.insert(y);
    }
    if(levels.size()== n)
    {
        cout<< "I become the guy."<<endl;
    }
    else
    {
        cout<< "Oh, my keyboard!"<<endl;
    }
    return 0;

}
