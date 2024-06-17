#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string s {};
    cin >> s;
    vector<char> arr {};
    
    int count {};

    for(int i {} ; i < s.length() ; i++ ){
    auto it = find(arr.begin() , arr.end(), s[i]);
     if(it == arr.end()){
        arr.push_back(s[i]);
     }
    }

    if(arr.size() % 2 == 0){
        cout << "CHAT WITH HER!";
    }
    else{
        cout << "IGNORE HIM!";
    }
    return 0;
}