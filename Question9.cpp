#include<bits/stdc++.h>
using namespace std;

void solve(){

    string s;
    cin >> s;
    

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (st.empty() && (s[i] == ')' || s[i] == ']' || s[i] == '}'))
        {
            cout<<"false";
        }
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            st.push(s[i]);
        }
        else if ((st.top() == '(' && s[i] == ')') || (st.top() == '{' && s[i] == '}') || (st.top() == '[' && s[i] == ']'))
        {
            st.pop();
        }
        else
        {
            st.push(s[i]);
        }
    }
    if (st.empty())
    {
        cout<<"true";
    }
    else{
        cout<<"false";
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