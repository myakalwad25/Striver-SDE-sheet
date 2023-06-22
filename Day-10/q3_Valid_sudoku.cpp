#include<bits/stdc++.h>
using namespace std;

// code by vijay myakalwad

 bool check( int board[9][9],int row,int col,int val) {
           for(int i=0; i<9; i++) {
               if(board[i][col]==+val) return false;
               if(board[row][i]==val) return false;
           }
           int st_row=(row/3)*3;
           int st_col=(col/3)*3;
           for(int i=st_row; i<st_row+3; i++) {
               for(int j=st_col; j<st_col+3; j++) {
                   if(board[i][j]==val) return false;
               }
           }
           return true;
}


bool fn(int board[9][9], int ind) {

        if(ind==81) return true;

            int row=ind/9;
            int col=ind%9;
            if(board[row][col]!=0) {
               return fn(board,ind+1);
            }
            else {
                for(int i=1; i<=9; i++) {
                    if(check(board,row,col,i)) {
                        board[row][col]=+i;
                        if(fn(board,ind+1)) return true;
                        else {
                            board[row][col]=0;
                        }
                    }
                } 
                return false;
            }        
           

          
    }


bool isItSudoku(int matrix[9][9]) {     
    return  fn(matrix,0);
}
