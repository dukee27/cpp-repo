#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    string n {};
    string m {};

    cin >> n >> m;
    transform(n.begin(),n.end() , n.begin() , ::tolower);
    transform(m.begin(),m.end() , m.begin() , ::tolower);

    if(n.compare(m) == 0){
        cout << 0;
    }
    else if(n.compare(m) > 0){
        cout << 1;
    }

    else{
        cout << -1;
    }
    return 0;
}