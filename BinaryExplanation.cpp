#include<bits/stdc++.h>
using namespace std;
#define endl    '\n'
#define rep(i, s, n) for(int i = s; i < n; i++)
typedef long long int ll;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;

/*****User defined function*****/
const int inf = 1e9;

void solve_problem() {
    int n;
    cin >> n;

    rep(i, 0, n) {
        rep(j, 0, n)
            cout << 1 << " ";
        cout << endl;
    }
}

/*****main function*****/
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    cout << fixed << showpoint;
    cout << setprecision(5);

    int test = 1;
    cin >> test;
    while(test--)  solve_problem();

    return 0;
}
