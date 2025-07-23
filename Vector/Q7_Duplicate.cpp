#include <iostream>
#include <map>
using namespace std;

int repeating(int arr[], int s){
    map<int,int> repeat;
    for(int i=0;i<s;i++){
        repeat[arr[i]]++;
    }

    for(auto pair : repeat){
        if(pair.second > 1){
            return pair.first;
        }
    }

    return -1; // add this to handle if no repeating element found
}

int main(){
    int size ;
    cin >> size;

    int arr[size];
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }
    
    int value = repeating(arr, size);
    cout << "Repeating element is : " << value;

    return 0;
}
 