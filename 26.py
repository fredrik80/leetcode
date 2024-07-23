# 26. Remove Duplicates from Sorted Array
# Easy

class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        if not nums:
            return 0  # Return 0 if nums is empty
        
        # Initialize the index for the next unique element to be placed at.
        insert_pos = 1
        
        # Start iterating from the second element since the first element is always unique.
        for i in range(1, len(nums)):
            # If the current element is not equal to its previous one, it's unique.
            if nums[i] != nums[i-1]:
                # Place it at the insert position.
                nums[insert_pos] = nums[i]
                # Move the insert position forward.
                insert_pos += 1
        
        # The insert position will now be equal to the number of unique elements in nums.
        return insert_pos


        
