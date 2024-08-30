#include<iostream>
#include<set>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    set<char>u;
    for(int i = 0;i<s.size()-1;i++)
    {
        if(s[i] == '{'|| s[i]== '}' || s[i] == ' ' || s[i] == ',')
            {
                continue;
            }
        u.insert(s[i]);
    }
    cout << u.size()<<endl;
}
