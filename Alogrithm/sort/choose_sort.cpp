//选择排序
//每一次j循环找出未排序中的最小值，放到i的位置(未排序最前面的位置)
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void popo_sort(vector<int> &a) {
	for (unsigned int i = 0; i < a.size(); i++) {
		int min = i;
		for (unsigned int j = i + 1; j < a.size(); j++) {
			if (a[min] > a[j]) {
				min = j;
			}
		}
		swap(a[i], a[min]);
	}
}
int main() {
	vector<int> a = {1,2,3,5,8,9,6,4,7,0};
	popo_sort(a);
	for (int i = 0; i < a.size();i++) {
		cout << a[i] << "  ";
	}
	return 0;
}

