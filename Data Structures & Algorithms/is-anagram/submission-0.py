class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        my_dict = {}

        for c in s:
            if c in my_dict:
                my_dict[c] += 1
            else:
                
                my_dict[c] = 1
        for c in t:
            if c in my_dict:
                if my_dict[c] > 0:
                    continue
                else:
                    return False
            else:
                return False
        return True

        