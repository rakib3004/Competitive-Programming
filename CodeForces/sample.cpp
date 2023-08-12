#include<bits/stdc++.h>
using namespace std;
#define endl    '\n'
#define all(v)   v.begin(), v.end()
#define rep(i, s, n)  for(int i = s; i <= n; i++)
#define rev(i, n, s)  for(int i = n; i >= s; i--)
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef vector<vector<int>> vii;


void module() {

int n;

cin>>n;
string s;

cin>>s;
int add=0;
int remove=0;
int firstRemove =0;

bool isNeg=true;

for(i=0;i<n;i++){
    if(s[i]=='+'){
        add++;
    }
    else{
        remove++;
    }
}

int total = add-remove;

int ans = min(n+total+remove, 0+total+remove);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cout << fixed << showpoint;
    cout << setprecision(15);

    int test = 1;
    // cin >> test;
    while(test--) module();

    return 0;
}
