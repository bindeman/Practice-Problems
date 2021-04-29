//February 6th, 2021
//Return "odd" if the length of all subtrings are an odd number, or "or even" if not.
#include <iostream> 
#include <vector>

using namespace std;

    string oddOrEvenSubstrings(string s) {
        int n = s.size();
        vector<vector<int> >matrix(n,vector<int>(n,0));
        
        //mark single character pallindromes on array
        for(int i = 0; i < n; i++) {
            matrix[i][i] = 1;
        }
        
        
        for(int col = 1; col < n; col++) {
            
            for(int row = 0; row < col; row++) {
                if(row == col - 1 && s[col] == s[row]) {
                    
                    matrix[row][col] = 1;
                } else if (matrix[row + 1][col - 1] == 1 && s[col] == s[row]) {
                    matrix[row][col] = 1;
                    //if((col - (row + 1) + 1)%2 == 0) return "Or not.";
                }
                if (matrix[row][col] == 1 && (col - row) % 2 == 1 && row != 0 && row - col != 1)  {
                    cout << "Row: " << row << " Col: " << col << endl;
                    // for(int i = 0; i < n; i++) {
                    //     cout << s[i] << " ";
                    //     for(int j = 0; j < n; j++) {
                    //         cout << matrix[i][j] << " ";
                        
                    // }
                    //     cout << endl;
                    // }
                    return "Or not.";
                }
                    
            }
        }
        
        
        return "Odd.";
    }

    int main() {

        vector<string> testcases = {"amanaplanacanalpanama", "madamimadam", "annamyfriend", "nopalindromes"};

        for(int i = 0; i < testcases.size(); i++) {
            cout << testcases[i] << ": " << oddOrEvenSubstrings(testcases[i]) << endl; 
        }

    }