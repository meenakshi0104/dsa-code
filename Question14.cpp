#include<bits/stdc++.h>
using namespace std;

void solve(){
    // Permute two arrays such that sum of every pair is greater or equal to K

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int brr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> brr[i];
    }

    int k;
    cin >> k;

    sort(arr, arr + n);
    sort(brr, brr + n);

    int j = 0;
    int a[n];
    for (int i = n - 1; i >= 0; i--)
    {
        a[j] = brr[i];
        j++;
    }

    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if ((arr[i] + a[i]) != k)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
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