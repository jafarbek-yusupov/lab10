#include <iostream>
using namespace std;

template <typename T> T mx(T a, T b, T c) {
    return max(max(a, b), c);
}

// NOT FOT STRINGS
template <typename T>
void swp(T& a, T& b) {
    a += b;
    b = a - b;
    a -= b;
}
// FOR STRINGS AS WELL
template <typename T>
void swps(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int n=1;

int ott(int n){
    if (n==0){  cout << "0" << endl; return 0; }
    cout << n << endl;
    return ott(n-1);
}

void nats(int n){
    if(n>50){   return;}
    cout << n << endl;
    nats(n+1);
}

int main(){
    //ott(10);
    //nats(n);
    char a, b, c;
    cin >> a >> b >> c;
    cout << mx(a, b, c) << endl;
    swp(a, b);
    cout << a << " " << b << endl;
    return 0;
}