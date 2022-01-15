#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    //selection sort
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[i]){
                /*//for testing the output
                for(int k=0; k<n; k++){
                    cout << arr[k] << " ";
                }
                cout << endl;*/
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                cout << " i >> " << i << "; j >> " << j << " ; " << arr[i] << " " << arr[j] << endl;
            }
        }
    }

    cout << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    return 0;
}