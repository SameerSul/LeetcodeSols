class Solution:

    def encode(self, strs: List[str]) -> str:
        megaStr = "" # as we are returning a string
        for string in strs: # encode them all into one string, with placemarkers
            megaStr += str(len(string)) + "#" + string
        print(megaStr)
        return megaStr


    def decode(self, s: str) -> List[str]:
        res = []
        i = 0
        
        while i < len(s):
            j = i
            while s[j] != '#':
                j += 1
            length = int(s[i:j])
            # now set pointers on the words
            i = j + 1 # go to next index after #
            j = i + length # go past the word, essentially take up the whole thing
            res.append(s[i:j]) # this is the duration of the entire word now
            i = j
            
        return res