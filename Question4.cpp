#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int m;
    cin >> m;
    sort(arr, arr + n);
    int mini = INT_MAX;
    
    for (int i = 0; i <= n - m; i++)
    {
        if (mini > (arr[i + m - 1] - arr[i]))
        {
            mini = arr[i + m - 1] - arr[i];
        }
    }
    cout << mini;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    solve();
}