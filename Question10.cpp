#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Remove Consecutive Characters;
    string S;
    cin >> S;

    string temp = "";
    int n = S.size();
    for(int i=0; i<n; i++){
        if(S[i] != S[i+1] || (i == n)){
            temp.push_back(S[i]);
        }
    }
    for(int i=0; i<temp.size(); i++){
        cout<<temp;
    }
    
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    while(t--){
        solve();
    }

}