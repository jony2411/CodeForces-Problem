#include<iostream>
#include<set>
using namespace std;

int main()
{
    int n,p,x;
    cin>> n >>p;
    set<int>levels;
    for(int i =0;i<p;i++)
    {
        cin>>x;
        levels.insert(x);
    }

    int q,y;
    cin>>q;
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
