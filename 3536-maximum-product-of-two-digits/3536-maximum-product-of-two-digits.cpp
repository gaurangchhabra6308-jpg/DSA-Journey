class Solution {
public:
    int maxProduct(int n) {
        int max1=0,max2=0;
        while(n!=0){
            int dig=n%10;
            if(max1<=dig){
                max2=max1;
                max1=dig;
            }
            else if(max2<dig){
                max2=dig;
            }
            n=n/10;

        }
        return max1*max2;
    }
};