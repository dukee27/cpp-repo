#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int arr[5][5];
    int a {};
    int b {};
    for(int i {} ; i < 5 ; i++){
        for(int j {} ; j<5 ; j++){
            cin >> arr[i][j];
            if(arr[i][j] == 1){
                a = i;
                b = j;
                break;
            }
        }
    }
    cout << abs(a-2) + abs(b-2);

}