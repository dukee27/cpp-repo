#include <iostream>
#include <cstdlib>
#include <algorithm>
using namespace std;

int main(){
    int A[3];
    cin >> A[0] >> A[1] >> A[2];
    sort(A,A + 3);
    int t = A[1];
    cout << abs(t - A[0]) + abs (t- A[2]); 
    return 0;
}