#include <iostream>
#include <string>

using namespace std;

int main(){
    string s {};
    cin >> s;

    char ch = toupper(s[0]);
    string str{};
    str += ch;
    s.replace(0,1,str);
    cout << s;
    return 0;
}