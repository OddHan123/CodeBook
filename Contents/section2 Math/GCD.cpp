#include<iostream>
using namespace std;
int GCD(int x,int y){
    while(y != 0){
        return GCD(y,x%y);
    }
    return x;
}

int main(){
    int a,b;
    cin>>a>>b;
    int gcd = GCD(a,b);
    int lcm = a*b/gcd;
    
    cout<<"最大公因數為: "<<gcd<<'\n';
    cout<<"最小公倍數為: "<<lcm<<'\n';
    return 0;
}