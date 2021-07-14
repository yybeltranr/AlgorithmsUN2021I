#include <iostream>

using namespace std;

int Fibonacci(int n){
    if(n <= 1){
        return n;
    }else{
        int a = 0;
        int b = 1;
        for(int i = 0; i < n; i++){
            int c = a + b;
            a = b;
            b = c;
        }
        return a;
    }
}

int main(){
    int n;
    cin >> n;
    cout << Fibonacci(n) << endl;
    return 0;
}