// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n=nums.size();
//         vector<int>ans;
//         for(int i=0; i<n-1; i++){
//             for(int j=i+1; j<n; j++){
//                 if((nums[i]+nums[j])==target){
//                     ans.push_back(i);
//                     ans.push_back(j);
//                     break;
//                 }
//             }
//         }
//         return ans;
//     }
// };




class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        map<int,int>mp;

        for(int i=0; i<n; i++){
            mp[nums[i]]=i;
        }

        //finding the b=target-a
        for(int i=0; i<n; i++){
            int k=target-nums[i];
            if(mp.find(k)!=mp.end() && mp[k]!=i){
                ans.push_back(i);
                ans.push_back(mp[k]);
                break;
            }
        }

        return ans;
    }
};
