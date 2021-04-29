//problem: https://leetcode.com/problems/defanging-an-ip-address/
class Solution {
public:
    string defangIPaddr(string address) {
        string defangedIP = "";
        for(int i = 0; i < address.size(); i++) {
            if(address[i] == '.') {
                defangedIP.push_back('[');
                defangedIP.push_back('.');
                defangedIP.push_back(']');
            } else {
                 defangedIP.push_back(address[i]);
            }
        }
        
        return defangedIP;
    }
};