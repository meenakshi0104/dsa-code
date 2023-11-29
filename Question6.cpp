#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Contains Duplicate

    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // Using Sorting O(nlogn) 
    sort(arr,arr+n);
    int flag = 0;
    for (int i = 0; i < n - 1; i++){
        if (arr[i] == arr[i + 1]){
            flag = 1;
            break;
        }   
    }
    if(flag == 1){
        cout<<"True";
    }else{
        cout<<"False";
    }

    // Using Set O(n)
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    if (s.size() < n)
    {
        cout<<"True";
    }else{
        cout<<"False";
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