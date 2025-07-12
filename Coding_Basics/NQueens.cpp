#include<iostream>
#include <vector>
using namespace std;


bool safeHai(int board[][100],int i,int j,int n){
    int oi = i, oj = j;
//  original i and original j
    while(i>=0 and j>=0){
        if (board[i][j] == 1){
            return false;
        }                               //left diagonal
        i--;
        j--;
    }
    i = oi, j =oj;
   while(i>=0 and j<n){
    if (board[i][j] = 1){
        return false;                      //right diagonal
    }
    i--;
    j++;
   }

   i = oi;
    j =oj;
   for (int k = 0;k<i;k++){
     if (board[i][j] = 1){                  //column
        return false;
    }
   }
    
void nQueen(int board[][100],int i,int n){
        if (i==n-1)

    for (int j = 0;j<n;++j){
        if (safeHai(board,j,n)){
            board [i][j]  =1;
            bool isQueenPlaced = nQueen(board,n,i+1);
            if (isQuuenPlaced) return true;
        }
    }

}
int main()
{
    int board [100][100];
    int n  =4
    nQueen(board,n.0);
    return 0;
}