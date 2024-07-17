//In this Problem statement we have to Shift the array elements to a D positions 
//First Case
//{2,4,32,4} D times rotations:2 {32,4,2,4}

#include <iostream>
//Arrays
using namespace std;

void printing(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"\n";
    }
}

//Naive Approach  
void rotationArry(int *arr,int size,int pos){
    int temp=0;
    int varia;
    for(int i=0;i<pos;i++){
       for(int j=0;j<size;j++){           
        if(j!=0){
            arr[j-1]=arr[j];      
        }
        else{
            temp=arr[size-1];
            arr[size-1]=arr[j];
        }            
       } 
       arr[(size-2)]=temp;
    }
}




//Optimized Solution
void reverse(int *arr,int low,int high){
   while(low<high){
    int temp=arr[low];
    arr[low]=arr[high];
    arr[high]=temp;
    low++;high--;    
   }
}

void leftRotate(int arr[],int size,int pos){


    //This is the most efficient method we are first reversing the array 0 to the position we want to change then
    reverse(arr,0,pos-1);
    //Secondly we are reversing the rest of the array
    reverse(arr,pos,size-1);
    //We are reversing the whole array to find desired location
    reverse(arr,0,size-1);
}


int main(){
    /*Naive Solution*/
    /*First Case of the Problem Statement*/
    // int arr[]={5,10,4,7,3};
    // rotationArry(arr,5,2);
    // printing(arr,5);
    // return 0;

    /*Advanced Solution*/
    int arr[]={5,10,4,7,3};
    leftRotate(arr,5,3);
    printing(arr,5);
}