from typing import List

def twoSum(nums: List[int], target: int) -> List[int]:
    # defined the hashmap
    hash_map = {}
    # set up the hashmap to be k:v pair where number == key, index == value
    for number in range(len(nums)):
        hash_map[nums[number]] = number
    # iterate again through the list
    for number in range(len(nums)):
        # calculate the number youre looking for
        difference = target - nums[number]
        # if difference in the hash map and difference doesnt equal current number
        if difference in hash_map and hash_map[difference] != number:
            return [number, hash_map[difference]]
        
# Test Cases
print(twoSum(nums=[2,7,11,15], target=9))