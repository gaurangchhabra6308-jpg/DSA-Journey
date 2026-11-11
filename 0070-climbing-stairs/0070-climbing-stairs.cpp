class Solution {
public:
    int climbStairs(int n) {
       if(n==0) return 1;
       if(n==1) return 1;
       int prev=1,curr=1;
       for(int i=2;i<n+1;i++){
        int temp=curr;
        curr=prev+curr;
        prev=temp;
       }
       return curr;
    }
};