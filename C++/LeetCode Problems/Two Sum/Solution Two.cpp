#include <unordered_map>
//trying a hashmap for speed optimization
//literally first time using it
class Solution 
{
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        /*//use two for loops
        int sumcheck = 0;
         for(int i = 0; i <nums.size(); i++)
         {
            for(int j= i+ 1; j <nums.size(); j++)
            if ((nums[i] +nums[j]) == target)
            {
                return {i,j};
            }
         }*/

         //declaring a hashmap
         unordered_map<int, int> umap;

         /*/for loop to assign the values in the vector to the hashmap 
         for(int i = 0; i < nums.size(); i++)
         {
            umap[i]= nums[i];
         }

        
        for(int i =0; i < umap.size(); i++)
        {
             for(int j= i+ 1; j <umap.size(); j++)
            if ((umap[i] +umap[j]) == target)
            {
                return {i,j};
            }
        }
        
        okay, after several attempts this works but its slower than solution 1, which mean I am doing something wrong. Hash Maps are used for speed efficiency.
        
        using https://en.cppreference.com/w/cpp/container/unordered_map.html to redo solution 2*/

            //idea is to use find() to locate the other addednd (addend needed + addend we have = target number)
        for(int i =0; i < nums.size(); i++)
        {
            int firstAddedend = target - nums[i];
            if(umap.find(firstAddedend) != umap.end())
            {
                return {umap[firstAddedend],i};
            }
            //then we add current number nums[i] to the map to see if it will result in the target number when added 
            umap[nums[i]]= i;
        }

return{};
    }
    
};
