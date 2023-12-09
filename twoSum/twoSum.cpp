#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Get length of nums
        size_t len = nums.size();
        // Prepare a vector for storing the solution
        std::vector<int> ret(2);
        // Prepare a counter
        size_t cnt = 0;

        for(size_t i = cnt+1; i < len; i++){
            if ((nums[cnt] + nums[i]) == target){
                ret[0] = cnt;
                ret[1] = i;
                break;
            }
        }
        return ret;
    }
};

int main()
{
    // std::vector containing the input numbers
    std::vector<int> input = {3,2,4};
    // std::vector for containing the output
    std::vector<int> output;
    // variable containing target number
    int target = 6;

    // Create instance of the class Solution
    Solution inst;

    // Return indices of the two numbers such that they add up to the target
    output = inst.twoSum(input, target);

    // Print result
    std::cout<<"target = "<<target<<std::endl;
    std::cout<<"Output"<<std::endl;
    for (size_t i = 0; i < output.size(); i++){
        std::cout<<output[i]<<std::endl;
    }


    return 0;
}