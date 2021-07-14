#include <iostream>

using namespace std;

int greatest_common_divisor(int a, int b){
    if(b == 0){
        return a;
    }else{
        return greatest_common_divisor(b, a % b);
    }
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << greatest_common_divisor(a, b) << endl;
    return 0;
}