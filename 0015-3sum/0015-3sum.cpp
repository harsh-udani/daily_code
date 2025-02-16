class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {
        int n = arr.size();
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        for (int i =0 ; i< n-2 ;i++)
        {   if( i !=0 && arr[i]==arr[i-1])
            {
                continue ;
            }
            int l = i+1;
            int k = n-1;
            while(l<k)
            {
                int sum = arr[i]+arr[l]+arr[k];
                if(sum >0 )
                {
                   k--;
                }
                else if(sum < 0)
                {
                    l++;
                }
                else{
                     ans.push_back({arr[i],arr[l],arr[k]});
                    l++;
                    k--;
                
                while(l<k && arr[l]==arr[l-1]) l++;
                while(l<k && arr[k]==arr[k+1]) k--;
                }

            }   

        }

        return ans ;
    }
};