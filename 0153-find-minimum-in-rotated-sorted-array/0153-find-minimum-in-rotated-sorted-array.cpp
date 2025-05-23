class Solution {
public:
    int findMin(vector<int>& nums) {
        int s = 0 ; 
        int e = nums.size()-1 ; 
        if(s==e || nums[s] < nums[e])
        {
            return nums[s]; 
        }
        int mid = s + (e-s)/2 ; 
        while(s<e)
        {
            if(nums[mid] >= nums[0])
            {
                s = mid+1 ; 
            }
            else{
                e = mid ;
            }
            mid = s + (e-s)/2 ;  
        }
        return nums[s] ;
    }
};