class Solution {
public:
    string reverseWords(string s) {
        int i = s.find_first_not_of(" ");
        int j = s.find_last_not_of(" ");
        //cout<<s[j]<<endl;
        string temp = "";
        int check =0 ;
        for( int k= i;k<= j;k++)
        {  
            if(isspace(s[k]))
            {   if(check ==1)
                {
                continue;
                }
               temp.push_back(' ');
               check =1 ;
            }
            else{  temp.push_back(s[k]);
                   check = 0 ;
            }
        }
        int t_len= temp.length()-1;
        //cout<<temp[t_len]<<endl;
         s = "";
       int lastpos= t_len;
       //cout<<temp << endl;
       //cout<<j << endl ;
       //cout<< temp[j]<<" "<<endl;
       for(int m= t_len ;m>=0 ;m--)
       {
          if(isspace(temp[m]))
           {
            int b = m+1;
            while(b<=lastpos)
            {   //cout<<temp[j]<<" "<<endl;
                //cout<< temp[b]<<"  ";
                s.push_back(temp[b++]);

            }
            s+=" ";
             lastpos = m-1 ;
           }
           if (m==0){
            int b = m ;
            while(b<=lastpos)
            {
                s.push_back(temp[b++]);
            }
           
          }
       }
        return s;
    }
};