#include <bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        vector<int> v;
        for(int i=0;i<n;i++){
            int x; 
            cin >> x;
            v.push_back(x);
        }

        sort(v.begin(), v.end(), greater<>());
        for(int val : v){
            cout << val<<' ';
        }cout << endl;
    }
}    
