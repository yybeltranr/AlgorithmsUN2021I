#include <iostream>

using namespace std;

int greatest_common_divisor(int a, int b){
    if(b == 0){
        return a;
    }else{
        return greatest_common_divisor(b, a % b);
    }
}

long long least_common_multiple(int a, int b){
    return (((long long) a) * b) / greatest_common_divisor(a, b);
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << least_common_multiple(a, b) << endl;
    return 0;
}