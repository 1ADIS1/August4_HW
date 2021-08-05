#include <bits/stdc++.h>
using namespace std;

#define foor(i, a, b) for(i = a; i < b; i++)
#define foorb(i, a, b) for(i = a; i > b; i--)
#define ll long long
#define ull unsigned long long

const int MAXN = 20;
const int MAXVALUE  = 1000000;
int i, j, n, a[MAXN][MAXN], min_s, s;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    foor(i, 0, n)
        foor(j, 0, n)
            cin >> a[i][j];
    vector<int> v;
    foor(i, 1, n)
        v.push_back(i);
    foor(i, 0, n - 1)
        min_s += a[i][i + 1];
    min_s += a[n - 1][0];
    vector<int> res(n);
    while(next_permutation(v.begin(), v.end())){
        s = a[0][v[0]] + a[v[n - 2]][0];
        foor(i, 0, n - 2)
            s += a[v[i]][v[i + 1]];
        if(s < min_s){
            min_s = s;
            res = v;
        }
    }
    cout << min_s << "\n0 ";
    for(auto el: res)
    cout << el << " ";
    cout << "0";

}
