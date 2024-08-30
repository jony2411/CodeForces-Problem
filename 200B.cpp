#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a,sum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        sum=sum+a;
    }
    cout<<fixed<<setprecision(12)<<sum/n<<endl;
}
