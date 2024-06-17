#include <iostream>

using namespace std;

int main(){
    int n {};
    cin >> n;

    int count {};

    if(n % 5 == 0){
        count += n/5;
    }
    else{
        count += n/5;
        count++;
    }
    cout << count ;
    return 0;
}