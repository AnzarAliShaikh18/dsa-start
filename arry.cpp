#include <iostream>
#include <climits>
using namespace std;

int getsmallestindex(int arr[], int n) {
    int smallest = INT_MAX;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
            index = i;
        }
    }
    return index;
}
int getlargestindex(int arr[], int n) {
    int largest = INT_MIN;
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
            index = i;
        }
    }
    return index;
}
int main(){
    int arry[5] = {10, 20, 30, 40, 50};
    int n = sizeof(arry)/ sizeof(arry[0]);
    int smallestIndex = getsmallestindex(arry, n);
    int largestIndex = getlargestindex(arry, n);
    swap(arry[smallestIndex], arry[largestIndex]);
    for(int i = 0; i < n; i++){
        cout << arry[i] << " ";
    }
    cout << endl;
}
/*int main (){
    int arry[]={2,3,5,2,1,3,4,6,5,7};
    int size = sizeof(arry)/sizeof(arry[0]);
    
    for(int i=0;i<size;i++){
        cout<<arry[i]<<" ";
        for(int j=i-1;j>=0;j--){
            if(arry[i]!=arry[j]){
                cout<<arry[i]<<" ";
            }
        }
        
        
            
        
        
        
        
    }
    

    

}*/