#include <iostream>
using namespace std;
bool cns(int list1[], int list2[], int s1, int s2){
    int x;
    for(int i = 0; i < s1-s2+1; i++){
        x = 0;
        for(int j = 0; j < s2; j++){
            if(list1[i+j] != list2[j]) break;
            x++;
        }
        if(x == s2) return true;
    }
    return false;
}
int main() {
    int s1, s2;
    cin >> s1 >> s2;
    int list1[s1], list2[s2];
    for(int i = 0; i < s1; i++){
        cin >> list1[i];
    }
    for(int i = 0; i < s2; i++){
        cin >> list2[i];
    }
    if(cns(list1, list2, s1, s2)) cout << "Yes";
    else cout << "No";
    return 0;
}