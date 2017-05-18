#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a, b;
    while(cin>>a>>b){
        long long  cnt = 0;
        if(a == 0 && b == 0){
            return 0;
        }

        if(a / 10 == 0 && b/10 == 0){
            cout<<"No carry operation.\n";
            continue;
        }
        while(a > 0 && b > 0){
            int res1 = a%10;
            int res2 = b%10;
            a/=10;
            b/=10;
            if(res1+res2>=10)cnt++;
        }
        if(cnt>0)
            cout<<cnt<<" carry operations.\n";
        else
            cout<<"No carry operation.\n";
    }
}
