//Run Time O(n^2)
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        //using two for loops to chek i and i+1 for target sum
         for(int i = 0; i <nums.size(); i++)
         {
            for(int j= i+ 1; j <nums.size(); j++)
            if ((nums[i] +nums[j]) == target)
            {
                return {i,j};
            }
         }
return{};
    }
    
};
