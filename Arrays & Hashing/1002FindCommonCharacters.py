class Solution(object):
    def commonChars(self, words):
        """
        :type words: List[str]
        :rtype: List[str]
        """

        # so to accomplish this we can get a dict of all the letters in the first element, and then iterate through the rest and compare them
        
        commonCharacters = Counter(words[0])
        res = []
        
        for i in range(1, len(words)): # from second element onwards
            # get the characters for each word
            currentChars = Counter(words[i])
            for count in commonCharacters.keys(): # we iterate over this because this is what we are trying to change
                commonCharacters[count] = min(currentChars[count],commonCharacters[count])
    
        for key, value in commonCharacters.items():
            if value > 0:
                res.extend(key * value)
        return res
            
            