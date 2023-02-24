#include<iostream>
#include<map>
using namespace std;

int main(){
	int n = 3;
	string s = "hello";
//key不能重複,value可以重複
	map <string,int>mp;

//新增元素 (Three ways)
	mp.insert({s,n});
	mp["aaa"] = 12;
	mp.insert(pair<string,int>(s,n));

//遍歷map
  //正向
	for(map<string,int> :: iterator it=mp.begin(); it!=mp.end(); it++){
		cout<<it->first<<" "<<it->second<<"\n";
	}
  //reverse
	for(map<string,int> :: reverse_iterator rit=mp.rbegin(); rit!=mp.rend(); rit++){
		cout<<rit->first<<" "<<rit->second<<"\n";
	}

//map的大小,0 means empty	
	mp.size();

//確認key的數量,>0 或 =0
	mp.count(s);

//回傳key的index
	mp.find(s);

//delete element
	mp.erase(s);

//清空
	mp.clear();
	return 0;
}