#include <iostream>
#include <math.h>
#include <algorithm>
#include <string>
#include <list>
#include <vector>
#include <set>
#include <unordered_set>
#include <map>
#include <unordered_map>
#include <queue>
#include <stack>
#include <limits>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <fstream>
#include <memory>
#include <limits>
#include <numeric>
using namespace std;

string search(string &s, int start, int end) {
	if (start == end) return s.substr(start,1);
	if (start+1 == end) return ( s[start]==s[end] ? s.substr(start,2) : s.substr(start,1) );
	
	int preStart = start, preEnd = end;
	
	string pre(""), suf("");
	while (start <= end && s[start] == s[end]) {
		if (start == end) {
			pre += s[start];
			return pre + suf;
		}
		else if (start+1 == end) {
			pre += s[start];
			suf.insert(suf.begin(), s[end]);
			return pre + suf;	
		}
		else {
			pre += s[start++];
			suf.insert(suf.begin(), s[end--]);
		}
	}
	
	string a = search(s, start+1, end);
	if (!a.empty()) {
		if (a[0] == s[start+1] || a[a.size()-1] == s[end]) {
			
		}
		else {
			a = "";
		}
	}
	
	string b = search(s, start, end-1);
	if (!b.empty()) {
		if (b[0] == s[start] || b[b.size()-1] == s[end-1]) {
			
		}
		else {
			b = "";
		}
	}
	
	if (a == "" && b == ""){
		if (start == 0 && end == s.size()-1) return s.substr(start,1);
		else return "";
	} 
	
	if (a.size() > b.size()) return pre + a + suf;
	else return pre + b + suf;
}

int main(int argc, char *argv[]) {
	int numCases;
	cin >> numCases;
	for (int i = 0; i < numCases; ++i) {
		string s;
		cin >> s;
		
		int start = 0, end = s.size()-1;
		cout << search(s, start, end) << endl;
	}
}