from typing import List
import sys

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        i = m - 1
        j = n - 1
        k = m + n -1

        while j >= 0:
            print("nums1 : nums2 = "+ str(nums1) + " : " + str(nums2))
            if i >= 0 and (nums1[i] > nums2[j]):
                print("Input " + str(nums1[k]) + " into " +str(nums1[i]))
                nums1[k] = nums1[i]
                i -= 1
            else:
                print("Input " + str(nums1[k]) + " into " +str(nums2[j]))
                nums1[k] = nums2[j]
                j -= 1
            k -= 1
            


def main():
    nums1 = [1,2,3,0,0,0]
    m     = 3
    nums2 = [2,5,6]
    n     = 3

    msa = Solution()
    msa.merge(nums1, m, nums2, n)

if __name__ == "__main__":
    main()
 
