class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        nums.sort()
        sol = []
        for i in range(0, len(nums) - 1):
            for j in range(i + 1, len(nums)):
                if -1*(nums[i]+nums[j]) in nums[j:]:
                    t = [nums[i], nums[j], -1*(nums[i]+nums[j])]
                    if t in sol:
                        continue
                    sol.append(t)
        return sol

        