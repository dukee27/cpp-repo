#include <iostream>

using namespace std;

int main(){
    int k {};
    int n {};
    int w {};
    
    cin >> k >> n >> w;

    int sum = w*(2*k + (w-1)*k)/2;
    if(sum - n > 0){
        cout << sum - n ;
    }
    else{
        cout << 0;
    }

    return 0;
}