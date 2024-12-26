#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--){
        int n; cin>> n;
        char cp; cin >> cp;
        string s; cin >> s;
        s+=s;
        int ct = -1,l=-1,mx=-1;
        s.push_back(cp);
        bool flag = true;
        for(int i=0;i<s.size();i++){
            if(s[i]==cp && flag==true){
                flag = false;
                ct = 0;
                l=i;
            }
            if(ct!=-1 && s[i]=='g'&& flag==false){
                ct=i-l;
                mx = max(mx,ct);
                flag = true;
            }
        }

        cout << mx<<endl;
    }
}
