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

int main(int argc, char *argv[]) {
	int numCases;
	cin >> numCases;
	for (int cases = 0; cases < numCases; ++cases) {
		int n;
		cin >> n;
		if (n == 1) {
			cout << -1 << endl;
			continue;
		}
		
		string s("");
		if ((n-1) % 3 == 0) {
			s += "3";
			int i;
			for (i = 1; i <= n-2; ++i) s += "2";
	
			s += "3";
		}
		else {
			int i;
			for (i = 1; i <= n-1; ++i) s += "2";
	
			s += "3";
		}
		
		cout << s << endl;
	}
}