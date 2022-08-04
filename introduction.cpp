#include <bits/stdc++.h>
//#include<ext/pb_ds/assoc_container.hpp>
//#include<ext/pb_ds/tree_policy.hpp>
//#include <ext/pb_ds/trie_policy.hpp>
// using namespace __gnu_pbds;
using namespace std;
#define ll long long int
#define ld long double
#define mod 1000000007
#define inf 1e18
#define nl "\n"
#define pb push_back
#define vi vector<ll>
#define vs vector<string>
#define pii pair<ll, ll>
#define ump unordered_map
#define mp make_pair
#define pq_max priority_queue<ll>
#define pq_min priority_queue<ll, vi, greater<ll>>
#define all(n) n.begin(), n.end()
#define ff first
#define ss second
#define mid(l, r) (l + (r - l) / 2)
#define bitc(n) __builtin_popcount(n)
#define loop(i, a, b) for (int i = (a); i <= (b); i++)
#define looprev(i, a, b) for (int i = (a); i >= (b); i--)
#define iter(container, it) for (__typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define log(args...)                             \
    {                                            \
        string _s = #args;                       \
        replace(_s.begin(), _s.end(), ',', ' '); \
        stringstream _ss(_s);                    \
        istream_iterator<string> _it(_ss);       \
        err(_it, args);                          \
    }
#define logarr(arr, a, b)            \
    for (int z = (a); z <= (b); z++) \
        cout << (arr[z]) << " ";     \
    cout << endl;
template <typename T>
T gcd(T a, T b)
{
    if (a % b)
        return gcd(b, a % b);
    return b;
}
template <typename T>
T lcm(T a, T b) { return (a * (b / gcd(a, b))); }
vs tokenizer(string str, char ch)
{
    std::istringstream var((str));
    vs v;
    string t;
    while (getline((var), t, (ch)))
    {
        v.pb(t);
    }
    return v;
}

void err(istream_iterator<string> it) {}
template <typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cout << *it << " = " << a << endl;
    err(++it, args...);
}
// typedef tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;
// typedef trie<string,null_type,trie_string_access_traits<>,pat_trie_tag,trie_prefix_search_node_update> pbtrie;

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

int main(int argc, char const *argv[])
{
    clock_t begin = clock();
    file_i_o();
    // Arrays is Cpp

    int a[100];
    int b[100] = {0};
    int c[100] = {1, 2, 3, 4};
    int d[] = {2, 3, 4, 5, 6};
    string fruits[4] = {"apple", "mango"};

    // Vectors

    vector<int> arr;
    cout << arr.size() << endl;

    vector<int> v = {1, 2, 3, 4, 5, 6};

    cout << v.size() << endl;
    cout << v.capacity() << nl;

    v.push_back(7);

    cout << v.size() << endl;
    cout << v.capacity() << nl;

    loop(i, 0, v.size() - 1)
    {
        cout << v[i] << " ";
    }
    cout << nl;

    v.pop_back();

    loop(i, 0, v.size() - 1)
    {
        cout << v[i] << " ";
    }
    cout << nl << nl ;

    vector<bool> visited(100, true);

    //2D Vectors

    vector<vector<int>> k=
    {
        {1,2,3,4},
        {2,3,4},
        {3,4,5,6,7,8,4},
        {3}
    };

    loop(i , 0 , k.size()-1){
        for(int n:k[i]){
            cout << n << " ";

        }cout << nl ;
    }
    cout << nl ;

    k[0][1] += 10 ;
     loop(i , 0 , k.size()-1){
        for(int n:k[i]){
            cout << n << " ";

        }cout << nl ;
    }


#ifndef ONLINE_JUDGE
    clock_t end = clock();
    cout << "\n\nExecuted In: " << double(end - begin) / CLOCKS_PER_SEC * 1000 << " ms";
#endif
    return 0;
}