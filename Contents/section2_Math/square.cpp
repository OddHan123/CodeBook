#include<iostream>
#include<cmath>
using namespace std;

// 計算是否為完全平方數
bool isPerfectSquare(int x) {
    int y = sqrt(x);
    return y*y == x;
}

// using Lagrange's four-square theorem
bool checkAnswer4(int n) {
    while (n%4 == 0) {
        n /= 4;
    }
    return n%8 == 7;
}

// 計算數字是否可轉換成
// 平方數們的相加
// 並取最少個數
// e.g.: 13 = 4 + 9
int main(){
    int num;
    bool isTwo = false;
    cin >> num;
    if (isPerfectSquare(num)) {
        printf("1\n");
    }
    else if (checkAnswer4(num)) {
        printf("4\n");
    }
    for (int i=0; i*i<=num ;i++) {
        int j = num-i*i;
        if (isPerfectSquare(j)) {
            printf("2\n");
            isTwo = true;
            break;
        }
    }
    if (isTwo == false) {
        printf("3\n");
    }
    return 0;
}