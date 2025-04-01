
class Solution {
public:
    string largestOddNumber(string num) {
        string s = num ; 
        int start = 0 ;
        for(int i = s.length()-1 ;i>=0 ; i--)
        {   
            int n = (int)s[i] - 48 ; 
            if(n%2==0)
            {
                s.pop_back();
            }
            else {
                return s ; 
            }
        }
        return s ;
    }
};