void mergeSortedArrays(vector<int> &A, vector<int> &B) {
    // Write your code here
    // You don't need to take input
    // Just complete the function and print the result array
    
    for(int i = 0; i<B.size() ; i++){
      int value = B[i];
      A.push_back(value);
    }
    
    
    for(int i = 0;i<A.size();i++){
      int min = A[i];
      for(int j = i+1;j<A.size();j++){
        if(A[j] < min){
          min = A[j];
          int swap = A[i];
          A[i] = A[j];
          A[j] = swap;
        }
        
      }
    }
    
    int size_array = A.size();
    int array[size_array];
    for(int i = 0; i<size_array;i++){
      array[i] = A[i];
      cout<<array[i]<<" ";
    };
    
    
}
