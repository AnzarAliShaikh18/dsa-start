#include <iostream> 
using namespace std ;
void reversearry(int  arr[],int sz){
    int start = 0,last =sz-1;
    while (start<last){
        swap (arr[start],arr[last]);
        start++;
        last--;
    }
}
int main(){
    int arry[7]={1,2,3,4,5,6,7};
    int sz=7;
    reversearry (arry,sz);
    for (int i = 0 ;i<sz;i++){
        cout<<arry[i]<<" ";

    }
    cout<<endl;

    return 0;
}