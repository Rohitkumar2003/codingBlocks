#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int firstOccurrence(vector<int>arr,int target) {
        int start = 0;int size = 0; int end = arr.size()-1;
        int mid = start + (end-start)/2; int ans = -1; 

        while(start<=end) {
            if(arr[mid]==target) {
                ans = mid;
                start = mid+1;
            }else if(arr[mid]<target) {
                end = mid-1;
            }else{
                start = mid+1;
            }
            int mid = start+(end-start)/2;
        }
        return ans;
}

int lastocc(vector<int> arr,int target ) {
    int start = 0;int end = size-1; int mid = start+(end-start)/2; int ans = -1;
            while(start<=target) {
                if(arr[mid]==target) {
                    ans = mid;
                    start = mid+1;
                }else if(arr[mid]<target) {

                }
            }
}
int main(int argc, char const *argv[]){
    vector<int> v{1,3,3,3,3,3,3,3,3,3,3,4,4,4,4,4,6,7};

    int target = 4;

    int ans = firstOccurrence(v,target);
    cout<<" Ans  Here : " << ans << endl;
  
    int target2 = 3; 
    int ans = lastocc( v, target2);
    // cout<<" Ans 2 is Here : " << ans2 << endl;

    return 0;
}
