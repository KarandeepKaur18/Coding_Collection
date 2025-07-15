#include <iostream>
using namespace std;

int sum_subarray(){
    int max_num;
    int array[7] = {1,3,4,2,7,12,5};
    for(int start=0; start<7;start++){
        int sum = 0;
        for(int end = start ; end<7;end++){
            sum = sum + array[end];
            max_num = max(sum, max_num);
        }
    }

    return max_num;
}

int main(){

    int sum = sum_subarray();
    cout << sum;
}