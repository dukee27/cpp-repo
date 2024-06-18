#include <iostream>

using namespace std;

int main(){
    int n {};
    string s {};

    cin >> n ;
    cin >> s ;
    int a {};
    int d {};

    for(int i {} ; i < n ; i++){
        if(s[i] == 'A'){
            a++;
        }
        else{
            d++;
        }
    }

    if(d>a){
        cout << "Danik";
    }
    else if(a>d){
        cout << "Anton";
    }
    else{
        cout << "Friendship";
    }

}