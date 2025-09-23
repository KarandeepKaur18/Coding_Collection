#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main(){
    vector<int> arr = {4, -1, 3, 8, 12, 16};
    stack<int> s;
    vector<int> ans(arr.size(), -1);

    for (int i = 0; i < arr.size(); i++) {
        while (!s.empty() && s.top() <= arr[i]) {
            s.pop();
        }
        if (!s.empty()) {
            ans[i] = s.top();
        } else {
            ans[i] = -1;
        }
        s.push(arr[i]);
    }

    for (int val : ans) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
