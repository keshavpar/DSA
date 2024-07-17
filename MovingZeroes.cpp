//This function we are shifting the zeroes to the end of the Array while keeping the elements in the same order as they were earlier
//Arrays
#include <iostream>
using namespace std;
//This is the function to move the Zeroes to the end of the Array
void movingZeroes(int *arr,int size){
//This is the Effiecient Solution as it is taking Linear Time to traverse the array and shifting the zeroes to the end 
//while not chaning the order of the elements 
    int position=0;
    for (int i=0;i<size;i++){
        //We are concerned with only non zeroes element and if we found it we add it to the pointer position 
        if(arr[i]!=0){
            //Assiging the arr value to the non zero element in the Array
            arr[position]=arr[i];
            //Increasing the Position by 1 once we add the value to  that position 
            position++;
        }
    }
}

int main(){
    /*This is the first scenario */
    int arr[]={8,5,0,10,0,0,20};
    movingZeroes(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<"\n";
    }


    return 0;
}
