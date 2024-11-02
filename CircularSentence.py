class Solution:
    def isCircularSentence(self, sentence: str) -> bool:
        words = sentence.split(' ')
        prev_char = ''
        if len(words) == 1:
            return words[0][0] == words[0][-1]
        for i in words:
            if prev_char == i[0] or prev_char == '':
                prev_char = i[-1]
                continue
            return False
        return words[0][0] == words[-1][-1]

        
