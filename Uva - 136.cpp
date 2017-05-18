#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, k;
    cin>>n>>m>>k;
    m-=1;
    int flag1 = -1, flag2 = 0;
    int a[n];
    for(int i = 0;i < n;i++){
        cin>>a[i];
    }
    for(int i = 0;i < n;i++){
        if(i == m){
            continue;
        }
        else{
            if(a[i] != 0 && a[i] <= k){
                if(flag1 != -1)
                    flag1 = min(flag1, abs(i-m)*10);
                else
                    flag1 = abs(i-m)*10;
            }
        }
    }
    cout<<flag1<<endl;

}
