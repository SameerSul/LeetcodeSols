class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        stack = [] # this checks the validity of each combination, if it works then add it to valid pairs
        valid_pairs = []


        def backtrackingAlgorithm(leftBracket,rightBracket):
        
            #base case (occurs when we have left brack = right brack = n)
            if leftBracket == rightBracket == n:
                valid_pairs.append("".join(stack))
                return

          
            if leftBracket < n: # starting case
                stack.append("(")
                backtrackingAlgorithm(leftBracket + 1, rightBracket) # add one to left bracket
                stack.pop() # ensure to clear the stack after recursion chain is done

                
            if rightBracket < leftBracket:
                stack.append(")")
                backtrackingAlgorithm(leftBracket,rightBracket + 1) # add one to right bracket
                stack.pop()
        
                
        backtrackingAlgorithm(0, 0)
        return(valid_pairs)

                    
