#include <iostream>
using namespace std;
int main() {
    int i = 1; 
    while (i <= 9) {
        int j = 1; 
        while (j <= i) {
            cout << j << "×" << i << "=" << i * j;
            if (j < i) {
                cout << " ";
            }
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}