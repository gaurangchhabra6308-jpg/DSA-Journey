class Solution {
public:
    bool carPooling(vector<vector<int>>& trips, int capacity) {
       vector<int>lengthoftrip(1001,0);
       for(auto trip:trips){
        lengthoftrip[trip[1]]+=trip[0];
        lengthoftrip[trip[2]]-=trip[0];
       }
       int cnt=0;
       for(int i=0;i<1001;i++){
        cnt+=lengthoftrip[i];
        if(cnt>capacity)return false;
       }
       return true;
    }
};