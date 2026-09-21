#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class MyClass {
public:
	void fun(vector<int>& arr) {
		if (arr.empty())return;
		int minIndex = 0;
		for (int i = 1;i < arr.size();++i) {
			if (arr[i] < arr[minIndex]) {
				minIndex = i;
			}
		}
		int lastIndex = arr.size() - 1;
		swap(arr[minIndex], arr[lastIndex]);
	}
};
int main() {
	int n;
	if (!(cin >> n))return 0;
	vector<int>arr(n);
	for (int i = 0;i < n;++i) {
		cin >> arr[i];
	}
	MyClass obj;
	for (int i = 0;i < n;++i) {
		cout << arr[i] << (i == n - 1 ? "" : ",");
	}
	cout << endl;
	obj.fun(arr);
	for (int i = 0;i < n;++i) {
		cout << arr[i] << (i == n - 1 ? "" : ",");
	}
	cout << endl;
	return 0;
}