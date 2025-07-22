#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int N , M;
    cin >> N >> M;
    
    
    int arr[N][M];
    for(int i =0 ; i < N; i++){
      for(int j = 0 ; j <M ; j++){
        cin >> arr[i][j];
      }
    }
    
    int A[N];
    for(int i = 0; i<N; i++){
      for(int j = 0; j<1; j++){
        cin >> A[i];
      }
    }
    
    int min_diff = abs(A[1] - A[0]);
    for(int i = 0; i<(N-1); i++){
      int diff = A[i] - A[i+1] ;
      int absolute = abs(diff);
      
      if(absolute < abs(min_diff)){
        min_diff = diff;
      };
    }
    
    cout << min_diff;
}