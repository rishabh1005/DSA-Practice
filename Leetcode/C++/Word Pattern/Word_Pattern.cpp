#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
	vector<string> splitString(string s) {
		vector<string> words;
		string word = "";
		for (char c : s) {
			if (c != ' ') word += c;
			else {
				words.push_back(word);
				word = "";
			}
		}
		words.push_back(word);
		return words;
	}

	bool wordPattern(string pattern, string s) {
		vector<string> words = splitString(s);
		if (words.size() != pattern.size()) return false;
		unordered_map<char, string> cts;
		unordered_map<string, char> stc;
		for (int i = 0; i < pattern.size(); i++) {
			char c = pattern[i];
			string word = words[i];
			if (cts.find(c) != cts.end() and cts[c] != word) return false;
			cts[c] = word;
			if (stc.find(word) != stc.end() and stc[word] != c) return false;
			stc[word] = c;
		}
		return true;
	}
};


void solve(Solution *s) {
	string pattern, str;
	getline(cin, pattern);
	getline(cin, str);
	cout << s->wordPattern(pattern, str) << endl;
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
