class Solution(object):
    def sortedSquares(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        
        squares = []
        
        for num in nums:
            value = num ** 2
            squares.append(value)
        
        squares.sort()
        return squares

class Solution(object):
    def rotate(self, nums, k):
        """
        :type nums: List[int]
        :type k: int
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        length = len(nums) 
        nums.extend(nums[0:(length- k % length)])
        del nums[0:(length - k % length)]

        
