#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Longest Common Prefix;
    int n;
    cin >> n;
    
    string arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);

    string first = arr[0];
    
    string last = arr[n-1];
    string ans = "";
    for(int i=0; i<first.size(); i++){
        if(first[i] == last[i]){
            ans+=first[i];
        }
        else{
            cout<<ans;
            break;
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