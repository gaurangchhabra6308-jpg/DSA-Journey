class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
       int i=0;
       int j=0;
       int res=0;
       int originalK = k;
       while(j<answerKey.size()){
        if(answerKey[j]=='F'){
            k--;
        }
        if(k<0){
            if(answerKey[i]=='F'){
                k++;
            }
            i++;
        }
        j++;
    res=max(j-i,res);
       } 
        i=0,j=0;
        k=originalK;
       while(j<answerKey.size()){
        if(answerKey[j]=='T'){
            k--;
        }
        if(k<0){
            if(answerKey[i]=='T'){
                k++;
            }
            i++;
        }
        j++;
     res=max(j-i,res);
       } 
      return res;
    }
};