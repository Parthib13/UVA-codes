#include <bits/stdc++.h>
using namespace std;

int main()
{
    string alp = "qwertyuiopasdfghjklzxcvbnm";
    int alen = alp.size();
    char a[100];
    gets(a);
    int len = strlen(a);
    for(int i = 0;i < len;i++)
        a[i] = tolower(a[i]);
    for(int i = 0;i < len;i++){
            if(a[i] == ' ')
                continue;
            else if(a[i] == '[')
                a[i] = 'o';
            else if(a[i] == ']')
                a[i] = 'p';
            else if(a[i] == ';')
                a[i] = 'k';
            else if(a[i] == )
        for(int j = 0;j < alen;j++){
            if(a[i] == alp[j]){
                a[i] = alp[j-2];
                break;
            }

        }
    }
    cout<<a<<endl;
}
