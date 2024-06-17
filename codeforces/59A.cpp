#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string s {};
    cin >> s;
    int u {};
    int l {};
    for(int i {}; i < s.length() ; i++){
        if(isupper(s[i])){
            u++;
        }
        else{l++;}
    }

    if(u > l){
        transform(s.begin() , s.end() , s.begin() , :: toupper);
    }
    else{
        transform(s.begin() , s.end() , s.begin() , :: tolower);
    }
    cout << s;
    return 0;
}