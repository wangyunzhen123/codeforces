// codeforces.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include <iostream>
#include<math.h>
#include<algorithm>
#include<vector>
using namespace std;

struct Pos
{
	int x;
	int y;
};

int shortest(Pos pos1, Pos pos2) {
	return abs(pos1.x - pos2.x) + abs(pos1.y - pos2.y);
}

int main()
{
	int n, i = 0;
	cin >> n;
	while (i < n)
	{
		cout << endl;
		Pos pos1, pos2, pos3;
		int x1, x2, x3, y1, y2, y3;
		cin >> x1; cin >> y1; cin >> x2; cin >> y2; cin >> x3; cin >> y3;
		pos1.x = x1; pos1.y = y1;
		pos2.x = x2; pos2.y = y2;
		pos3.x = x3; pos3.y = y3;

		if (x1 == x2 && x2 == x3) {
			if ((y1 < y2 && y3 < y2 && y3 > y1) || y1 > y2 && y3 > y2 && y3 < y1) {
				cout << shortest(pos1, pos2) + 2;
			}
			else {
				cout << shortest(pos1, pos2);
			}
		}

		if (y1 == y2 && y2 == y3) {
			if ((x1 < x2 && x3 < x2 && x3 > x1) || x1 > x2 && x3 > x2 && x3 < x1) {
				cout << shortest(pos1, pos2) + 2 ;
			}
			else {
				cout << shortest(pos1, pos2);
			}
		}

		if ((x3 != x2 || x3 != x1) && (y3 != y2 || y3 != y1)) {
			cout << shortest(pos1, pos2);
		}

		i++;
	}

}
