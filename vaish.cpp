#include <bits/stdc++.h>
#define pb push_back
#define int long long
#define endl '\n'
#define all(x) (x).begin(),(x).end()
#define deb(x) cout<<#x<<"="<<x<<endl;
#define test int T;cin>>T;while(T--)
using namespace std;

const int MOD = 1e9 + 7;
const int INF = 1e9 + 9;
const int N   = 1005;

int mt[N][N], dp[N][N];

signed main() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.precision(10);
        cout << fixed;
        int n, m;
        cin >> n >> m;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= m; j++) {
                cin >> mt[i][j];
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + mt[i][j];
            }
        }
        double ans = 0.0;
        int q;
        cin >> q;
        while (q--) {
            int x1, y1, x2, y2;
            double p;
            cin >> x1 >> y1 >> x2 >> y2 >> p;
            int area = dp[x2][y2] - dp[x2][y1 - 1] - dp[x1 - 1][y2] + dp[x1 - 1][y1 - 1];
            ans += p * area;
        }
        cout << ans;
        return 0;
}
