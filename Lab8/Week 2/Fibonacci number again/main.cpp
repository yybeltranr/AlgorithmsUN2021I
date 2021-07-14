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

int fibonacci_module(int n, int m){
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
        return a;
    }
}

int main(){
    long n;
    int m; 
    cin >> n >> m;
    cout << fibonacci_module(n % pissano_period(m), m) << endl;
    return 0;
}