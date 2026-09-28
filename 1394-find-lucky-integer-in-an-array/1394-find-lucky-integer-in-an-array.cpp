class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(int it: arr){
        freq[it]++;
        }
        int lucky=-1;
        for(auto i:freq){
            if(i.first==i.second){
                lucky=max(lucky,i.first);
            }
        }
        return lucky;
    }
};