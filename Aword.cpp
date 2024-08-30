#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    string s;
    getline(cin, s); // Read the entire line of input

    int upp = 0;
    int low = 0;

    for (char c : s)
    {
        if (isupper(c))
        {
            upp++;
        }
        else if (islower(c))
        {
            low++;
        }
    }

    if (upp > low)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;

    return 0;
}
