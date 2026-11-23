class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mp;
        
        //counting frequency of the elements:
        for(int i=0; i<n; i++){
            mp[nums[i]]++;
        }

        for(auto el: mp){
            if(el.second>1){
                return true;
                break;
            }
        }
        return false;

    }
};