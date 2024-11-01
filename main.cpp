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
//PROBLEM 6
int factorial(int n) {
    return n == 0 ? 1 : n*factorial(n-1);
}
//PROBLEM 7
int pw(int n, int pow){
    if (n == 0 && pow == 0){ return -1;}
    return pow == 0 ? 1 : n * pw(n, pow-1);
}
//PROBLEM 8
double invSum(int n){
    if(n==1){   return 1.;}
    return invSum(n-1) + 1./(n*n);
}
//PROBLEM 9
double prs(int n) {
    if(n==1){   return 1./3;}
    return prs(n-1) * 1./(n*(n+2));
}
//PROBLEM 10
int sod(int n) {
    if(n/10 == 0){   return n;}
    return n%10 + sod(n/10);
}
//PROBLEM 11
int pr2(int n, int m) {
    return ((n==0 || m==0) ? 0: n + pr2(n, m-1));
}

int main(){
    cout << factorial(3) << endl;
    cout << pw(0, 3) << endl;
    cout << sod(132456) << endl;
    cout << pr2(6, 3) << endl;
    //ott(10);
    //nats(n);
    // int n, m;
    // cin >> n >> m;
    // cout << multiply(n, m) << endl;
    // char a, b, c;
    // cin >> a >> b >> c;
    // cout << mx(a, b, c) << endl;
    // swp(a, b);
    // cout << a << " " << b << endl;
    return 0;
}