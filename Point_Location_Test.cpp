#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll M = 1e7+10;
#define endl '\n'

void solve(){
    ll x1, x2, x3, y1, y2, y3;

    cin>>x1>>y1>>x2>>y2>>x3>>y3;

    ll cr = (x2 - x1) * (y3 - y1) - (y2 - y1) * (x3 - x1);

    if(cr == 0) cout<<"TOUCH"<<endl;
    else if(cr > 0) cout<<"LEFT"<<endl;
    else cout<<"RIGHT"<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    ll t;
    cin >> t;
    for(int i = 1; i <= t; i++){
        solve();
    }

    return 0;
}