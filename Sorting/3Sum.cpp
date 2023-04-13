#include <vector>
#include <iostream>
#include <unordered_map>

using  std::vector;
using  std::cout;
using  std::endl;

#include <algorithm>


class Solution 
{
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        std::unordered_map<int, vector<int>> map;
        vector<vector<int>> solution;
        int dest ,j;

        sort(nums.begin(), nums.end());
        for(int i= 0 ;i<nums.size();i++)map[nums[i]].push_back(i);

        for(int i= 0 ;i<nums.size()-2;i++)
        {
            map[nums[i]].erase(map[nums[i]].begin());
            for(int k=i+1 ; k <nums.size()-1;k++)
            {
                dest = (nums[i]+nums[k])*(-1);
                if (map.count(dest))
                {
                    if(map[dest].size()>0)
                    {
                        j = map[dest].at(0);
                        if((j>k)||(j==k &&map[dest].size()>1))
                            solution.push_back({nums[i],nums[k],dest});  
                    }
                }
                while(k<nums.size()-1 && nums[k]==nums[k+1])k++;       
            }
            while(i<nums.size()-1 && nums[i]==nums[i+1])i++;
        }
        return solution;  
    }

};