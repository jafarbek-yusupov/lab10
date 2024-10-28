#include <iostream>
using namespace std;

template <typename T> T mx(T a, T b, T c) {
    return max(max(a, b), c);
}

int main(){
    double a, b, c;
    cin >> a >> b >> c;
    cout << mx(a, b, c) << endl;
    return 0;
}