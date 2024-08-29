class Solution(object):    
    def balancedStringSplit(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        # this can be solved in one pass

        # feasible solution means that L == R for each substr
 
        
        balanceCheck = 0
        output = 0

        # can use an integer to keep track of whether string is balanced or not, add 1 if there is an L -1 if there is an R

        for char in s:
            
            # check character, and increment if it fits the situation
            
            if char == "L":
                balanceCheck += 1
            else:
                balanceCheck -= 1

            if not balanceCheck:
                output += 1
            
        return(output)