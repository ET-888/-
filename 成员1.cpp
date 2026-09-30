#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
using namespace std;
class MyClass {
public:
    void fun(vector<int>& arr) {
        if (arr.size() <= 1) return;

        int minIndex = 0;
        for (size_t i = 1; i < arr.size(); i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        swap(arr[minIndex], arr[arr.size() - 1]);
    }
};
int main() {
    int n;
    char comma;
    cin >> n >> comma;
    string inputLine;
    getline(cin, inputLine);

    stringstream ss(inputLine);
    string item;
    vector<int> arr;
    while (getline(ss, item, ',')) {
       
        size_t first = item.find_first_not_of(" \t");
        size_t last = item.find_last_not_of(" \t");

        if (first != string::npos) {
            arr.push_back(stoi(item.substr(first, last - first + 1)));
        }
    }
    MyClass obj;
    obj.fun(arr);
    for (size_t i = 0; i < arr.size(); i++) {
        cout << arr[i];
        if (i != arr.size() - 1) {
            cout << ", ";
        }
    }
    cout << endl;
return 0;
}