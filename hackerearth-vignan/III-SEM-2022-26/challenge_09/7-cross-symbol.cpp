#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (i == 1 || i == n || j == 1 || j == n || i == j || i == (n - j + 1)) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
            cout << "\n";
        }
    }
    return 0;
}
