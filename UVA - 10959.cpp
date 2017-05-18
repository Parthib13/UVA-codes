#include <bits/stdc++.h>
using namespace std;
#define INF 1000006
vector <int> a[100100];
int d[100010], n, q;

void dfs(int src)
{
    int sz = a[src].size();

    if(sz == 0){
        return;
    }
    for(int i = 0;i < sz;i++){
        if(d[a[src][i]] < d[src] + 1){
            continue;
        }
        else{
            d[a[src][i]] = d[src] + 1;
            int sc = a[src][i];
            dfs(sc);
        }
    }
}
int main()
{
    #ifdef parthibpc
    freopen("inputt.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif // parthibpc
    int t;
    cin >> t;

    while(t--){

        cin >> n >> q;

        for(int i = 0;i < n;i++){
            d[i] = INF;
        }
        for(int i = 0;i < n;i++){
            a[i].clear();
        }
        while(q--){
            int u, v;
            cin >> u >> v;

            a[u].push_back(v);
            a[v].push_back(u);
        }
        d[0] = 0;
        dfs(0);
        //cerr <<"Case: " << t << endl;
        for(int i = 1;i < n;i++)
            cout << d[i] << endl;

       if(t != 0){
            cout << endl;
        }
    }
}
