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

template <typename T>
int floorFunction(T num) {
    int intPart = static_cast<int>(num); // Get the integer part

    // If num is negative and not an integer, return intPart - 1
    if (num < 0 && num != intPart) {
        return intPart - 1;
    }
    return intPart; // Otherwise, return the integer part
}

template <typename T>
int ceilingFunction(T num) {
    int intPart = static_cast<int>(num); // Get the integer part

    // If num is positive and not an integer, return intPart + 1
    if (num > 0 && num != intPart) {
        return intPart + 1;
    }
    return intPart; // Otherwise, return the integer part
}
int multiply(int x, int y) {
    if (y == 0){    return 0;}
    if (y < 0) {    return -multiply(x, -y);}
    return x + multiply(x, y - 1);
}

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
    int n, m;
    cin >> n >> m;
    cout << multiply(n, m) << endl;
    char a, b, c;
    cin >> a >> b >> c;
    cout << mx(a, b, c) << endl;
    swp(a, b);
    cout << a << " " << b << endl;
    return 0;
}