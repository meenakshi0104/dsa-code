#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Reverse an Array --- Using Extra Space O(n)
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int arr1[n];
    int j = 0;
    for(int i=n-1; i>=0; i--){
        arr1[j] = arr[i];
        j++;
    }
    for(int i=0; i<n; i++){
        cout<<arr1[i];
    }

    // Using Swapping --- O(logn)
    int i = 0;
    int j = n-1;
    while(i < j){
        swap(arr[i],arr[j]);
        i++;
        j--;
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