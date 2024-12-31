#include <bits/stdc++.h>
using namespace std;

int serials(char c){
    return c-'a'+1;
}
int main(){
    int n; cin >> n;
    string s; cin >> s;
    bool flag = false;
    int l,r;
    for(int i=0;i<n-1;i++){
        if(serials(s[i]) > serials(s[i+1])){
            l = i;
            r = i+1;
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "YES"<<endl;
        cout << l+1<<' '<<r+1<<endl;
    }
    else{
        cout << "NO"<<endl;
    }
}    
