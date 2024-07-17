//In this problem statement we have to perform Left Rotation of the Array element i.e 
//The First Element has to be shifted to the last and the last element is to preceeded before that
//{1,2,3,4,5} we have to change it to output {2,3,4,5,1}

#include <iostream>
using namespace std;
//LEFT ROTATION
void leftRotation(int *arr,int size){
    //The First Value is stored in a temp variable if the size is not null
    int temp=0;
    if(size!=0){
       temp =arr[0];
    }
    //We are traversing the array and shifting all the values one element before its old value 
    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }
    //Placing the value in the last that is stored in the temp after all the values are shifted 
    arr[size-1]=temp;
}
void printing(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    /*First Case of the problem statememt*/
    int arr[]={1,2,3,4,5};
    leftRotation(arr,5);
    printing(arr,5);
    cout<<"\n\n";
    /*Second Case of the Problem Statement*/
    int arr2[]={30,5,20};
    leftRotation(arr2,3);
    printing(arr2,3);
    /*Third Case of the Problem Statement*/
    int arr3[]={10,5,15,30,1};
    leftRotation(arr3,5);
    printing(arr3,5);
}