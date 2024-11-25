#include <iostream>
using namespace std;
int f(int a, int c, char o){
    if(o == '+') return a+c;
    else if(o == '-') return a-c;
    else if(o == '/') return a/c;
    else if(o == '*') return a*c;
    else return -1;
}
int main() {
    int a, c;
    char o;
    cin >> a >> o >> c;
    if(f(a, c, o) == -1) cout << "False";
    else cout << a << " " << o << " " << c << " = " << f(a, c, o);

    return 0;
}