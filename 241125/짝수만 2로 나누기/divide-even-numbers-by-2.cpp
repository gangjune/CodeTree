#include <iostream>
using namespace std;
void eoprint(int N, int list[]){
    for(int i = 0; i < N; i++){
        if(list[i] % 2 == 0){
            cout << list[i]/2 << " ";
        }
        else cout << list[i] << " ";
    }
}
int main() {
    int N;
    cin >> N;
    int list[N];
    for(int i = 0; i < N; i++){
        cin >> list[i];
    }
    eoprint(N, list);
    return 0;
}