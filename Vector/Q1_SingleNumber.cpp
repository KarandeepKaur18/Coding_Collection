// method 1 : to find the single number in simple manner : 
#include <iostream>
using namespace std;
int main(){
    int nums[3] = {2,3,4,3,4};
    vector <int> vec1;
    for(int i = 0; i < sizeof(nums)/sizeof(nums[0]); i++){
        vec1.push_back(nums[i]);
    }

    int start = vec1[0];

    for(int i = 1; i< vec1.size(); i++){
        if(vec1[i] == start){
            vec1.erase(remove(vec1.begin(), vec1.end(), vec1[i]), vec1.end());
            i--;
        }
    }

    cout << start; 
}






// method 2 : BEST method using XOR ;
#include <iostream>
using namespace std;

int main() {
    int nums[] = {2, 3, 2};  // Example: Unique number is 3
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= nums[i];  // XOR all elements
    }

    cout << "The unique number is: " << result << endl;

    return 0;
}


// method 3 : format in the class on leetcode ;
