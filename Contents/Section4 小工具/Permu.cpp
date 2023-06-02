#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    string a = "abc";
    string b = "cba";
    sort(a.begin(),a.end());
    do{
        cout<<a<<"\n";//把更新的字串印出
    }while(next_permutation(a.begin(),a.end()));//產生下一個排列結果
    
    bool isSamePer = is_permutation(a.begin(),a.end(),b.begin());//檢查b字串是否為a字串可排出結果

    prev_permutation(a.begin(),a.end());//產生上一個排列結果

    return 0;
}