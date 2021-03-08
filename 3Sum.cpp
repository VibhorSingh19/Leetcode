class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(),nums.end());
       vector<vector<int>> res;
        for(int i=0; i<nums.size(); i++)
        {
            int j=i+1;
            int k=nums.size()-1;
            while(j<k)
            {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                       
                        res.push_back({nums[i],nums[j],nums[k]});
                        
                        j++;
                        k--;
                    }
                else if(nums[i]+nums[j]+nums[k]<0)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        //res.unique();
        
        return res;
    }
};