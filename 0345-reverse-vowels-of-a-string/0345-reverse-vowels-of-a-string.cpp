class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> v {'a','e','i','o','u'};
        vector<int> arr;
        for(int i =0; i< s.size();i++ )
        {
            if(v.find(tolower(s[i]))!=v.end()){
                arr.push_back(i);
            }
        }
        int i =0;
        int l = arr.size()-1;
       
        while(i<l){
            int p = arr[i];
            int q = arr[l] ;
            swap(s[p],s[q]);
            i++;
            l--;
        }
     return s ;
    }
};