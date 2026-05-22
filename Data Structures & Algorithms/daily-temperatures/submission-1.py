class Solution:
    def dailyTemperatures(self, temperatures: List[int]) -> List[int]:
        
        warmer_index_stack = []

        output = [0] * len(temperatures)

        for i in range(len(temperatures)):
            while warmer_index_stack and temperatures[i] > temperatures[warmer_index_stack[-1]]:
                recorded_index = warmer_index_stack.pop()
                output[recorded_index] = i - recorded_index
            warmer_index_stack.append(i)

        return output
