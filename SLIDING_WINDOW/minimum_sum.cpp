#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--){
      int n,k;
      cin>>n>>k;
      int arr[n];
      for(int i =0;i<n;i++){
        cin>>arr[i];
      }
      int minimum = INT_MAX;
      int left = 0;
      int right = 1;
      int window_sum = arr[0];
      if(k==1){
        right=0;
        window_sum = 0;
      }
      while(right<n){
        window_sum+=arr[right];
        if((right-left+1) == k){
          minimum = std::min(minimum,window_sum);
          window_sum-= arr[left];
          left++;
        } 
        right++;
      }
      cout << minimum <<endl;
    }
}