#include <bits/stdc++.h> 
using namespace std;

// code by vijay myakalwad

bool fn(vector<vector<int>>& maze, int n,int row,int col,vector<vector<int>>& matrix,vector<int>vec) {   
    if(row==n-1 && col==n-1) {
      vec[(n*row)+col]=1;
      matrix.push_back(vec);
      return true;
    }
    
    
    
    vec[(n*row)+col]=1;
    vector<int> x={1,-1,0,0};
    vector<int> y={0,0,1,-1};
    maze[row][col]=0;
    bool ans=false;
    for(int i=0; i<4; i++) {
        int n_row=row+x[i];
        int n_col=col+y[i];
        if(n_row>=0 && n_row<n && n_col>=0 && n_col<n && maze[n_row][n_col]==1) {
          
          ans=fn(maze,n,n_row,n_col,matrix,vec);
           
        }
    }
    maze[row][col]=1;
    return ans;
}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
  // Write your code here.
  
  vector<vector<int>> matrix;
  
  vector<int> vec(n*n);
  fn(maze,n,0,0,matrix,vec);
   return matrix;
    
}