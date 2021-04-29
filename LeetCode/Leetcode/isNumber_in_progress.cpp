//problem: https://leetcode.com/problems/valid-number/

class Solution {
public:
    bool isNumber(string s) {
    bool middle = false;
    //middle of two numbers, decimal point and e
    //begining of the number is the sign 
    // beginning and after the number is space
     char current = NULL;
    char previous = NULL;
    char next = NULL;
        
        
      for(int i = 0; i< s.length(); i++) {
          current = s.at(i);
        char previous = s.at(i);
        if(i+ < s.length()) char next = s.at(i+1);
          
          if(s.at(i) != ' ' && firstNum) 
          
      }  
        return true;
    }
};