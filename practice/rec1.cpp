#include <iostream>

using namespace std;

int main(){
    string s = "things";
    string a = "sginth";

    int H[26]{0};

    for(int i{} ; i < 6 ; i++){
        H[s[i] - 97]++;
        H[a[i] - 97]++;
        }
    for(int i{} ; i < 26 ; i++){
        cout << H[i] << " ";
        if(!(H[i] == 2 || H[i] == 0)){
            cout << "not palindrome";
            break;
        } 
    }
    return 0;
}