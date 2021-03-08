class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
	sort(nums.begin(),nums.end());
       vector<vector<int>> res;
        for(int i=0; i<nums.size()-2; i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]==0)
                    {
                       
                        res.push_back({nums[i],nums[j],nums[k]});
                        break;
                    }
                }
            }
        }
        return res;
    }
};