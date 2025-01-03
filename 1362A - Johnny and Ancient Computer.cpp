#include <bits/stdc++.h>
using namespace std;
bool is_log2(long long a){
    int ct = 0;
    if(a==1) return false;
    while(a){
        if(a%2==1 && a!=1) return false;
        a/=2;
        ct++;
    }
    return true;
}

int count(long long a){
    int ct = 0;
    
    while(a>=8){
        a/=8;
        ct++;
    }
    while(a>=4){
        a/=4;
        ct++;
    }
    while(a>1){
        a/=2;
        ct++;
    }
    return ct;
}
int main(){
    int t; cin >> t;
    while(t--){
    long long a,b,diff;
    cin >> a>>b;
    diff = max(a,b)/min(a,b);
    bool flag =( (max(a,b)%min(a,b)==0) && is_log2(diff) )|| a==b;
    if(flag){cout << count(diff)<<endl;}
    else{
        cout << -1<<endl;
    }
    }
}    
