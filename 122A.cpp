#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> lucky = {4, 7, 47, 74, 44, 77, 444, 447, 474,477, 744, 747, 777};
    
    bool isLucky = false;
    for(int i = 0; i < lucky.size(); i++)
    {
        if(n % lucky[i] == 0)
        {
            isLucky = true;
            break;
        }
    }

    if(isLucky)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
