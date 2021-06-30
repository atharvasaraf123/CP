#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define repp(i,a,b) for(ll i=a;i<=b;i++)
#define rrep(i,a,b) for(ll i=a;i>=b;i--)
#define endl "\n"
#define deb(x) cerr << #x << "=" << x << endl
#define debb(x, y) cerr << #x << "=" << x << "," << #y << "=" << y << endl
#define mod ((ll)1e9+7)
#define N ((ll)3e5+20)
#define pb push_back
#define in insert
#define F first
#define S second
#define lb lower_bound
#define ub upper_bound
#define PI 3.1415926535897932384626
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define speed ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test ll t; cin>>t; while(t--)
typedef pair<ll, ll> pll;
typedef vector<pll> vpll;
ll dr[] = { -1, 1, 0, 0};
ll dc[] = {0, 0, 1, -1};

/*Functions*/
ll gcd(ll a, ll b);
ll exp(ll x, ll y, ll p);
ll exp(ll x, ll y);
void InverseofNumber();
void InverseofFactorial();
void factorial();
ll Binomial(ll n, ll R);


ll factorialNumInverse[N + 1];
ll naturalNumInverse[N + 1];
ll fact[N + 1];

void fileIO() {
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int main() {
	clock_t start, end;
	start = clock();
	speed
	// InverseofNumber(), InverseofFactorial(), factorial();
	// fileIO();
	ll D, I, S, V, F;
	cin >> D >> I >> S >> V >> F;
	map<string, ll> mp;
	map<ll, string> pm;
	vector<ll>Q[S];
	ll B[S], E[S], L[S];
	for (ll i = 0; i < S; i++) {
		cin >> B[i] >> E[i];
		string city; cin >> city;
		mp[city] = i;
		pm[i] = city;
		cin >> L[i];
		Q[i].pb(B[i]);
		Q[i].pb(E[i]);
		Q[i].pb(L[i]);
	}
	vector<ll> cars[V];
	ll cost[V];
	memset(cost, 0, sizeof(cost));
	for (ll i = 0; i < V; i++) {
		ll P; cin >> P;
		for (ll j = 0; j < P; j++) {
			string s; cin >> s;
			cars[i].pb(mp[s]);
			if (j != 0)
				cost[i] += L[mp[s]];
		}

	}
	// for(ll i=0;i<V;i++){
	// 	cout<<"CAR #"<<i<<endl;
	// 	for(ll j=0;j<cars[i].size();j++){
	// 		cout<<pm[cars[i][j]]<<" ";
	// 	}
	// 	cout<<endl;
	// }
	ll mini = LLONG_MAX;
	ll minIndex = 0;
	for (ll i = 0; i < V; i++) {
		// cout << cost[i] << " ";
		if (cost[i] < mini) {
			mini = cost[i];
			minIndex = i;
		}
	}
	ll counter = 0;
	// cout<<minIndex<<endl;
	cout << cars[minIndex].size() << endl;
	for (ll i = 0; i < cars[minIndex].size(); i++) {
		cout << Q[cars[minIndex][i]][1] << endl;
		cout << 1 << endl;
		counter += Q[cars[minIndex][i]][2];
		cout << pm[cars[minIndex][i]] << " " << counter << endl;

	}






	end = clock();
	double timeTaken = (double(end - start) * (double(1000))) / double(CLOCKS_PER_SEC);
	deb(timeTaken);
	return 0;
}


/*All Functions*/
ll gcd(ll a, ll b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}

ll exp(ll x, ll y, ll p) {
	ll res = 1;
	while (y) {
		if (y % 2)
			res = (res * x % p) % p;
		x = (x * x) % p;
		y /= 2;
	}
	return res;
}
ll exp(ll x, ll y) {
	ll res = 1;
	while (y) {
		if (y % 2)
			res = (res * x ) ;
		x = (x * x) ;
		y /= 2;
	}
	return res;
}
void InverseofNumber() {
	naturalNumInverse[0] = naturalNumInverse[1] = 1;
	for (ll i = 2; i <= N; i++)
		naturalNumInverse[i] = naturalNumInverse[mod % i] * (mod - mod / i) % mod;
}
void InverseofFactorial() {
	factorialNumInverse[0] = factorialNumInverse[1] = 1;
	for (ll i = 2; i <= N; i++)
		factorialNumInverse[i] = (naturalNumInverse[i] * factorialNumInverse[i - 1]) % mod;
}
void factorial() {
	fact[0] = 1;
	for (ll i = 1; i <= N; i++)
		fact[i] = (fact[i - 1] * i);
}
ll Binomial(ll n, ll R) {
	ll ans = ((fact[n] * factorialNumInverse[R]) % mod * (factorialNumInverse[n - R]) % mod) % mod;
	return ans;
}

