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
