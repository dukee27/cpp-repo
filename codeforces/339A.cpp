#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    string n {};
    cin >> n;
    stringstream s{};
    s.str(n);
    int num{};
    char ch;
    vector<int> arr{};
    while(s >> num){
        arr.push_back(num);
        s >> ch ;
    }
    sort(arr.begin() , arr.end());
    cout << arr[0];
    for(int i{} ; i < arr.size()-1 ; i++){
        cout << "+" << arr[i+1] ;
    }
    return 0 ;
}