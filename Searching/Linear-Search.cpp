#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int key){
    //Starting the loop and looking for the key in arr
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return i; // Return the index of the key
        }
    }
    return -1; // Return -1 if the key is not found
}
int main(){
    int arr[]={10,50,30,70,80,60,20,90,40};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key=70;
    //Calling linearSearch() for arr with key=70
    int i=linearSearch(arr,size,key);
    //printing result based on value returned by
    if(i==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index "<<i<<endl;
    }
    return 0;
}