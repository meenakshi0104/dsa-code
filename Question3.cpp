#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Maximum SubArray Question

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Generate SubArray
    int sub_arr[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k];
            }
            cout << endl;
        }
    }

    // Maximum SubArray using Three Loops
    int max_sum = INT_MIN;
    int wi, wj;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            if (max_sum < sum)
            {
                max_sum = sum;
                wi = i;
                wj = j;
            }
        }
    }
    cout << "Maximum Subarray is : " << endl;
    for (int i = wi; i <= wj; i++)
    {
        cout << arr[i];
    }
    cout << max_sum;

    // Maximum SubArray Using Kadane's ALgorithm
    int sum = 0;
    int maxi = INT_MIN;

    for(int i=0; i<n; i++){
        sum+=arr[i];
        if(maxi < sum){
            maxi = sum;
        }
        if(sum < 0){
            sum = 0;
        }
    } 
    cout<<maxi;
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