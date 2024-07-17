#include <iostream>

using namespace std;

int largest(int *arr,int size){
    int largest=0;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[largest]){
           
            largest=i;
        }
    }
    return largest;
}
int secondLargest(int *arr,int size){
    int largest=0;
    int secondlargest=-1;
    for(int i=0;i<size;i++){

        if(arr[i]>arr[largest]){
           
            secondlargest=largest;
            largest=i;
        }
        //Checking if the array is not equal to the  
        else if(arr[i]!=arr[largest]){
            if(secondlargest!=-1|| arr[i]>arr[secondlargest]){
                secondlargest=i;
            }

        }
    
    }
    return secondlargest;
}

int main(){
    
    Largest in an Array
    int arr[4]={10,5,20,8};
    int arr2[4]={40,8,50,100};
    cout<<arr[largest(arr,4)];
    cout<<"\n"<<arr2[largest(arr2,4)];

    //Second Largest in an Array
    //First Test Case
    int arr[6]={5,8,4,9,7,4};
    cout<<secondLargest(arr,6);
    cout<<"\n";
    //Second Test Case

    int arr2[4]={10,10,10,10};
    //if the value is equal then the output is -1
    cout<<secondLargest(arr2,4);
    

    return 0;
}