#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	int minDeletionSize(vector<string>& strs) {
		int n = strs[0].size(), m = strs.size(), cnt = 0;
		for (int i = 0; i < n; i++) {
			char c = strs[0][i];
			for (int j = 0; j < m; j++) {
				if (strs[j][i] < c) {
					cnt++;
					break;
				}
				c = max(c, strs[j][i]);
			}
		}
		return cnt;
	}
};


void solve(Solution *s) {
	int n; cin >> n;
	vector<string> strs(n);
	string space;
	getline(cin, space);
	for (int i = 0; i < n; i++) getline(cin, strs[i]);
	cout << s->minDeletionSize(strs) << endl;
}

int main() {
#ifndef ONLINE_JUDGE
	freopen("../../../inputf.in", "r", stdin);
	freopen("../../../outputf.in", "w", stdout);
	freopen("../../../errorf.in", "w", stderr);
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	Solution *s = new Solution();
	int t;
	cin >> t;
	string space;
	getline(cin, space);
	while (t-- > 0)
		solve(s);
	return 0;
}
