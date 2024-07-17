/*This problem statement we have to calculate ther frequencies of all the elements in a Sorted Array */
/*First Case is */
/*int arr[]={10,10,10,25,30,30}*/
/*Output 10 3,25 1,30 2*/
//ARRAY
#include<iostream>
using namespace  std;

void frequencies(int *arr,int size){
    int count=1;
    for(int i=1;i<size+1;i++){
        if(arr[i-1]==arr[i]){
            count++;
        }
        else{
            cout<<"Frequency of the number  "<<arr[i-1]<<"\t"<<count<<"\n";
            count=1;
        }
    }
}


int main (){
    int arr[]={10,10,10,25,30,30};
    frequencies(arr,6);
    int arr1[]={10,20,30};
    frequencies(arr1,3);
    int arr2[]={10,10,10};
    frequencies(arr2,3);
    return 1;
}
