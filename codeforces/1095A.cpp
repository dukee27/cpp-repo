#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n {};
    string s{};
    cin >> n >> s;
    vector<char> v;
    int i{};
    int d{};
    while(i < n ){
        v.push_back(s[i]);
        d++;
        i+= d;
       
    }
    string str(v.begin() , v.end());
    cout << str;
    return 0;
}