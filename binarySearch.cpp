//In this function we are performing BINary Search With Recursive Approach 

#include <iostream>
using namespace std;

int binarySearch(int *arr,int low,int size,int numSearch){

while(low<=size){

    int mid =low+size/2;
    if(arr[mid]==numSearch){
        return mid;
    }
    if(arr[mid]>numSearch){
        return binarySearch(arr,low,mid-1,numSearch);
    }
    return binarySearch(arr,mid+1,size,numSearch);
}
return -1;
} 

int main(){
int arr[]={10,20,30,40,50,60};
//Element to Search is 20
int arr2[]={5,15,25};
//Searching Element over here is 25
int arr3[]={10,15};
//Searching Element over here is 15

int result=binarySearch(arr2,0,3,20);
cout<<result;

}