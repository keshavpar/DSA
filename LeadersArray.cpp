//This is the problem regarding choosing the correct leader in an Array ,An Element is an leader only if it is of the highest 
//value whech checked to its left side 

#include <iostream>
using namespace std;
//ARRAYS
void leader(int *arr,int size){
    int curLeader=arr[size-1];
    cout<<curLeader<<"\t";
    //In here we are traversing the array from the right side and just comparing if the value is greater than the current leader 
    for(int i=size-2;i>=0;i--){
        if(curLeader<arr[i]){
            curLeader=arr[i];
            cout<<curLeader<<"\t";
        }
    }

}


int main(){
    int arr[]={7,10,4,10,6,5,2};
    leader(arr,7);
    return 0;
}
