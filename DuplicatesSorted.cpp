//In this function we are removing all the duplicated and sending the new size of an array 
//ARRAY
#include <iostream>
using namespace std;

int removeDuplicates(int *arr,int size){
   
    int newSize=1;

    for(int i=1;i<size;i++){
        if(arr[i]!=arr[newSize-1]){
            arr[newSize]=arr[i];
            newSize++;
        }
    } 
    return newSize;
}

int main (){
    /*First Case*/
    int arr[]={10,20,20,30,30,30,30};
    cout<<"\n"<<removeDuplicates(arr,7)<<"\n";
    /*Second Case*/
    int arr2[]={10,10,10};
    cout<<"\n"<<removeDuplicates(arr2,3)<<"\n";


    return 0;
}