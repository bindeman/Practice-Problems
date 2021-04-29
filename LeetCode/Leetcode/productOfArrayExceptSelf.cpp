//problem: https://leetcode.com/problems/product-of-array-except-self/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        
        vector<int> ascending(n, 1);
        vector<int> descending(n, 1);
        
        ascending[0] = 1;
        descending[n-1] = 1;
        
        
        for(int i = 1; i < n; i++) {
            ascending[i] = (ascending[i-1]*nums[i-1]);
            descending[n-i-1] = (descending[n-i]*nums[n - i]);
        }

        int solution = 0;
        for(int i = 0; i < n; i++) {
            solution = (ascending[i]*descending[i]);
            ascending[i] = solution;
            
        }
        return ascending;
    }
};