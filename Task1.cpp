#include <bits/stdc++.h>
using namespace std;

#define foor(i, a, b) for(i = a; i < b; i++)
#define foorb(i, a, b) for(i = a; i > b; i--)
#define ll long long
#define ull unsigned long long

const int MAXN = 6;
const int MAXVALUE  = 1000000;
int i, j, n, a[MAXN][MAXN];


void f_4(){
    int i, j, k, l, m, min_s = MAXVALUE, s;
    vector<int> v(5);
    foor(i, 1, n){
        foor(j, 1, n){
            foor(k, 1, n){
                    set<int> st = {0, i, j, k};
                    if (st.size() != 4)
                        continue;
                    s = a[0][i] + a[i][j] + a[j][k] + a[k][0];
                    if(s < min_s){
                        min_s = s;
                        v = {0, i, j, k, 0};
                    }

            }
        }
    }
    cout << min_s << "\n";
    for(auto el: v)
        cout << el << " ";
}
void f_5(){
    int i, j, k, l, m, min_s = MAXVALUE, s;
    vector<int> v(6);
    foor(i, 1, n){
        foor(j, 1, n){
            foor(k, 1, n){
                foor(m, 1, 5){
                    set<int> st = {0, i, j, k, m};
                    if (st.size() != 5)
                        continue;
                    s = a[0][i] + a[i][j] + a[j][k] + a[k][m] + a[m][0];

                    if(s < min_s){
                        min_s = s;
                        v = {0, i, j, k, m, 0};
                    }

                }
            }
        }
    }

    cout << min_s  << "\n";
    for(auto el: v)
        cout << el << " ";
}

void f_6(){
    int i, j, k, l, m, min_s = MAXVALUE, s;
    vector<int> v(7);
    foor(i, 1, n){
        foor(j, 1, n){
            foor(k, 1, n){
                foor(l, 1, n){
                    foor(m, 1, n){
                        set<int> st = {0, i, j, k, l, m};
                        if (st.size() != 6)
                            continue;
                        s = a[0][i] + a[i][j] + a[j][k] + a[k][l] + a[l][m] + a[m][0];
                        if(s < min_s){
                            min_s = s;
                            v = {0, i, j, k, l, m, 0};
                        }
                    }
                }
            }
        }
    }

    cout << min_s << "\n";
    for(auto el: v)
        cout << el << " ";
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    foor(i, 0, n)
        foor(j, 0, n)
            cin >> a[i][j];
    if(n == 4)
        f_4();
    else if (n == 5)
        f_5();
    else if(n == 6)
        f_6();
    else
        cout << "Innappropriate n";
}
