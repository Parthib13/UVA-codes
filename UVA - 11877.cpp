#include <bits/stdc++.h>
using namespace std;
int res =0;
int ans = 0;
int sum = 0;
int botl(int n)
{
    ans = n/3;
    res = n%3;
    sum+=ans;
    if(ans+res >= 3)
        return botl(ans+res);
    else if(ans + res == 2)
        return sum+1;
    else
        return sum;
}
int main()
{
    int t;
    //cin>>t;
    int n;

    while(cin>>n){
        res =0;
        ans = 0;
        sum = 0;
        //sum+=n;
        if(n == 0)
            return 0;
        cout<<botl(n)<<endl;




    }
}
