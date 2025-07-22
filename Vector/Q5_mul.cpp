#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector <int> vect = {1,1,3,4};
    sort(vect.begin(), vect.end());
    
    bool is_mul = false;
    for(int i=1; i<4;i++){
        int check = vect[0] * 2;
        if(vect[i] == check){
            cout << "Yes";
            is_mul = true;
            return 0;
        }
    }
    
    if(is_mul == false){
        cout << "No";
    }
}