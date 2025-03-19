class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count = 0 ;
        int n = nums.size();
        for(int i = 0 ; i <nums.size(); i++)
        {  
           if(nums[i]==0)
           {  count++;
            if(i+1 >=n || i+2>=n)
            {
                return -1 ;
            }
            nums[i] = !nums[i];
            nums[i+1] = !nums[i+1];
            nums[i+2] =!nums[i+2];
           }
        }
        // for(int i =0 ; i< nums.size() ; i++ )
        // {
        //     if(nums[i]== 0)
        //     {
        //         return -1 ;
        //     }
        // }
        return count;
    }
};