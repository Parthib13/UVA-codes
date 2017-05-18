#include <bits/stdc++.h>
using namespace std;
int a[1001][1001], r, c;
bool visited[1001][1001];
int Cx[] = {1, -1, 0, 0};
int Cy[] = {0, 0, 1, -1};

struct Node
{
    int x;
    int y;
    int dist;
};
queue <Node> q;

int BFS(int sX, int sY, int eX, int eY){
    Node u, v;
    //int ans = -1;
    //int flag = 0;
    u.x = sX;
    u.y = sY;
    u.dist = 0;
    visited[u.x][u.y] = true;
    q.push(u);
    while(!q.empty()){
        u = q.front();
        q.pop();
        if(u.x==eX && u.y==eY){
            //ans = u.dist;
            return u.dist;
            break;
        }



        for(int i=0;i<4;i++){
            v.x = u.x+Cx[i];
            v.y = u.y+Cy[i];
            if(v.x >= 0 && v.x< r && v.y >= 0 && v.y<c && visited[v.x][v.y]==false && a[v.x][v.y] != -1){
                v.dist = u.dist+1;
                q.push(v);
                visited[v.x][v.y] = true;
            }
        }
    }
    //return flag;
}
/*struct Node
{
    int x;
    int y;
    int d;
};
queue <Node> q;*/

void reset(int r, int c)
{
    for(int i = 0;i < r;i++){
        for(int j = 0;j < c;j++){
            a[i][j] = 0;
        }
    }

    memset(visited, false, sizeof visited);

    while(!q.empty())
        q.pop();
}
int main()
{
    #ifdef parthibpc
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    #endif // parthibpc
    while(scanf("%d %d", &r, &c) != EOF){
        reset(r, c);
        if(r == 0 && c == 0){
            return 0;
        }
        int bomb;
        scanf("%d", &bomb);
        for(int i = 0;i < bomb;i++){
            int r, no;
            scanf("%d %d", &r, &no);

            while(no--){
                int col;
                scanf("%d", &col);
                a[r][col] = -1;
            }
        }
        int sX, sY, eX, eY;
        scanf("%d %d %d %d", &sX, &sY, &eX, &eY);
        /*for(int i = 0;i < 11;i++){
            for(int j = 0;j < 11;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }*/
        int ans = BFS(sX, sY, eX, eY);
        printf("%d\n", ans);

    }
}
