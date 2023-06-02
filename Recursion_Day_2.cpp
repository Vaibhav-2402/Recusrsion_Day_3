#include<iostream>
using namespace std;

int Fibonacci(int n){
    
    int sum = 0;
    
    if(n == 0){
        return 0;
    }

    if(n == 1){
        return 1;
    }

    sum = Fibonacci(n-1) + Fibonacci(n-2);
    return sum;
}

int main() {
    int n;

    cout << "Enter the n : ";
    cin >> n;
    
    int ans = Fibonacci(n); 

    cout << endl << ans;
    
    return 0;
}
