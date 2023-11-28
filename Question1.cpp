#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Maximum And Minimum Element of an Array --- O(nlogn)
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
    cout<<"Maximum of an Array is : "<<maxi<<endl;

    // Maximum And Minimum Element of an Array --- O(n)
    mini = INT_MAX;
    maxi = 0;
    for(int i=0; i<n; i++){
        if(arr[i] < mini){
            mini = arr[i];
        }
        if(arr[i] > maxi){
            maxi = arr[i];
        }
    }
    cout << "Minimum of an Array is : " << mini << endl;
    cout << "Maximum of an Array is : " << maxi << endl;

    // Minimum Comparison
    mini = INT_MAX;
    maxi = 0;

    int i;
    if(n % 2 == 0){
        if(arr[0] < arr[1]){
            mini = arr[0];
            maxi = arr[1];
        }
        else{
            mini = arr[1];
            maxi = arr[0];
        }
        i = 2;
    }
    else{
        mini = arr[0];
        maxi = arr[0];
        i = 1;
    }
    while(i < n){
        if(arr[i] > arr[i+1]){
            if(arr[i] > maxi){
                maxi = arr[i];
            }
            if(arr[i+1] < mini){
                mini = arr[i+1];
            }
        }
        else{
            if(arr[i] < mini){
                mini = arr[i];
            }
            if(arr[i+1] > maxi){
                maxi = arr[i+1];
            }
        }
        i = i+2;
    }
    cout << "Minimum of an Array is : " << mini << endl;
    cout << "Maximum of an Array is : " << maxi << endl;
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