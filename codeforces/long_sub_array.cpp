#include <iostream>
#include <vector>
using namespace std;

int main(){
    long long n {};

    cin >> n;
    int arr[n+1];
    
    for(int i{} ; i < n ; i++){
        cin >> arr[i];
    }
    arr[n] = INT_MIN ;
    int count {0};
    int m{0};

    vector<int> vect ;
    
    vector<int> v{};
    for(int i {0} ; i < n ; i++){
        if(arr[i] < arr[i+1]){
            cout << "inside : " << arr[i] << "\n";
            v.push_back(arr[i]);
        }
        else{  
            v.push_back(arr[i]);
            cout << "outside: " << arr[i] << "\n";
            if(v.size() > count){
                count = v.size();
                vect = v;   
                }
                for(int j {} ; j < v.size() ; j++){
                cout << v[j] << " ";
                    }
                    cout << "\n";
                v.clear();
            }
        }
    
    cout << count << "\n";
    cout << "longest sub-array: ";
    for(int i{}; i < vect.size() ; i++){
        cout << vect[i] << " ";
    }
    cout << "\n" << "length: " << count ;
    return 0;
}