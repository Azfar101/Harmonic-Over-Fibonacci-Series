#include <iostream>
#include <cmath>
using namespace std;

double harmonic(int n){
    double sub = n;
    double harm = n;

    for(int i = 1; i <= n; i++){
        sub++;
        harm += -1/sub;
    }
    return harm;
}

int fibonacci(int n, int a, int b){
    if(n == 1){
        return a;
    }
    else if(n == 2){
        return b;
    }
    else{
        return fibonacci(n-1, b, a+b);
    }
}

double series(int n, int a, int b){
    double sum = 0;
    for(int i = 1; i <= n; i++){
        sum += harmonic(i)/fibonacci(i, a, b);
    }
    return sum; 
}

int main(){
    int n;
    int a;
    int b;

    cout << "masukkan nilai n : ";
    cin >> n;
    cout << "masukkan nilai a : ";
    cin >> a;
    cout << "masukkan nilai b : ";
    cin >> b;

    cout << harmonic(n) << endl;
    cout << fibonacci(n, a, b) << endl;
    cout << series(n, a, b) << endl;
}
