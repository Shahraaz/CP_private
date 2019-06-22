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
	int n, l;
	cin >> n >> l;
	// n--;
	// l++;
	ll ans = 0;
	vector<int> v;
	for (int i = 0; i < n; ++i)
	{
		ans += l;
		v.pb(l);
		l++;
	}
	int min, minval;
	minval = 1e9;
	for (int i = 0; i < n; ++i)
	{
		// cout << abs(v[i]) << ' ' << abs(minval) << '\n';
		if (abs(v[i]) < abs(minval))
		{
			// cout << "Here";
			minval = v[i];
			// min = v[i];
		}
	}
	// cout << ans << '\n';
	cout << ans - minval;
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