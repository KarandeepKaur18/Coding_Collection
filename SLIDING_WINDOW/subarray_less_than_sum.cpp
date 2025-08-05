#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, sum;
        cin >> n >> sum;
        int arr[n];
        
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        long long  count = 0;
        int left = 0;
        int right = 0;
        long long window_sum = arr[0];

        while (right < n) {
            if (left == right) {
                if (window_sum < sum) {
                    count++;
                }
                right++;
                if (right < n)
                    window_sum += arr[right];
            } else if (window_sum < sum) {
                count += (right - left + 1);
                right++;
                if (right < n)
                    window_sum += arr[right];
            } else {
                window_sum -= arr[left];
                left++;
            }
        }

        cout << count << endl;
    }

    return 0;
}
