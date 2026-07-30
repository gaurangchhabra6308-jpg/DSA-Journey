class Solution {
public:
    int minimumPushes(string word) {
     int n=word.size();
     int block=n/8;
     int rem=n%8;
     int cnt= (block*(block+1)*4)+rem*(block+1);
     return cnt;
    }
};