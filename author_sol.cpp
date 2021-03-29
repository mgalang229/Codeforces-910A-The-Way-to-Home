#include <bits/stdc++.h>

using namespace std;
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int n, d;
	string s;
	cin >> n >> d >> s;
	const int inf = (int) 1e4;
	vector<int> distance(n, inf);
	distance[0] = 0;
	// use the concept of dynamic programming to get the distances
	for (int i = 0; i < n; i++) {
		if (s[i] == '1') {
			for (int j = 0; j <= d; j++) {
				if (i + j < n && s[i + j] == '1') {
					distance[i + j] = min(distance[i + j], distance[i] + 1);
				}
			}
		}
	}
	cout << (distance[n - 1] == inf ? -1 : distance[n - 1]) << '\n';
	return 0;
}
