#include<iostream>
using namespace std;

int main()
{
    int n,sum = 0,hun =0,tw=0,ten = 0,fi=0,one=0;
    cin >> n;
    if(n>=100)
    {
        hun = n/100;
        n = n%100;
    }
    if(n>=20)
    {
        tw = n/20;
        n = n%20;
    }
    if(n>=10)
    {
        ten = n/10;
        n = n%10;
    }
    if(n>=5)
    {
        fi = n/5;
        n = n%5;
    }
    int total = hun + tw + ten + fi + n;
    cout << total <<endl;
    return 0;
    }
