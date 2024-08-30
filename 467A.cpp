#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n,x,y,flag=0,flag1 = 0;
    cin >>n;
    vector<int> arr(n);
    for(int i =0 ;i<n;i++)
    {
      cin >>x>>y;
      if(x<y && (y-x)>=2)
      {
        flag1  = flag1+1;
      }
      else
      {
        flag = 0;
      }
    }
    if(flag1>flag)
    cout << flag1 << endl;
    else
        cout <<flag <<endl;
    return 0;
}
