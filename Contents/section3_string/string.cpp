#include<iostream>
#include<string>
using namespace std;

int main(){
//初始化字串
    string s1 = "",s2 = "";
    long long a;
    int b;
  
//吃整行(含空格)
    getline(cin,s1);

//compare,assign,串接
    s1 == s2;
    s1 = s2;
    s1 += s2[i];

//字串切割,i:起始位置,len:幾個
    s1 = s1.substr(i,len);

//轉成數字或數字轉字串
    s1 = to_string(a);
    s2 = to_string(b);
    a = stoll(s1);
    b = stoi(s2);

//判斷數字,字母
    isdigit(s1[i]);
    isalpha(s2[i]);
    return 0;
}