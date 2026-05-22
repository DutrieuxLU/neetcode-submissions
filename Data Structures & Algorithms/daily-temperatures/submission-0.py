class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        # brute force
        res = []

        for i in range(len(temperatures) - 1):
            for j in range(i+1, len(temperatures)):
                if temperatures[i] >= temperatures[j] and j == len(temperatures)-1:
                    res.append(0)
                    break
                elif temperatures[i] >= temperatures[j]:
                    continue
                else:
                    res.append(j - i)
                    break
        res.append(0)
        return res
            
        