#include<iostream>
#include<math.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin >> t;
	int x1, x2, x3, y1, y2, y3;
	while (t--) {
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		int p = abs(x1 - x2) + abs(y1 - y2);
		p = 
		(x1 != x2 && y1 != y2) 
		|| (y1 == y2) && x3 < min(x1, x2) || (y1 == y2) && x3 > max(x1, x2) 
		|| (x1 == x2) && y3 < min(y1, y2) || (x1 == x2) && y3 > max(y1, y2)
		? p : p + 2;
		cout << p << endl;
	}
}