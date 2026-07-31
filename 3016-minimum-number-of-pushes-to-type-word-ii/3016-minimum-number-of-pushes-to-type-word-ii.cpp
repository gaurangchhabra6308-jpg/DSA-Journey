class Solution {
public:
    int minimumPushes(string word) {
        vector<int>charcnt(26,0);

        for(char ch:word){
            charcnt[ch-'a']++;
        }
        sort(charcnt.begin(),charcnt.end(),greater<int>());
        int minpush=0;
        for(int i=0;i<26;i++){
           minpush+=charcnt[i]*(i/8+1);
        }
        return minpush;
    }
};