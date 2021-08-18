#include <bits/stdc++.h>
using namespace std;

string getString(char x)
{
    // string class has a constructor
    // that allows us to specify size of
    // string as first parameter and character
    // to be filled in given size as second
    // parameter.
    string s(1, x);

    return s;
}

void file_i_o()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

//str is the input the string
string compressString(const string &str)
{
    char ch = str[0];
    // int i = 0 ;
    int n = str.size();
    int cnt = 1;

    string ans = "";

    for (int i = 1; i < n; i++)
    {
        if (str[i] == ch)
        {
            cnt++;
        }
        else
        {
            ans += getString(ch) + to_string(cnt);
            cnt = 1;
            ch = str[i];
        }
    }

    ans += getString(ch) + to_string(cnt);

    return ans;
}

int main()
{

    file_i_o();

    string s;
    cin >> s;

    cout << compressString(s) << endl;

    return 0;
}