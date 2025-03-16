class Solution {
public:
    bool is_possible(long long int mid ,vector<int>& ranks, int cars ,int n)
    {
        long long int sum = 0 ; 
        for(int i = 0 ; i <n ; i++)
        {
            long long int temp = (int)sqrt(mid / ranks[i]);

            sum = sum+ temp ; 
        }
        if(sum >= cars)
        {
            return true ; 
        }
        else{
            return false ;
        }
    }
    long long repairCars(vector<int>& ranks, int cars) {
        sort(ranks.begin(),ranks.end());
         int n = ranks.size();
        long long int s = ranks[0];
      long long int e = (long long)ranks[0] *cars *cars;
        long long int mid = s + (e-s)/2;
        long long int ans = 0;
        while(s<=e)
        {
        
        if(is_possible(mid , ranks, cars, n ))
        {
            ans = mid ;
            e = mid - 1 ; 
        }
        else{
            s = mid+1;
        }
          mid = s + (e-s)/2; 
        }

        return ans ;
    }
};