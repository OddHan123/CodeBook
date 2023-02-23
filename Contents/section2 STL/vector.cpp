#include<bits/stdc++.h>
using namespace std;

int main(){
//遍歷跟字串相同
	vector<int> v;

//在最尾端新增一個元素
	v.push_back(x);

//清空整個vector
	v.clear();

//true代表v是空的
	v.empty();

//v的大小,0代表空	
	v.size();
	
//reverse vector
	reverse(v.begin(),v.end());

//找val在vector裡的上、下限
	sort(v.begin(),v.end());
	vector<int>:: iterator low,up;
	low = lower_bound(v.begin(),v.end(),val);
	up = upper_bound(v.begin(),v.end(),val);
//實際的idx要減掉v.begin()

//較少用
 //first element (=v[0])
	v.front();
//last element (=v[v.size()-1])
	v.back();
//刪除最後一個元素
	v.pop_back();
//刪除 index=i 的元素
	v.erase(v.begin()+i);
//刪除 index=0 到 index=i (不含)的元素
	v.erase(v.begin(), v.begin()+i);
	return 0;
}