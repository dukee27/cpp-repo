#include <iostream>

using namespace std;

int main(){
    long long n {};
    cin >> n;
    int count {};

    while(n > 0){
    if(n % 10 == 7 || n % 10 == 4){
        count++;
        
        }
        n /= 10;
    }   
    if(count == 4 || count == 7){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}