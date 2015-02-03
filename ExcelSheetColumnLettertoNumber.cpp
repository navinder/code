/*
Given a column title as appear in an Excel sheet, return its corresponding column number.

For example:

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
	https://oj.leetcode.com/problems/excel-sheet-column-number/
*/

class Solution {
public:
    int titleToNumber(string s) {
        int colNum=0;
        for(int i=0;i<s.length();i++)
        {
            colNum = colNum *26 + (s.at(i) -'A'+1) ;
        }
        return colNum;
    }
};