#include <iostream>
#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Get length of nums
        size_t len = sizeof(nums)/sizeof(nums[0]);
        // Prepare a vector for storing the solution
        std::vector<int> ret(2);
        // Prepare a counter
        size_t cnt = 0;

        for(size_t i = cnt; i < len; i++){
            if ((nums[cnt] + nums[i]) == target){
                ret[0] = nums[cnt];
                ret[1] = nums[i];
                break;
            }
        }
        return ret;
    }
};

int main()
{
    // std::vector containing the input numbers
    std::vector<int> input = {0, 1, 2, 3, 4, 5};
    // std::vector for containing the output
    std::vector<int> output;
    // variable containing target number
    int target = 4;

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