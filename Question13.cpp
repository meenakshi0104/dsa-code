#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Print all the duplicate characters in a string using MAP
    string input;
    cin >> input;

    int n = input.size();

    map<char,int> m;
    for(char c : input){
        m[c]++;
    }

    for(auto it = m.begin(); it != m.end(); it++){
        if(it->second > 1){
            cout<<it->first<<" : "<<it->second<<endl;
        }
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