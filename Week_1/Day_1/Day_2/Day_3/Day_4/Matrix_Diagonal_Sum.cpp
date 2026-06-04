class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
      int primary=0;
      int secondary=0;
      int n=mat.size();
      for(int i=0;i<n;i++){
        primary+=mat[i][i];
        secondary+=mat[i][n-1-i];

      }
      int total=primary+secondary;
      if(n%2==1){
    total-=mat[n/2][n/2];
      }
      return total;}

};