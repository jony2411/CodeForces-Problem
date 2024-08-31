#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,result = "";
    cin>>s;

    for(int i =0;i<s.size();i++)
    {
        char l = tolower(s[i]);
        if(l=='a' || l=='e' || l=='i' || l=='o' || l=='u' || l=='y')
        {
            continue;
        }
        else
        {
          result += ".";
          result += l;
        }
    }
    cout << result <<endl;
    return 0;

}
