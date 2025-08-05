#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;    // Reading input from STDIN
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        int arr[n];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        sort(arr, arr + n);
        
        int l = 0, r = 0;
        int maxCount = 0;
        
        while (r < n) {
            if (arr[r] - arr[l] <= k) {
                // Valid group
                maxCount = max(maxCount, r - l + 1);
                r++;
            } else {
                // Shrink window
                l++;
            }
        }
        
        cout << maxCount << endl;
    }
}
 