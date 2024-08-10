

#include<iostream>

using namespace std;

int main(int argc, char const *argv[]){
    
//  Bubble Sort 

    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n;i++) {
            cin>>arr[i];
    }

    for(int i = 1; i<=n-1;i++) {
        for(int j=0; j<n-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
        for(int j=0; j<n;j++) {
            cout<<arr[j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
