#include<iostream>
using namespace std;


// void printsubarray(int *arr , int n){
//     for (int start = 0 ; start < n ; start++){
//         for(int end = start ; end < n ; end++){
//             // cout<<" ("<<start<<","<<end<<") ";
//             for(int i = start ; i <= end ; i++){
//                 cout<<arr[i];
//             }
//             cout<<", ";
//         }
//         cout<<endl;

//     }
    
// }

// int maxsum = INT_MIN;
// void maxsubarraysum(int *arr,int n){
//     for(int start = 0 ; start < n ; start++){
//         for(int end = start ; end < n ; end++){
//             int curtsum = 0;
//             for (int i = start ; i <= end ; i++){
//                 curtsum += arr[i];
//             } 
//             cout<<curtsum<<" ";
//             maxsum = max(maxsum, curtsum);
//         }
//         cout<<endl;
//     }
//     cout<<"Maximum subarray sum is: "<<maxsum<<endl;
// }



// int main(){


//     int arr[] = {2, -3, 6,-5,4,2};
//     int n = sizeof(arr)/sizeof(int);
//     maxsubarraysum(arr, n);

//     return 0;
// }

// int maxsum = INT_MIN;
// void maxsubarraysum2(int *arr,int n){
//     for(int start = 0 ; start < n ; start++){
//         int curtsum = 0;
//         for(int end = start ; end < n ; end++){
//                 curtsum += arr[end];
//                 cout<<curtsum<<" ";
//                 maxsum = max(maxsum, curtsum);
//             }
//             cout<<endl;
//         }
//         cout<<"Maximum subarray sum is: "<<maxsum<<endl;
// }



// void maxsubarraysum3(int *arr,int n){
//     int maxsum = INT_MIN;
//     int curtsum  = 0;
//     for(int i = 0 ; i < n ; i ++){
//         curtsum += arr[i];
//         maxsum = max(maxsum, curtsum);
//         if(curtsum < 0){
//             curtsum = 0;
//         }
       
//     }cout<<"Maximum subarray sum is: "<<maxsum<<endl;
// }



// void maxprofit(int *arr, int n){
//     int bestbuy[100000];
//     bestbuy[0]= INT_MAX;
//     for(int i =1 ; i < n; i++){
//         bestbuy[i] = min(bestbuy[i-1], arr[i-1]);
//     }
//     int maxprofit = 0;
//     for(int i = 0 ; i < n ; i++){
//         int currprofit = arr[i] - bestbuy[i];
//         maxprofit = max(maxprofit , currprofit);
//     }
//     cout<<"Maximum profit is : "<<maxprofit<<endl;


// }


void trap(int *hights, int n){
    int leftmax[20000];
    leftmax[0] = hights[0];
    for(int i = 1 ; i < n ; i ++){
        leftmax[i] = max(leftmax[i -1], hights[i-1]);
    }
    int rightmax[20000];
    rightmax[n-1] = hights[n-1];
    for(int i = n-2 ; i >= 0 ; i--){
        rightmax[i]= max(rightmax[i+1], hights[i+1]);
    }
    int watertraped = 0;
    for(int i =0 ; i<n ; i++){
        int currwater = min(leftmax[i], rightmax[i])- hights[i];
        if (currwater > 0){
            watertraped += currwater;
        }
    }
    cout<< "water traped : "<<watertraped<<endl;
}



int main(){


    int hights[7] = {4,2,0,6,3,2,5};
    int n = sizeof(hights)/sizeof(int);
    trap(hights, n);

    return 0;
}