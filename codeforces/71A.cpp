#include <iostream>
#include <string>

using namespace std;

int main(){
    int n {};
    cin >> n;
    string s {};
    for(int i {} ; i < n ; i++){
        cin >> s ;
        if(size(s) < 11 ){
            cout << s << "\n";
        }
        else{
            cout << s[0] << size(s)-2 << s[size(s) - 1] << "\n";
        }
    }
}