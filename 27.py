# 27. Remove element
# Easy

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        if not nums:
            return 0

        insert_pos = 0

        for i in range(0,len(nums)):
            if nums[i] != val:
                nums[insert_pos] = nums[i]
                insert_pos += 1

        return insert_pos
