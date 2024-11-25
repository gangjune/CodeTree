#include <iostream>
#include <cstring>
using namespace std;
int cns(char list1[], char list2[], int s1, int s2){
    int x;
    for(int i = 0; i < s1-s2+1; i++){
        x = 0;
        for(int j = 0; j < s2; j++){
            if(list1[i+j] != list2[j]) break;
            x++;
        }
        if(x == s2) return i;
    }
    return -1;
}
int main() {
    char str1[1000];
    char str2[1000];
    int M, N;
    cin >> str1 >> str2;
    M = strlen(str1);
    N = strlen(str2);
    cout << cns(str1, str2, M, N);
    return 0;
}