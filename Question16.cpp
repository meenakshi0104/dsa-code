#include<bits/stdc++.h>
using namespace std;

void solve(){

    // Given three Sorted arrays in non-decreasing order, print all common elements in these arrays.
    int n;
    cin >> n;
    int arr1[n];
    for(int i=0; i<n; i++){
        cin >> arr1[i];
    }

    int arr2[n];
    for (int i = 0; i < n; i++){
        cin >> arr2[i];
    }

    int arr3[n];
    for (int i = 0; i < n; i++){
        cin >> arr3[i];
    }

    // Very Basic Brute force Approach in O(n3) 
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         for(int k=0; k<n; k++){
    //             if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
    //             {
    //                 cout<<arr1[i]<<" ";
    //             }
    //         }
    //     }
    // }

    // O(n1+n2+n3) --> complexity which is greater
    int i =0;
    int j = 0;
    vector<int> temp;
    while(i < n && j < n){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr1[i] > arr2[j]){
            j++;
        }
        else{
            temp.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    i = 0;
    j = 0;
    vector<int> result;
    while (i < n && j < n)
    {
        if (temp[i] < arr3[j])
        {
            i++;
        }
        else if (temp[i] > arr3[j])
        {
            j++;
        }
        else
        {
            result.push_back(temp[i]);
            i++;
            j++;
        }
    }
    
    for(int i=0; i<result.size(); i++){
        cout<<result[i]<<endl;
    }
}

int main(){

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    solve();

}