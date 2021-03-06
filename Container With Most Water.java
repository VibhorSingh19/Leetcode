class Solution {
    public int maxArea(int[] height) {
        int max=0,area;
        for(int i=0;i<height.length;i++)
        {
            for(int j=i+1;j<height.length;j++)
            {
             if(height[i]>height[j])
             {
             area=(j-i)*height[j];
             }
             else
            {
            area=(j-i)*height[i];
             }
                if(max<area)
                {
                    max=area;
                    //System.out.println(i+","+j+"="+area);
                }
            }
        }
        return max;
    }
}