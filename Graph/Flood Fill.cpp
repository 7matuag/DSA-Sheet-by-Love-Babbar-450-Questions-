class Solution {
public:
    void solve(int i,int j,int val,int c,vector<vector<int>>& img,vector<vector<bool>>&vis) {
        vis[i][j]=1;
        img[i][j]=c;
        if(i+1<img.size() && img[i+1][j]==val && !vis[i+1][j]){
            solve(i+1,j,val,c,img,vis);
        }
        if(j+1<img[0].size() && img[i][j+1]==val && !vis[i][j+1]){
            solve(i,j+1,val,c,img,vis);
        }
        if(i-1>=0 && img[i-1][j]==val && !vis[i-1][j]){
            solve(i-1,j,val,c,img,vis);
        }
        if(j-1>=0 && img[i][j-1]==val && !vis[i][j-1]){
            solve(i,j-1,val,c,img,vis);
        }
        return ;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int i, int j, int color) {
        vector<vector<bool>>vis(image.size(),vector<bool>(image[0].size(),0));
        solve(i,j,image[i][j],color,image,vis);
        return image;
    }
};
