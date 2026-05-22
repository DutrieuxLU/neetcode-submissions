class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        check = {}
        for num in nums:
            if (check[num] == True):
                return true
            else:
                check[num] = True
        return false