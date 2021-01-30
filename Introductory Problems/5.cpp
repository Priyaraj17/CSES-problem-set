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

int n, m;

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

	int n;
	cin >> n;
	if (n <= 3 && n != 1)
		cout << "NO SOLUTION\n";
	else {
		int j = 1;
		for (int i = 2; i <= n; i += 2)
			cout << i << " ";
		for (int i = 1; i <= n; i += 2)
			cout << i << " ";
		cout << "\n";
	}
}
