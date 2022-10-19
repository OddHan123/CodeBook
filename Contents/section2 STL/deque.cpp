#include<bits/stdc++.h>
using namespace std;

int main(){
//可頭尾增減的queue
    int x;
    deque<int> dq;

//新增元素
  //前面新增
    dq.push_front(x);
  //尾端新增
    dq.push_back(x);

//刪除元素
  //前端刪除
    dq.pop_front();
  //尾端刪除
    dq.pop_back();

//元素存取
    dq[i];
    dq.front();
    dq.back();

//size,empty,迭代器跟前面相同
    return 0;
}