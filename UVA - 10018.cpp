#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt = 0;
bool isP(string input)
{
    if (input == string(input.rbegin(), input.rend())) {
        return true;
    }
    else
        return false;
}

string int_to_str(ll a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;

}
ll string_to_int(string input)
{
    ll i3;
    stringstream stream1;
    //stream1.str("");
    stream1.str(input);
    stream1 >> i3;
    return i3;
}
string make_rev(string input)
{
    string str = string(input.rbegin(), input.rend());
    return str;
}
ll sum(ll n)
{
    cnt++;
    string n2 = int_to_str(n);
    n2 = make_rev(n2);
    ll fn = string_to_int(n2);
    ll ans = n+fn;
    if(isP(int_to_str(ans)))
        return ans;
    else
        return sum(ans);
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        cnt = 0;
        ll n;
        cin>>n;

        cout<<cnt<<" " <<sum(n)<<"\n";
    }
}
