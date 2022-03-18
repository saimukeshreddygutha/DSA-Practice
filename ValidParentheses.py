class Solution:
    def isValid(self, s: str) -> bool:
        l=[]
        for i in s:
            if i == '(' or i == '{' or i == '[':
                l.append(i)
            elif (i == ')' or i == '}' or i == ']') and (len(l) != 0):
                if (i == ')' and l[-1] == '(') or (i == '}' and l[-1] == '{') or (i == ']' and l[-1] == '['):
                    l.pop()
                else:
                    return False
            else:
                return False
        return len(l) == 0
                
        
