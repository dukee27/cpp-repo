#include <iostream>

using namespace std;

int main(){
    int n {};
    cin >> n;
    int count{} ;
    int cubes{};
    int i{};
    while(cubes < n){
        i++;
        count += i;
        cubes +=count;
        if(cubes > n){
            i--;
        }
    }
    cout << i;
    return 0;
}