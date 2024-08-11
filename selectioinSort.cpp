
#include<iostream>
using namespace std;



int main(int argc, char const *argv[]){

    cout<<"Input Here :";
      int n;
      cin>> n;
      int arr[n];

      for(int i=0;i<n;i++) {
            cin>>arr[i];
      } 
      for(int i=0;i<=n-1;i++) {
        for(int j=0; j<n-i;j++) {
            if(arr[j]>arr[i]){ 
                swap(arr[i],arr[j]);
            }
        }
        cout<<"After : " << i << " th Iteration " << endl;
        for(int j=0; j<n;j++) {
            cout<< arr[j] << " ";
        }
        cout << endl;
      }


     
    return 0;
}
