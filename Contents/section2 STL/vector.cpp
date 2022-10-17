#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> v;  //遍歷跟字串相同
	v.push_back(x); //在最尾端新增一個元素
	v.clear();  //清空整個vector
	v.empty();  //true代表v是空的
	v.size();  //v的大小,0代表空
	reverse(v.begin(),v.end());  //reverse v
	
	//較少用
	v.front();  //first element (=v[0])
	v.back();  //last element (=v[v.size()-1])
	v.pop_back();	//刪除最後一個元素
	v.erase(v.begin()+i);	//刪除 index=i 的元素
	v.erase(v.begin(), v.begin()+i); //刪除 index=0 到 index=i (不含)的元素
	return 0;
}