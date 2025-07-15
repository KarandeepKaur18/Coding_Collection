// Online C++ compiler to run C++ program online
// subarray is basically the  group of continuous elements in an array , 
#include <iostream>
#include <vector>
using namespace std; 

int main() {
    // Write C++ code here
    int array[] = {1,8,9,12,67};
    for(int i = 0; i<5;i++){
        for(int j = i ; j <5 ; j++){
            vector <int> subarray;
            for(int k = i; k<=j;k++){
                subarray.push_back(array[k]);
            }
            for(int i = 0;i<subarray.size() ; i++){
                cout << subarray[i];
            }
            cout << endl;
        }
    }
    return 0;
}