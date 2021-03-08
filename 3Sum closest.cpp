class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int min=999999,val=0;
	sort(nums.begin(),nums.end());
       vector<int> res;
        for(int i=0; i<nums.size()-2; i++)
        {
            for(int j=i+1;j<nums.size()-1;j++)
            {
                for(int k=j+1;k<nums.size();k++)
                {
                    if(nums[i]+nums[j]+nums[k]!=target)
                    {
                       if(target>nums[i]+nums[j]+nums[k])
                       {
                           if(target-(nums[i]+nums[j]+nums[k])<min)
                            min=target-(nums[i]+nums[j]+nums[k]);
                           val=nums[i]+nums[j]+nums[k];
                        }
                        else
                        {
                            if((nums[i]+nums[j]+nums[k])-target<min)
                            min=(nums[i]+nums[j]+nums[k])-target;
                            val=nums[i]+nums[j]+nums[k];
                        }
                        break;
                    }
                }
            }
        }
        return val;
    }
};