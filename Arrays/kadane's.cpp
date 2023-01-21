#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0, maximum = nums[0];

        for (int i = 0; i < nums.size(); i++)
        {
            sum = sum + nums[i];
            maximum = max(maximum, sum);
            if (sum < 0)
                sum = 0;
        }

        return maximum;
    }
};

/*
1. make two variables sum and maximum
2. initialize sum=0, maximum=nums[0]
3. loop through nums
   I.  sum+=nums[i]
   II. update maximum maximum=max(maximum,sum);
   III.if sum is less then 0 then initialize it with 0
4. return maximum after completing loop
*/