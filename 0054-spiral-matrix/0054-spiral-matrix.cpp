class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    //    int m = matrix.size();
    //    int n= matrix[0].size();
    //    vector<vector<bool>> visited(m , vector<bool>(n,false));
    //    vector<int>ans;
    //    int dr[]={0,1,0,-1};
    //    int dc[]={1,0,-1,0};
    //    int r=0,c=0,dir=0;
    //    for(int i =0;i<m*n;i++)
    //    {
    //     ans.push_back(matrix[r][c]);
    //     visited[r][c]=true;
    //     int nr= r+dr[dir];
    //     int nc= c+dc[dir];
         
    //     if(nr<0||nr>=m||nc<0||nc>=n||visited[nr][nc])
    //     {
    //         dir=(dir+1)%4;
    //         nr=r+dr[dir];
    //         nc=c+dc[dir];
    //     }
    //     r=nr;
    //     c=nc;
    //    }
    //    return ans;

    //APPROACH 2

    int m = matrix.size();
    int n = matrix[0].size();
    vector<int>ans;
    int top=0,right=n-1,bottom=m-1,left=0;
    while(top<=bottom && left<=right){
    for(int j=left;j<=right;j++)
    {
        ans.push_back(matrix[top][j]);
        
    }
    top++;
    for(int i=top;i<=bottom;i++)
    {
        ans.push_back(matrix[i][right]);
        
    }
    right--;
    if(top<=bottom){
    for(int j=right;j>=left;j--)
    {
        ans.push_back(matrix[bottom][j]);
        
    }
    bottom--;
    }
    if(left<=right){
    for(int i=bottom;i>=top;i--)
    {
        ans.push_back(matrix[i][left]);
        
    }
    left++;
    }
    }
    return ans;
    }
};