#include <iostream>
#include <vector>
#include <algorithm> // Required for std::min and std::max

void solve(int n, std::vector<int> &arr) {
    int left = 0;
    int right = n - 1;
    long long max_area = 0; // Use long long for max_area to prevent overflow, as height can be up to 10^4 and width up to 10^5, so area can be 10^9.

    while (left < right) {
        // Calculate current height, which is limited by the shorter of the two lines
        int current_height = std::min(arr[left], arr[right]);

        // Calculate current width
        int current_width = right - left;

        // Calculate current area
        long long current_area = (long long)current_height * current_width;

        // Update maximum area found so far
        max_area = std::max(max_area, current_area);

        // Move the pointers
        // If the left line is shorter, move left pointer inwards
        if (arr[left] < arr[right]) {
            left++;
        }
        // If the right line is shorter or equal, move right pointer inwards
        else {
            right--;
        }
    }
    std::cout << max_area << std::endl;
}

int main() {
    std::ios_base::sync_with_stdio(false); // Optimize I/O
    std::cin.tie(NULL); // Optimize I/O

    int t;
    std::cin >> t;
    while(t--) {
        int n;
        std::cin >> n;
        std::vector<int> arr(n);
        for(int i = 0; i < n; i++) {
            std::cin >> arr[i];
        }
        solve(n, arr);
    }
    return 0;
}