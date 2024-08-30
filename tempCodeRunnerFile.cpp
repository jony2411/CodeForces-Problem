
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
    cout<<s<<endl;
}