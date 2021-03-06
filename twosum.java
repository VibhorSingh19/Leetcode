class Solution {
    public int[] twoSum(int[] nums, int target) {
        int x=0,y=0;
        for(int i=0;i<=nums.length;i++)
        {
             for(int j=i+1;j<nums.length;j++)
        {
            if((nums[i]+nums[j])==target)
            {
                x=i;
                y=j;
                 break;
            }
                //cout<<'['<<i<<','<<j<<']';
                //System.out.println("["+i+","+j+"]");
        } 
        }
        int z[]={x,y};
    return z;
    }
    
}