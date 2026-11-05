class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int sum=0;int cnt=0;
        unordered_map<char,int>map;
        for(int i=0;i<garbage.size();i++){
            cnt+=garbage[i].size();
        
        for(auto c:garbage[i]) map[c]=sum;
        if(i<travel.size()) sum+=travel[i];
        }
        return cnt+map['M']+map['P']+map['G'];
    }
};