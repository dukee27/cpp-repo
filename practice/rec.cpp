#include <iostream>

using namespace std;

int main(){
    int t {};
    cin >> t;
    for(int i {} ; i < t ; i++){
        int n {};
        int m {};
        cin >> n >> m;
        int arr[n][m];
        for(int j {} ;  j < n ; j++){
            for(int k {}; k < m ; k++){
                cin >> arr[j][k];
            }
        }
        for(int j {} ;  j < n ; j++){
            for(int k {}; k < m ; k++){
                
                int b = {0};
                int c = {0};
                int d = {0};
                int e = {0};
                if(j-1 >= 0){
                    b = arr[j-1][k];
                }
                if(j+1 < n){
                    d = arr[j+1][k];
                }
                if(k-1 >= 0){
                    c = arr[j][k-1];
                }
                if(k+1 < m){
                    e = arr[j][k+1];
                }

                int a = arr[j][k];

                if((a > b)&& (a > c) && (a > d) && (a > e)){
                    arr[j][k] = max(b , max(c , max(d,e)));
                }
                cout << arr[j][k] << " ";
                
            }
            cout << "\n";
        }
    }
    return 0;
}