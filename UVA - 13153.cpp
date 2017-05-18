#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t, kase = 0;
    cin>>t;
    while(t--){
        ll n;
    cin>>n;
        ll  cnt = 0;
        ll arr[n+1];
        for(int i = 0;i < n;i++)
            cin>>arr[i];
        for(int i = 0;i < n;i++){
            for(int j = 0;j < n;j++){
                if(__gcd(arr[i], arr[j]) > 1)
                    cnt++;
            }
        }
        cout<<"Case "<<++kase<<": "<<cnt<<"\n";
    }
}
