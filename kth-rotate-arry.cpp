#include<iostream>
using namespace std;

int main(int argc, char const *argv[]){

    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin>>arr[i];
    }

    for(int j=0; j<n-1;j++) {
        cout << j <<" ";
    }
    for(int k=0;k<n-2;k++) {
        cout<< k <<" ";
}

    
    return 0;
}
