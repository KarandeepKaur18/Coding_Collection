#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void lifeboats(int n, int k, vector<int> &arr) {
    // write your code here
    sort(arr.begin(),arr.end());
    int count = 0;
    int sum = 0;
    int *left = &arr[0];
    int *right = &(arr[(n-1)]);
    while(left<right){
      sum = *left+*right;
      if(sum <= k){
        count++;
        left++;
        right--;
      }else{
        right--;
      }
    }
    
    if(count < (n/2)){
      count = count + (n-(2*count));
      cout<<count<<endl;
    }else{
      cout << count << endl;
    }
}

int main() {  // do not make any changes in the 'main' function
	int t;  cin >> t;
	while(t--) {
	    int n, k;  cin >> n >> k;
	    vector<int> arr(n);
	    for(int i = 0; i < n; i++) cin >> arr[i];
	    lifeboats(n, k, arr);
	}
	
}