#include <iostream>

using namespace std;

int main(){
    int n {};
    int h {};
    cin >> n >> h;
    int width {};
    for(int i {} ; i < n ; i++){
        int v {};
        cin >> v;
        if(v > h){
            width += 2;
        }
        else{
            width++;
        }
    }
    cout << width;
    return 0;
}