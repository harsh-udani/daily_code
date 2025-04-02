class Solution {
public:
    int findSearch(vector<int>& nums)
    {
        int s = 0 ; 
        int e = nums.size()-1; 
        int mid= s + (e-s)/2 ;
        if(s==e || nums[s] < nums[e])
        {
            return s ; 
        }
        while(s < e )
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
        return s ;
    }
    int search(vector<int>& nums, int target) {
        int pivot = findSearch(nums);
           
        int e = nums.size()-1 ; 
        int s ;
        if((nums[pivot] <= target) && (target <= nums[e]))
        {
             s = pivot;
        }
        else{
             s = 0 ;
            e = pivot-1 ;
        }
        int mid = s + (e-s)/2 ; 
        while(s <=e)
        {
            if(nums[mid]== target)
            {
                return mid ;
            }
            else if(target < nums[mid])
            {
                e = mid-1; 
            }
            else{
                s = mid+1 ;
            }
            mid = s + (e-s)/2 ;  
        }
        return -1 ; 
    }
};