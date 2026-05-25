#include<iostream>
using namespace std;



void spiralmetrix(int mat[][4], int n, int m){
    int srow = 0, scol = 0, erow= n-1, ecol= m-1;
    while (srow <= erow && scol <= ecol){
        //top row
        for(int j= scol ; j <= ecol ; j++){
            cout<<mat[srow][j]<<" ";
        }
        //right  col
        for(int i = srow+1 ; i <= erow ; i++){
            cout<<mat[i][ecol]<<" ";
        }
        //bottom row
        for(int j = ecol-1 ; j>= scol; j--){
            if (srow == erow)break;
            cout<<mat[erow][j]<<" ";
            } 
        //left col
        for(int i = erow-1 ; i >= srow+1 ; i--){
                if(scol == ecol)break;
                cout<<mat[i][scol]<<" ";
            }
            srow++; scol++;
            erow--; ecol--;
        }
        cout<<endl;


    }



    int digonalsum(int mat[][4], int n){
        int sum = 0;
    //     for(int i = 0 ; i< n ; i++){
    //         for(int j = 0 ; j < n ; j++){
    //             if(i == j ){
    //                 sum += mat[i][j];
    //             }
    //             else if (j == n-i-1){
    //                 sum += mat[i][j];
    //             }
    //         }
    //     }
    //     cout<<"sum = " <<sum<<endl;
    //     return sum;
    // }

    for (int i =0 ; i < n ; i++){
        sum += mat [i][i];
            if(i != n -i -1){
                sum += mat[i][n-i-1];
            }
        
        }
        cout<<"sum = "<<sum <<endl;
        return sum;
    }
    
int main(){
  int mat[4][4] = {{1, 2, 3, 4},
                    {5, 6, 7, 8},
                    {9 , 10 ,11, 12},
                    {13, 14, 15, 16}};
    digonalsum(mat, 4);

  
    return 0;
}