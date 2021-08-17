#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small)
{

    vector<int> result;
    int index = big.find(small);
    while (index != -1)
    {
        result.push_back(index);
        index = big.find(small, index + 1);
    }

    return result;
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

int main()
{

    clock_t begin = clock();
    file_i_o();

    string a, b;
    cin >> a >> b;
    
    vector<int> v;
    v = stringSearch(a, b);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;

#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif

    return 0;
}