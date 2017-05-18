#include <bits/stdc++.h>
using namespace std;

struct node
{
	bool endmark;
	node* next[26 + 1];

	node(){
		endmark = false;

		for(int i = 0;i < 26;i++){
			next[i] = NULL;
		}
	}
} *root;

void insert(string s)
{
	int len = s.size();
	node* curr = root;
    for (int i = 0; i < len; i++) {
        int id = s[i] - 'a';
        cerr << "Success for: " << s[i] << endl;
        if (curr->next[id] == NULL)
            curr->next[id] = new node();
        curr = curr->next[id];
    }
    curr->endmark = true;
    
}


bool search(string s)
{
	int len = s.size();
	node* curr = root;

	for(int i = 0;i < len;i++){
		int id = s[i] - 'a';
		if(curr->next[id] == NULL)
			break;
		curr = curr->next[id];
		cerr << "cur next : " << curr->next[id] << endl;
	}
	if(curr == root){
		return false;
	}
	if(!curr->endmark){
		return true;
	}
	return false;
}

void del(node* cur)
{

	for(int i = 0;i < 26;i++){
		if(cur->next[i])
			del(cur->next[i]);

		//del(cur);
	}
	del(cur);

}
int main(int argc, char const *argv[])
{
	freopen("input.txt", "r", stdin);
	string a;
	int n, cnt = 0;
	scanf("%d\n", &n);
	cin >> a;
	insert(a);
	/*for(int i = 0;i < n;i++){
		cin >> a[i];
		insert(a[i]);
	}*/

	for(int i = 0;i < n;i++){
		cout << a[i];
	}
}
