#include <iostream>
#include <climits>
using namespace std;
/*int main(){
    int arry[5]={1,2,3,4,5};
    int size = 5;
    for(int str = 0;str<size;str++ ){
        for(int end = str;end<size;end++){
            for(int i = str;i<=end;i++){
                cout<<arry[i];
            }
            cout<<" ";

        }
        cout<<endl;
    }
}*/
int main(){
    int arry[7]={3,-4,5,4,-1,7,-8};
    int size = 7;
    int maxsum = INT_MIN;
    
    for(int str = 0;str<size;str++ ){
        int csum=0;
        for(int end = str;end<size;end++){
            csum+=arry[end];
            if(csum > maxsum){
                maxsum = csum;
            }
            cout<<csum<<" ";
           

        }
        
    }
    cout << "Maximum sum of subarray is: " << maxsum << endl;
    return 0;
}