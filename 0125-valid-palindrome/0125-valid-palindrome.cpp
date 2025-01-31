class Solution {
public:
    bool check_palindrome(string s)
    {
        int st =0 ;
        int e = s.length();
        e = e -1 ;
        while(st<e)
        {
            if(s[st]!=s[e])
            {
                return false;
            }
            else{
                st++;
                e--;
            }
        }
        return true ;

    }
    bool valid_character(char ch)
    {
        if(ch>='a' && ch<='z' || ch>= 'A'&& ch<= 'Z' || ch>='0'&& ch<='9')
        {
            return true ;
        }
        return false ;
    }
    bool isPalindrome(string s) {
       // int e = 0 ;
        int e = s.length() ;
        string temp;
        for(int i =0 ; i< e;i++  )
        {
            if(valid_character(s[i]))
            {
                temp.push_back(tolower(s[i]));

            }
        }
        if(check_palindrome(temp))
        {
            return true ;
        }
        return false ;
    }
};