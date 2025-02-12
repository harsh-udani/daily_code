class Solution {
public:
    string reverseWords(string s) {
        int pos= 0 ;
        for(int i =0 ; i< s.length();i++ )
        {
            if(isspace(s[i]))
            {   int j = i-1;
                while( pos<= j )
                {  swap(s[pos],s[j]);
                    pos++;
                    j--;
                    
                }
                pos = i +1;
            }
            if(i==s.length()-1)
            {
                int j = i ;
                while(pos<=j)
                {
                    swap(s[pos++],s[j--]);
                }
            }
        }
        return s ;
    }
};