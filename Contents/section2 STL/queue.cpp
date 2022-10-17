#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;	//first-in first-out
	q.push(x); //把元素 x 加進 queue
	q.front();	//讀取排隊的最前方
	q.pop();  //移除最先加入的值
	q.size();	 //queue內有多少元素,0代表空
	q.empty();  //true代表queue是空的
	return 0;
}