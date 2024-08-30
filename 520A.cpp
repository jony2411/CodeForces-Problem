
#include<iostream>
#include<set>
#include<cctype>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i = 0;i<n;i++)
    {
        s[i] = tolower(s[i]);
    }
    set<char>charset;
    for(int i=0;i<n;i++)
    {
        charset.insert(s[i]);
    }
    if(charset.size()==26)
    {
        cout<< "YES" <<endl;
    }
    else
        cout << "NO" <<endl;

    return 0;
}
