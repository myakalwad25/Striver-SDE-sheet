#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

// code by vijay myakalwad;
    bool check(vector<string>&  board, int row, int col, int n) {
        // check row and column only in upward directions
        for(int i=row; i>=0; i--) {
            if(board[i][col]=='Q') return false;
        }
        for(int i=col; i>=0; i--) {
            if(board[row][i]=='Q') return false;
        }
        // diagonal 
        int i=1;
        while(row-i>=0 && (col-i>=0 || col+i<n)) {
            if(col-i>=0 ) if(board[row-i][col-i]=='Q') return false;
            if(col+i<n ) if(board[row-i][col+i]=='Q') return false;
            i++;
        }
        return true;
    }

    void fn(vector<string> board, int n, int row, int col, vector<vector<string>>& ans) {
        
        if(row>=n) {
            ans.push_back(board);
            return;
        }

        for(int i=0; i<n; i++) {
            if(check(board,row,i,n)) {
                board[row][i]='Q';
                fn(board,n,row+1,0,ans);
                board[row][i]='.';
            }
        }


    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board;
        for(int i=0 ;i<n; i++) {
            string str="";
            for(int j=0; j<n; j++) {
                str.push_back('.');
            }
            board.push_back(str);
        }

        fn(board,n,0,0,ans);
        return ans;
    }
};