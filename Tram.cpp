#include<iostream>

using namespace std;

int main()
{
    int n,x,y,passenger =0,mini = 0;
    cin >>n;
    for(int i=1; i<=n; i++)
    {
        cin >> x>>y;
        passenger = (passenger -x)+y;
        if(passenger>mini)
        {
            mini = passenger;
        }
    }
    cout << mini <<endl;
    return 0;
}
