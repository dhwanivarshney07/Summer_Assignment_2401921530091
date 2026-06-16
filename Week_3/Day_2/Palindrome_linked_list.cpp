class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> nums;

        ListNode* curr = head;
        while (curr) {
            nums.push_back(curr->val);
            curr = curr->next;
        }

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {
            if (nums[i] != nums[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};