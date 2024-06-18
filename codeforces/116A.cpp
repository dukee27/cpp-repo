#include <iostream>

using namespace std;

int main(){
    int n {};
    cin >> n;

    int num {};
    int b{};
    for(int i {}; i < n ; i++){
        int e {};
        int c {};

        cin >> e >> c;
        num -= e;
        num += c;
        if(b < num ){
            b = num;
        }
    }
    cout << b;
    return 0;
}