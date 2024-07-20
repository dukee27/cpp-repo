#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t {};
    cin >> t;

    for(int q {} ; q < t ; q ++ ){
        long long n {} ;
        cin >> n;

        vector<int> v;
        int temp {1};
        for(int i {1} ; i < n+1 ; i++){
            if(i >= temp){
            for(int j {1}; j < n+1 ; j++){
                if(j >= temp){
                int temp2 = (i|j);
                if(temp2 == n){
                    v.push_back(i);
                    temp = j ;
                    cout << "at condition i: " << i << "\n";
                    break;  
                    }              
                }
            } 
            }
        }
        for(int i {} ; i < v.size() ; i++){
            cout << v[i] << " ";
        }
    }
    return 0;
}