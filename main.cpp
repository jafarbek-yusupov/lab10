#include <iostream>
using namespace std;

template <typename T> T mx(T a, T b, T c) {
    return max(max(a, b), c);
}

template <typename T>
void swp(T& a, T& b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int ott(int n){
    if (n==0){  cout << "0" << endl; return 0; }
    cout << n << endl;
    return ott(n-1);
}

int main(){
    ott(10);
    char a, b, c;
    cin >> a >> b >> c;
    cout << mx(a, b, c) << endl;
    swp(a, b);
    cout << a << b << endl;
    return 0;
}