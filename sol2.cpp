#include <bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;

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

