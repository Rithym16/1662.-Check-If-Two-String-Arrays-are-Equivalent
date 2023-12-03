class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int i=0,j=0;  //for string 1
        int x=0,y=0;  //for string 2
        while(i<word1.size() && j<word2.size()){
            if(word1[i][j]!=word2[x][y]){
                return false;
            }
            else if(word1[i][j]==word2[x][y]){
                j++;
                y++;
            }
            if(word1[i].size()==0){
                i=i+1;
                j=0;
            }
            if(word2[x].size()==0){
                x=x+1;
                y=0;
            }

        }
        return i==word1.size() && x==word2.size();

}
};
