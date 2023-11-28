#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Maximum And Minimum Element of an Array
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    sort(arr,arr+n);
    int mini = arr[0];
    int maxi = arr[n-1];

    cout<<"Minimum of an Array is : "<<mini<<endl;
    cout<<"Maximum of an Array is : "<<maxi<< endl;
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin >> t;

    solve();

}