#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Convert a sentence into its equivalent mobile numeric keypad sequence
    string str[] = {
        "2", "22", "222", "3", "33", "333",
        "4", "44", "444", "5", "55", "555",
        "6", "66", "666", "7", "77", "777", "7777",
        "8", "88", "888", "8888", "9", "99", "999", "9999"
    };

    string output = "";

    string input;
    cin >> input;

    int n = input.length();
    for(int i=0; i<n; i++){
        if(input[i] == ' '){
            output = output + '0';
        }
        else{
            int pos = input[i] - 'A';
            output = output + str[pos];
        }
    }
    cout<<output;
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
