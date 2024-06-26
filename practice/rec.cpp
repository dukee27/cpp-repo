#include <iostream>

using namespace std;

int main(){
    int prime {31};
    int n {};
    int temp {};

    if(temp%2 != 0 && temp%5 != 0 && temp%7 != 0 && temp%3 != 0 ){
        n = temp;
    }
    if(prime%2 != 0 && prime%5 != 0 && prime%7 != 0 && prime%3 != 0 && prime%n != 0){
        cout << "prime";
    }


    return 0;
}