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
	int n, a, b;
	cin >> n;
	
	// n = 0
	cin >> b;
	a = b;
	cout << a << " ";
	int maxa = a;
	
	for(int i = 1; i < n; ++i) {
		cin >> b;
		a = b + max(maxa,a);
		if (a > maxa) maxa = a;
		
		if (i != n-1) cout << a << " ";
		else cout << a;
	}
} 