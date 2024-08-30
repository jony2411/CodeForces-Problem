#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0;i< n;i++)
    {
        cin>> arr[i];
    }
    for(int i = 0;i<n;i++)
    {
        if(arr[i]== 1)
        {
            cout << "HARD" <<endl;
            return 0;
        }
    }
    cout<<"EASY" <<endl;
    return 0;
}
