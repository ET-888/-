#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class MyClass {
public:
    void fun(int arr[], int n) {
        if (n <= 1) return;

        int minIndex = 0;
        for (int i = 1; i < n; i++) {
            if (arr[i] < arr[minIndex]) {
                minIndex = i;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[n - 1];
        arr[n - 1] = temp;
    }
};

int main() {
    string line;
    getline(cin, line);
    for (char& c : line) {
        if (c == ',') {
            c = ' ';
        }
    }
    stringstream ss(line);
    int n;
    ss >> n; 
    int arr[100];
    for (int i = 0; i < n; i++) {
        ss >> arr[i];
    }

    MyClass obj; 
    obj.fun(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1) cout << ", ";
    }
    cout << endl;

    return 0;
}