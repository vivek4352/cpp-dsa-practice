#include<iostream>
using namespace std;
// int main(){
    // int marks[5];
    // int n = sizeof(marks)/sizeof(int);
    // cout<<"enter a number : ";
    // for (int idx = 0; idx <n; idx++){
    //     cin>>marks[idx];
    // }
    // cout<<"the number are :";
    // for (int idx = 0; idx <n; idx++){
    //     cout<<marks[idx]<<" ";
    // }
    // cout<<endl;

    //FIND A LARGER NUMBER IN AN ARRAY
    // int max[] = {1,3,5,8,2};
    // int n = sizeof(max)/sizeof(int);
    // int largest = max[0];
    // int min = max[0];
    // for (int i = 0; i <n; i++){
    //     if (largest < max[i]){
    //         largest = max[i];
    //     }
    //     if(min > max[i]){
    //         min = max[i];
    //     }
    // }
    // cout<<"the largest number is : "<<largest<<endl;
    // cout<<"the minimum number is : "<<min<<endl;


    // int arr[] = {1,3,5,8,2,4,7,6};
    // int key ;
    // int n = sizeof(arr)/sizeof(int);
    // cout<<"enter the key to search : ";
    // cin>>key;
    // for(int i = 0 ; i < n ; i++){
    //     if (arr[i] == key){
    //         cout<< i<<endl;
    //     }

    // int liniearsearch(int *arr, int n , int key){
    //     for (int i = 0 ; i < n ; i++){
    //         if (arr[i] == key)
    //         return i;
    //     }
    //     return -1;
    //}

    // void printarr(int *arr, int n){
    //     for (int i = 0 ; i< n ; i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // int main(){
    //     int arr[] = {5,4,3,9,2};
    //     int n = sizeof(arr)/sizeof(int);
    //     int copyarr[n];
    //     for(int i = 0. ; i < n ; i++){
    //         int j = n - i -1;
    //         copyarr[i] = arr[j];
    //     } 
    //     for(int i = 0. ; i < n ; i++){
    //         arr[i] = copyarr[i];
    //     }
    //     printarr(arr, n );
    // return 0;



    // void printarr(int *arr, int n){
    //     for(int i =0 ; i < n; i++){
    //         cout<<arr[i]<<" ";
    //     }
    //     cout<<endl;
    // }
    // int main(){
    //     int arr[] = {5,4,3,9,2};
    //     int n = sizeof(arr)/sizeof(int);
    //     int start = 0;
    //     int end = n-1;
    //     while( start < end){
    //         int temp = arr[start];
    //         arr[start] = arr[end];
    //         arr[end] = temp;
    //         start++;
    //         end--;
    //     }
    //     printarr(arr , n);


    int binarysearch(int *arr, int n , int key){
        int start = 0;
        int end = n-1;
        while(start<=end){
            int mid = (start + end) / 2;
            if(arr[mid] == key){
                return mid;
            }else if (arr[mid] < key){
                start = mid+1;
            }else{
                end = mid-1;
            }
        }
        return -1;

    }
    int main(){
        int arr[] = {2,4,6,8,10,12,14,16,18,20};
        int n = sizeof(arr)/sizeof(int);
        cout<<binarysearch(arr , n ,14)<<endl;

        return 0;
    }

