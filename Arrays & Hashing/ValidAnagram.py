class Solution(object):
    def isAnagram(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """


        if len(s) == len(t):
            countS, countT = {},{}
            for i in range(len(s)):
                countS[s[i]] = 1 + countS.get(s[i], 0) #
                # counts how many of that char are in hash map, 
                # if none, return 0 instead of an error, otherwise gets count
                countT[t[i]] = 1 + countT.get(t[i], 0)
            
            #compare S and t

            for c in countT:
                if countT[c] != countS.get(c, 0):
                    return False
            return True

        else:
            return False

