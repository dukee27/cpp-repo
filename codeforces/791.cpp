#include <iostream>

using namespace std;

int main(){
    int n {};
    int m {};

    cin >> n >> m;
    int years {};
    while(m >= n){
        m *= 2;
        n *= 3;
        years++;
    }
    cout << years;
    return 0;
}