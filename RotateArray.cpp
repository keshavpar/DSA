//This program is about reversing an array without using an extra space 

#include <iostream>
using namespace std;
//Arrays
void reverseArray(int *arr,int size){
int k=size;
k--;
int val=0;
    for(int i=0;i<size/2;i++){
        val=arr[k];
        arr[k]=arr[i];
        arr[i]=val;
        k--;
    }
    // return arr;
} 

int main(){
    /*First Case*/
    int arr[]={10,5,7,30};
    reverseArray(arr,4);
    for(int i=0;i<4;i++){
        cout<<arr[i]<<"\n";
    }
    cout<<"\n\n";
    /*Second Case*/
    int arr2[]={30,20,5};
    reverseArray(arr2,3);
    for(int i=0;i<3;i++){
        cout<<arr2[i]<<"\n";
    }
    return 0;
}