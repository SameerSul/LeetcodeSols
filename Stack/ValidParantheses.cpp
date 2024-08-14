class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        output = []
        product = 1
        zeroes = 0
        # calculate product

        for i in range(len(nums)):
            if nums[i] == 0:
                zeroes += 1
                continue
            else:
                product *= nums[i]
        
        # calculate individual products

        for j in range(len(nums)):
            # is the number nonzero and do we have zeroes
            if nums[j] != 0 and zeroes > 0:
                output.append(0)
            # is the number nonzero and we dont have zeroes
            elif nums[j] != 0 and zeroes <= 0:
                output.append(product//nums[j])
            # is the number zero and do we have zeroes
            elif nums[j] == 0 and zeroes > 1:
                output.append(0)
            # is the number zero and we don't have other zeroes
            else:
                output.append(product)
        

        
        
        
        
        return output
        
        