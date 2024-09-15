#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string a = "abc";
    string b = "cba";
//一定要先排序，才會有全部的組合
    sort(a.begin(),a.end());

//產生組合的迴圈
    do{
        cout<<a<<"\n";
    }while(next_permutation(a.begin(),a.end()));
    
//檢查b字串是否為a字串可排出結果
    bool isSamePer = is_permutation(a.begin(),a.end(),b.begin());

//產生上一個排列結果
    prev_permutation(a.begin(),a.end());

    return 0;
}