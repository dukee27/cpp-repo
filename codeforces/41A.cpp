#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s1 {};
    string s2 {};
    
    cin >> s1 >>s2 ;

    reverse(s1.begin() , s1.end());
    if(s1.compare(s2) == 0){
       cout << "YES";
    }
    else{
       cout << "NO";
    }
    return 0;
}