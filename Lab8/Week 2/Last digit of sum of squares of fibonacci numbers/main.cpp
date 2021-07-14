#include <iostream>

using namespace std;

int pissano_period(int m){
    int a = 0;
    int b = 1;
    int p = 0;
    while((a != 0 || b != 1) || p == 0){
        int c = (a + b) % m;
        a = b;
        b = c;
        p++;
    }
    return p;
}

int fibonacci_square_module(int n, int m){
    if(n <= 1){
        return n;
    }else{
        int a = 0;
        int b = 1;
        for(int i = 0; i < n; i++){
            int c = (a + b) % m;
            a = b;
            b = c;
        }
        return a * b;
    }
}

int main(){
    long n;
    cin >> n;
    cout << (fibonacci_square_module(n % pissano_period(10), 10) + 10) % 10 << endl;
    return 0;
}