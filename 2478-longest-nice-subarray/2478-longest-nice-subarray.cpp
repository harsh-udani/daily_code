class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int s = 0 ;
        int e = 0 ; 
        int count ; 
        int max_count = 1;
        int n = nums.size();
        while(s < n && e < n )
        {   if((e+1)>=n)
             {  count  = e - s +1 ;
                max_count = max(max_count , count);
                break ;
             }
            if((nums[e]& nums[e+1])==0)
            {   int t = s ;
                while(t<e)
                {
                    if((nums[t]&nums[e+1])!=0)
                    {
                         count  = e - s +1 ;
                        max_count = max(max_count , count);
                         s = t+1 ; 
                         break;
                    }
                    else{
                        t++;
                    }
                    
                }
                if(t==e)
                {  
                    e++;
                }
            }
            else {
                 count  = e - s +1 ;
                 max_count = max(max_count , count);
                 if(s==e)
                 {
                    s++ ;
                    e++ ;
                 }
                 else{
                     e++;
                     s = e ;    
                 }
            }
        }
        
    return max_count ;
    }
};