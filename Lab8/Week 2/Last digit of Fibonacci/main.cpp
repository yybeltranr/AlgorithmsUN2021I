#include <iostream>

using namespace std;

int last_digit_of_fibonacci(int n){
    if(n <= 1){
        return n;
    }else{
        int a = 0;
        int b = 1;
        for(int i = 0; i < n; i++){
            int c = (a + b) % 10;
            a = b;
            b = c;
        }
        return a;
    }
}

int main(){
    int n;
    cin >> n;
    cout << last_digit_of_fibonacci(n) << endl;
    return 0;
}