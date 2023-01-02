#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	bool detectCapitalUse(string word) {
		int cnt = 0;
		for (char c : word) {
			cnt += (c >= 'A' and c <= 'Z');
		}
		return (cnt == word.length() or !cnt or
		        (cnt == 1 and word[0] >= 'A' and word[0] <= 'Z'));
	}
};


void solve(Solution *s) {
	string word;
	getline(cin, word);
	cout << s->detectCapitalUse(word) << endl;
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
