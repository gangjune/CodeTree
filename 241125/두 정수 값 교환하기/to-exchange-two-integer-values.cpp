#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main() {
    int n, m;
    cin >> n >> m;
    swap(&n, &m);
    cout << n << " " << m;
    return 0;
}