#include <iostream>

using namespace std;

int main(){
    string s{};
    cin >> s;
    string cards[5];
    int n {0};
    for(int i {} ; i < 5 ; i++){
        cin >> cards[i];
        string ss = cards[i];
        if(s[0] == ss[0] || s[1] == ss[1]){
            n = 1;
            break;
        }
    }
    if(n){
        cout << "yes";
    }
    else{
        cout << "no";
    }

    return 0;
}