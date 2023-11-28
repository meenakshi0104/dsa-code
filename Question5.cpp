#include<bits/stdc++.h>
using namespace std;

void solve(){

    int n;
    cin >> n;

    int nums[n];
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int target;
    cin >> target;

    int left = 0, right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target)
        {
            cout << mid;
        }

        if (nums[left] <= nums[mid])
        {
            if (target >= nums[left] && target <= nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        else
        {
            if (target >= nums[mid] && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
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