 class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> listVal;
        while(head!=NULL){
            listVal.push_back(head->val);
            head=head->next;
        }
        int left=0;
        int right=listVal.size()-1;
        while(left<right && listVal[left]==listVal[right]){
            left++;
            right--;
        }
        return left>=right;
    }
};