#include<bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;

    string t;
    cin >> t;

    sort(t.begin(), t.end());
    sort(s.begin(), s.end());

    int n;
    if (s.size() <= t.size()){
        n = t.size();
    }
    else{
        n = s.size();
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            flag = 1;
            break;
        }
    }
   if(flag == 1){
    cout<<"False";
   }else{
    cout<<"True";
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