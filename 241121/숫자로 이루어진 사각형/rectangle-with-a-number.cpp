#include <iostream>
using namespace std;

int main() {
    int n;
    int p = 0;
    cin >> n;
    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            p++;
            if (p == 10) p = 1;
            cout << p << " ";
        }
        cout << endl;
    }
    
    return 0;
}