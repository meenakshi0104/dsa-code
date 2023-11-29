#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Valid Palindrome String Question
    string s;
    cin >> s;

    string temp = "";
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            temp += (s[i] + 32);
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            temp += s[i];
        }
        else if (s[i] >= '0' && s[i] <= '9')
        {
            temp += s[i];
        }
    }

    int i = 0;
    int j = temp.length() - 1;
    int flag = 0;
    while (i < j)
    {
        if (temp[i] != temp[j])
        {
            flag = 1;
            break;
        }
        else
        {
            i++;
            j--;
        }
    }
    if (flag == 1)
    {
        cout << "False";
    }
    else
    {
        cout << "True";
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