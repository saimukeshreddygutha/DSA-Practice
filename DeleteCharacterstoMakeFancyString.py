class Solution:
    def makeFancyString(self, s: str) -> str:
        ans = ''
        prev_char = ''
        prev_char_count = 0
        for i in s:
            prev_char_count =  prev_char_count + 1 if prev_char == i else 1
            if prev_char_count < 3:
                ans += i
            prev_char = i
        
        return ans
