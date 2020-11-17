//problem: https://leetcode.com/problems/jewels-and-stones/
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int count = 0;
        for(char const s: S) {
             for(char const j: J) { 
                if (s == j) {
                count++;     
                }         
            }    
        }
        return count;
    }
};