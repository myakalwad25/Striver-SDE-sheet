#include <bits/stdc++.h>
using namespace std;

//code by vijay myakalwad 

void rotateMatrix(vector<vector<int>> &matrix, int n, int m)
{   
    
    //que.push(matrix[0][0]);
    int up=0,down=n-1,right=m-1,left=0;
    while(up<down && right>left) {
          // right 
          queue<int> que;
           que.push(matrix[up][left]);
          for(int col=left; col<right; col++) {
            que.push(matrix[up][col+1]);
            matrix[up][col+1]=que.front();
            que.pop();
          }

          // down
          for(int row=up; row<down; row++) {
            que.push(matrix[row+1][right]);
            matrix[row+1][right]=que.front();
            que.pop();
          }
          
          //left
          for(int col=right; col>left; col--) {
            que.push(matrix[down][col-1]);
            matrix[down][col-1]=que.front();
            que.pop();
          }

          //up 
          for(int row=down; row>up; row--) {
            que.push(matrix[row-1][left]);
            matrix[row-1][left]=que.front();
            que.pop();
          }

          up++;
          down--;
          right--;
          left++;
    }


}