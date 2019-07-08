#include <iostream>
using namespace std;

int func(int num){
    return func(num- 1);
}

int main() {
    int num = 5;
    int ans = func(num - 1);
    cout << ans;
}

Runtime Error

Since the base case is missing in the code, therefore there will be infinite recursion calls and hence runtime error will occur.

