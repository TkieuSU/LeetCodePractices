class Solution:
    def countBits(self, n: int) -> List[int]:
        # Create a result table with n + 1 elements 
        # Since for n = 2, we will have 0, 1, 2 elements
        result = [0] * (n + 1)
        offset = 1

        #Start filling out the DP table
        #For any position that is not the offset, it will be equal to the number
        #of 1s in the position [current - offset] and add 1
        for i in range (1, n+1):
            if offset*2 == i:
                offset = i
            result[i] = 1 + result[i - offset]

        return result
