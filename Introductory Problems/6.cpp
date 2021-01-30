#include <algorithm>
#include <map>
#include <string>
#include <iostream>
#include <vector>
#include <cmath>
//#include <bits/stdc++.h>
#include <string>
#include <queue>
#include <iomanip>
#include <climits>
#include <cstring>
#include <unordered_map>
#include <set>
#include <map>
using namespace std;
#define ff      first
#define ss      second
#define int     long long
#define pb      push_back
#define mp      make_pair
#define pii     pair<int,int>
#define vi      vector<int>
#define mii     map<int,int>
#define umii    unordered_map<int,int>
#define pqg     priority_queue<int>
#define pqs     priority_queue<int,vi,greater<int>>
#define mod     1000000007
#define rep(i, a, n)    for(int i = a; i < n ; i++)
#define w(x)    int x; cin>>x; while(x--)
//transform(sl.begin(), sl.end(), sl.begin(), ::tolower);

// const int n = 2000000;
// vector<char> is_prime(n + 1, true);
// void seive() {
// 	is_prime[0] = is_prime[1] = false;
// 	for (int i = 2; i <= n; i++) {
// 		if (is_prime[i] && (long long)i * i <= n) {
// 			for (int j = i * i; j <= n; j += i)
// 				is_prime[j] = false;
// 		}
// 	}
// }

int n;

int32_t main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	if (fopen("../input.txt", "r"))
	{
		freopen("../input.txt", "r", stdin);
		freopen("../output.txt", "w", stdout);
	}
#endif
	cin >> n;
	int sum = n * (n + 1) / 2;
	if (sum % 2 == 0) {
		cout << "YES\n";
		int total = sum / 2;
		vi a, b;
		while (n) {
			if (total - n >= 0) {
				a.pb(n);
				total -= n;
			}
			else b.pb(n);
			n--;
		}
		cout << a.size() << "\n";
		for (auto i : a) cout << i << " ";
		cout << endl;
		cout << b.size() << "\n";
		for (auto i : b)cout << i << " ";

	} else {
		cout << "NO\n";
	}

}
