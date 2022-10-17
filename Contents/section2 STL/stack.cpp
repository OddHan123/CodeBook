#include<bits/stdc++.h>
using namespace std;

int main(){
	stack<int> stk;	 //first-in last-out
	stk.push(x); //把元素 x 加進 stack
	stk.top();	//讀取stack的最上面的值
	stk.pop();  //移除最後加入的值
	stk.size();	 //stk內有多少元素,0代表空
	stk.empty();  //true代表stk是空的
	return 0;
}