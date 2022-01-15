#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    // taking the elements of the array from the user
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    
    //bubble sort algorithm
    int counter = 1;
    while(counter < n){
        for(int i=0; i<n-counter; i++){
            if(arr[i]>arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        counter++;
    }

    cout << "The sorted array (using bubble sort) is : "<< endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}