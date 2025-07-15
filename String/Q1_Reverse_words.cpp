#include <iostream>
#include <vector>
using namespace std;
int main(){
    string s1;
    cout << "Please enter the string here ! ";
    getline(cin,s1);
    vector<string> vec1 = {};
    string store1 = "";
    
    int count = 0;
    
    for(int k = 0 ; k < s1.length() ; k++){
        if(s1[k] != ' '){
           count++;
        }
        if((s1[k] == ' ') || (k == s1.length()-1)){
            int start ;
            if(s1[k] == ' '){
                start = k - count ;
            }else{
                start = k - count +1;
            }
                
            for(int j = start; j<k && j < s1.length();j++){
                store1 = store1 + s1[j];
            }
            vec1.push_back(store1);
            count = 0;
            store1 = "";
        }  
    }

    for(int i = vec1.size() - 1; i>=0;i--){
        cout << vec1[i] << endl;
    }
    
}   