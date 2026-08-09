#include<iostream>
using namespace std;

int linearsearch(int arr[],int sz, int target){
    for(int i =0 ;i<sz;i++){
        if (arr[i]==target){
            return i;
        }
    
        return -1;
    }
}
int main(){
    int arr[]={21,23,34,8,34};
    int sz=5;
    int target =8;
    cout<<linearsearch(arr,sz,target);

    return 0;
}