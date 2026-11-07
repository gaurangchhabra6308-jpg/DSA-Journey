class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int total=0;int prev=0;
        for(auto &row:bank){
            int device=count(row.begin(),row.end(),'1');
            if(device>0){
                total+=device*prev;
                prev=device;
            }
        }
        return total;
    }
};