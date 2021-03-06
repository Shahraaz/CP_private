//Optimise
#include <bits/stdc++.h>
using namespace std;

// #define multitest 1
// #define Debug 1
#ifdef Debug
#define db(...) ZZ(#__VA_ARGS__, __VA_ARGS__);
template <typename Arg1>
void ZZ(const char *name, Arg1 &&arg1)
{
	std::cerr << name << " = " << arg1 << endl;
}
template <typename Arg1, typename... Args>
void ZZ(const char *names, Arg1 &&arg1, Args &&... args)
{
	const char *comma = strchr(names + 1, ',');
	std::cerr.write(names, comma - names) << " = " << arg1;
	ZZ(comma, args...);
}
#else
#define db(...)
#endif

typedef long long ll;
typedef long double ld;
#define f first
#define s second
#define pb push_back
const long long mod = 1000000007;

void solve()
{
	int n;
	cin >> n;
	vector<int> dp(3), inp(3);
	for (int i = 0; i < n; ++i)
	{
		cin >> inp[0] >> inp[1] >> inp[2];
		vector<int> newDp(3);
		newDp[0] = inp[0] + max(dp[1], dp[2]);
		newDp[1] = inp[1] + max(dp[0], dp[2]);
		newDp[2] = inp[2] + max(dp[1], dp[0]);
		dp = newDp;
	}
	cout << max(max(dp[0], dp[1]), dp[2]);
}

int main()
{
#ifndef Debug
	ios_base::sync_with_stdio(0);
	cin.tie(0);
#endif
	int t = 1;
#ifdef multitest
	cin >> t;
#endif
	while (t--)
		solve();
	return 0;
}