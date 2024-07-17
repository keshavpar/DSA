#include <iostream>
//array
using namespace std;

int Search(int *arr, int element, int size) {
    //Loop to search the Value starting from the first point to the last value
    for (int i = 0; i < size; i++) {
        //Checking if the value is same to the value we got in the program 
        if (arr[i] == element) {
            return i;
        }
    }
    return -1; // Move this line outside the for loop
}

int Insert(int *arr,int pos,int size,int capacity,int val){
    //If Position is greater than the capacity then we are sending with a index of -1 to the main Function
    if(pos>=capacity){
        return -1;
    }
    //Assigning the Value to the index variable 
    int index=pos;
    //This is a loop which is being traversed from the last value till the value of the index and the elements are shifted
    //one index ahead 
    for(int i=size-1;i>=index;i--){
        arr[i+1]=arr[i];
    }
    //once all the values are shifted we are assigning the value to the place designated by the user
    arr[index]= val;
    //Returning the size updated
    return(size+1);

//TIME COMPLEXITY OF THE FUNCTION is O(n)
}
int Delete(int *arr,int size,int val){
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==val){
            index=i;
        }
    }
    if(arr[index]!=val){
        return -1;
    }
    for(int i=index;i<size;i++){
        arr[i]=arr[i+1];
    }
    return size;
}

int main() {
    int arr[6] = {2, 4, 7, 8};
    int arr1[4]={1,4,2,5};
    //Insert the Element
    // cout << Insert(arr,1,4,6,1)<<"\n";
    // for(int i=0;i<6;i++){
    //     cout<<arr[i];
    // }
    //Delete the element
    cout<<Delete(arr1,4,1)<<"\n";

  
    return 0;
}
