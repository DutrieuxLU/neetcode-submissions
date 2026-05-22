class Solution:
    def search(self, nums: List[int], target: int) -> int:
        l = 0
        h = len(nums)
        m = int((h-l)/2)

        while h >= l:
            m = int((h-l)/2)
            if nums[m] == target:
                return m
            elif nums[m] > target:
                l = m - 1
            else:
                h = m + 1
        return -1
                       