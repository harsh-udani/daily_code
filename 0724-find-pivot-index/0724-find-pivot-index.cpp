class Solution {
public:
    int pivotIndex(vector<int>& nums) {
           int left_sum = 0;
        for(int i = 0 ; i<=nums.size()-1;i++)
        {   
         
             int right_sum =0 ;
            
            for(int j =i+1;j< nums.size();j++)
            {
                right_sum = right_sum + nums[j];
            }
           cout << left_sum<<endl;
            if(left_sum == right_sum)
            {  
                return i ;
                break;
            }
            left_sum = left_sum + nums[i];
        }
      return -1;
    }
};