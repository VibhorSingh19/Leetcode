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
//Using math func.
/* import static java.lang.Math.*;
class Solution {
    public int maxArea(int[] height) {
        int max=0,area;
        for(int i=0;i<height.length;i++)
        {
            for(int j=i+1;j<height.length;j++)
            {
             max= Math.max(max, Math.min(height[i], height[j]) * (j - i));
            }
        }
        return max;
    }
}*/

//Second method o(n)time complexity
/*import static java.lang.Math.*;
class Solution {
    public int maxArea(int[] height) {
        int max=0,area;
        int j=height.length-1;
        int i=0;
        while(j>i)
            {
             max= Math.max(max, Math.min(height[i], height[j]) * (j - i));
            System.out.println(i+","+j+"="+(Math.min(height[i], height[j]) * (j - i)));
            if (height[i] < height[j])
                i++;
            else
            j--;
            
            }
        return max;
    }
} */