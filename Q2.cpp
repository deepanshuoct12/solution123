#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<double> vd;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<string> vs;
typedef vector<ll> vll;

int main()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif

	ll totalVal = 2000;
	ll denm[] = {10, 20, 50, 100, 200, 500, 1000, 2000};
	ll* dp = new ll[totalVal + 1];
	dp[0] = 1;
	for (ll i = 0; i < 8; i++) {
		for (ll j = denm[i]; j <= totalVal; j++) {
			dp[j] += dp[j - denm[i]];
		}
	}
	cout << dp[totalVal];
}
