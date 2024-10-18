
class Solution:
    def maximumSwap(self, num: int) -> int:
        originalDigitList = [int(i) for i in str(num)]
        sortedDigitList = sorted(originalDigitList, reverse=True)
        numDigits = len(originalDigitList)
        swapInd1, swapInd2 = -1, -1
        for i in range(numDigits):
            if sortedDigitList[i] > originalDigitList[i]:
                swapInd1 = i
                break
        if swapInd1 == -1:
            return num
        for i in range(numDigits - 1, -1, -1):
            if originalDigitList[i] == sortedDigitList[swapInd1]:
                swapInd2 = i
                break
        originalDigitList[swapInd1], originalDigitList[swapInd2] = originalDigitList[swapInd2], originalDigitList[swapInd1]
        return int(''.join(map(str, originalDigitList)))

        
