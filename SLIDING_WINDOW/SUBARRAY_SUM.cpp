#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve(int n, int k, vector<int> &arr) {
  int l = 0;
  int r = 0;
  int window_sum = 0;
  int maximum_sum = 0;
  while(r<n){
    window_sum+=arr[r];
    if((r-l+1)<k){
      r++;
    }else if((r-l+1 == k)){
      maximum_sum = std::max(maximum_sum,window_sum);
      r++;
      window_sum-= arr[l];
      l++;
    }
    
  }
  
  cout << maximum_sum;
    // write your code here
}

int main() {  // do not make any changes in the 'main' function
	int n, k;  cin >> n >> k;
	vector<int> arr(n);
	for(int i = 0; i < n; i++) cin >> arr[i];
	solve(n, k, arr);
}
