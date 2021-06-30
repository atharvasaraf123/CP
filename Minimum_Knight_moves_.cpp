#include <bits/stdc++.h>
using namespace std;
#define bolt                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0)
#define test   \
    int tt;    \
    cin >> tt; \
    while (tt--)
#define ll long long
#define ld long double
#define vi vector<ll>
#define pb push_back
#define F first
#define S second
#define mod 1000000007
#define all(v) v.begin(), v.end()
#define allr(v) v.rbegin(), v.rend()
class Knight
{
public:
    int x;
    int y;
    int dist;
 
    Knight(int x, int y, int dist)
    {
        this->x = x;
        this->y = y;
        this->dist = dist;
    }
};
int main()
{
    bolt;
    test
    {
        string start, end;
        cin >> start >> end;
        vector<vector<bool>> visited(9, vector<bool>(9, false));
        int sx = start[0] - 'a'+1;
        int sy = start[1] - '0';
        int ex = end[0] - 'a'+1;
        int ey = end[1] - '0';
        Knight k = Knight(sx, sy, 0);
        queue<Knight> q;
        q.push(k);
        visited[sx][sy] = true;
        int ans = 0;
        // cout<<"Abc";
        // cout<<sx<<" "<<sy<<" "<<ex<<" "<<ey<<endl;
        while (!q.empty())
        {
            // cout<<"hell";
            Knight k = q.front();
            q.pop();
            if(k.x==ex&&k.y==ey){
                ans=k.dist;
                break;
            }
            if (k.x + 2 <= 8)
            {
                if (k.y + 1 <= 8)
                {
                        if (!visited[k.x + 2][k.y + 1])
                        {
                            visited[k.x + 2][k.y + 1] = true;
                            q.push(Knight(k.x + 2, k.y + 1, k.dist + 1));
                        }
                }
                if (k.y - 1 >= 1)
                {
                    
                        if (!visited[k.x + 2][k.x - 1])
                        {
                            visited[k.x + 2][k.y - 1] = true;
                            q.push(Knight(k.x + 2, k.y - 1, k.dist + 1));
                        }
                }
            }
            if (k.x - 2>=1)
            {
                 if (k.y + 1 <= 8)
                {
                    
                    
                        if (!visited[k.x - 2][k.y + 1])
                        {
                            visited[k.x - 2][k.y + 1] = true;
                            q.push(Knight(k.x - 2, k.y + 1, k.dist + 1));
                        }
                
                }
                if (k.y - 1 >= 1)
                {
                   
                        if (!visited[k.x - 2][k.y - 1])
                        {
                            visited[k.x - 2][k.y - 1] = true;
                            q.push(Knight(k.x - 2, k.y - 1, k.dist + 1));
                        }
                    
                }
            }
            if(k.y+2<=8)
            {
                if (k.x + 1 <= 8)
                {
                    
                        if (!visited[k.x + 1][k.y + 2])
                        {
                            visited[k.x + 1][k.y + 2] = true;
                            q.push(Knight(k.x + 1, k.y + 2, k.dist + 1));
                        }
                    
                }
                if (k.x - 1 >= 1)
                {
                    
                        if (!visited[k.x - 1][k.y + 2])
                        {
                            visited[k.x - 1][k.y + 2] = true;
                            q.push(Knight(k.x - 1, k.y + 2, k.dist + 1));
                        }
                    
                }
            }
            if (k.y - 2>=1)
            {
                 if (k.x + 1 <= 8)
                {
                    
                        if (!visited[k.x +1][k.y - 2])
                        {
                            visited[k.x +1][k.y - 2] = true;
                            q.push(Knight(k.x +1, k.y - 2, k.dist + 1));
                        }
                    
                }
                if (k.x - 1 >= 1)
                {
                
                        if (!visited[k.x - 1][k.y - 2])
                        {
                            visited[k.x - 1][k.y - 2] = true;
                            q.push(Knight(k.x - 1, k.y - 2, k.dist + 1));
                        }
                    
                }
            }
        }
        cout<<ans<<endl;
    }
}