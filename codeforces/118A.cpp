#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s{};
    cin >> s ;
    vector <char> v;

    for(int i {} ; i < s.length() ; i++){
        s[i] = (char)tolower(s[i]);
    }
    for(int i {} ; i < s.length() ; i++){
        if(s[i] != 'a' && s[i] != 'i' && s[i] != 'e' && s[i] != 'o' && s[i] !='u' && s[i] != 'y'){
            v.push_back('.');
            v.push_back(s[i]);
        }
    }
    string str(v.begin() , v.end());
    cout << str;

    
}