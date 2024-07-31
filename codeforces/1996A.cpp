#include <iostream>

using namespace std;

int main(){
    int q {};
    cin >> q ;
    for(int t {} ; t < q ; t++){
        int n {} ; 
        cin >> n;
        int count {};
        count = n / 4;

        if(n%4 == 0){
            cout << count << "\n";
        }
        else {
            cout << count + 1 << "\n";
        }
    }
    return 0;
}