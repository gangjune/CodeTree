#include <iostream>
using namespace std;

void printstar(){
    for(int i = 0; i < 10; i++) cout << "*";
}
int main() {
    for(int i = 0; i < 5; i++) {
        printstar();
        cout << endl;
    }
    return 0;
}