#include <bits/stdc++.h>
using namespace std;

int main() {

    int  n, d;
    cin >> n>>d;
    vector<int> v;
    for(int i=0;i<n;i++){
        int x; cin >> x;
        v.push_back(x);
    }

    sort(v.begin(), v.end(), greater<>());
    int i=0,x,ct=0,n_cp=n;
    while(i<n){
        x = d/v[i];
        if(x+1<=n_cp){ 
        ct++;
        i++;
        n_cp-=x+1;
        }
        else break;
    }

    cout << ct;
}
