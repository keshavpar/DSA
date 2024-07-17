/*the Problem statement is to Right rotate the array to D places
1 Test Case =[2,4,5,6,7,9] suppose we have to rotate it by 2 places
Result:[7,9,2,4,5,6]
6,5,4,2,7,9
6,5,4,2,9,7
7,9,2,4,5,6


*/
//Arrays
#include <iostream>
using namespace std;
/*Naive Solution*/
void RightRotate(int *arr,int size,int rotations){
    for(int i=0;i<rotations;i++){
         int val = arr[size-1];
        for(int j=size-2;j>=0;j--){                           
            arr[j+1]=arr[j];
        }
        arr[0]=val;
    }
}
/*[1,2,3]=>[3,2,1]*/
void reverse(int *arr,int starting,int ending){
    while(ending>starting){
        int temp=arr[starting];
        arr[starting]=arr[ending];
        arr[ending]=temp;
        ending--;
        starting++;
    }
}
void print(int *arr,int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<"  ";
    }
    cout<<"\n";
}

void optimised(int *arr,int size,int d){
    
       
        reverse(arr,0,size-d-1);
        print(arr,6);
   
    reverse(arr,(size-d),size-1);
       print(arr,6);
    reverse(arr,0,size-1);
       print(arr,6);

    

}

int main(){

    int arr[]={2,4,5,6,7,9};
    // RightRotate(arr,6,2);
    // for(int i=0;i<6;i++){
    //     cout<<arr[i]<<"\n";
    // }
    optimised(arr,6,2);
    return 0;
}