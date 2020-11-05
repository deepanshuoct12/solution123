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

	const int sum = 1000;
	int a;
	for (a = 1; a <= sum / 3; a++)
	{
		int b;
		for (b = a + 1; b <= sum / 2; b++)
		{
			int c = sum - a - b;
			if ( a * a + b * b == c * c )
				cout << a*b*c;
		}
	}
	return 0;
}
