#include <iostream>
using namespace std;
void absolute(int list[], int N){
    for(int i = 0; i<N; i++){
        list[i] = abs(list[i]);
    }
}
int main() {
    int N;
    cin >> N;
    int list[N];
    for(int i = 0; i<N; i++){
        cin >> list[i];
    }
    absolute(list, N);
    for(int i = 0; i<N; i++){
        cout << list[i] << " ";
    }
    return 0;
}