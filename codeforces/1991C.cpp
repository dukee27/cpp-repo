#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int q {};
    cin >>q ;

    for(int t {} ; t < q ; t++){
        int n {};
        cin >> n;
        int arr[n];
        for(int i {} ; i < n ; i++){
            cin >> arr[i];
        }

        int count {};
        while(1){
            int min {INT_MAX};
            for(int i {} ; i < n ; i++){
                if(arr[i] != 0 && arr[i] < min){
                    min = arr[i];
                }
            }
    
            
            for(int i {} ; i < n ; i++){
                
                arr[i] = abs(arr[i] - min);
            }
            count++;
            int c {};
            int d {};
            for(int i {} ; i < n ; i++){
                if(arr[i] == min){
                    c++;
                }
                else if(arr[i] == 0){
                    d++;
                }
            }
            if(c == 1 && d == n-1){
                for(int i {} ; i < n ; i++){
                
                arr[i] = abs(arr[i] - min/2);
                }
                cout << min/2 << '\n';
                goto endloop;

            }
            else{
                count = -1;
                goto endloop;
            }
            cout << min << " ";

        }
        endloop:
        cout << count << "\n";

    }
}