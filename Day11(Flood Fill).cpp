class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newcolor) {
     if(image[sr][sc]==newcolor) 
        return image; 
     flood_fill(image,sr,sc,newcolor,image[sr][sc]);
        return image;
    }
    void flood_fill(vector<vector<int>>& image, int sr, int sc, int newcolor,int oldcolor){
        if(sr<0 || sc<0 ||sr>=image.size() || sc>=image[0].size() || oldcolor!=image[sr][sc]) 
            return;
        image[sr][sc]=newcolor;
        flood_fill(image,sr+1,sc,newcolor,oldcolor);
        flood_fill(image,sr-1,sc,newcolor,oldcolor);
        flood_fill(image,sr,sc+1,newcolor,oldcolor);
        flood_fill(image,sr,sc-1,newcolor,oldcolor);
    }
};
