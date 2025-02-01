class Solution {
public:
    bool checkEqual(int a[],int b[])
    {
        for(int i =0 ;i< 26;i++)
        {
            if(a[i]!=b[i])
            {
                return false ;
            }
        }
        return  true ;
    }
    bool checkInclusion(string s1, string s2) {
        int count[26]={0};
        for(int i =0 ;i< s1.length();i++)
        {
            int index = s1[i]-'a';
            count[index]++;
        }
        int i =0 ;
        int window_size = s1.length();
        int count2[26]={0};
        while(i< window_size&& i<s2.length()){
            int index = s2[i]-'a';
            count2[index]++;
            i++;
        }

        if(checkEqual(count,count2 ))
        {
            return true ;
        }
        while(i<s2.length())
        {
            char newchar = s2[i];
            int index = newchar - 'a';
            count2[index]++;
            int oldchar = s2[i-window_size];
             index = oldchar - 'a';
            count2[index]--;
            i++; 
             if(checkEqual(count,count2 ))
             {
            return true; 
            }
        }
      /*  if(checkEqual(count,count2 ))
        {
            return true; 
        }*/
    return false;
    }
};