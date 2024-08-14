class Solution {
public:

int lengthOfLongestSubstring(string s) {


   set <char> letterSet; // create set to keep track of what elements there are

   int lptr = 0;

   int maxSize = 0;


   // rptr will be used to iterate, doesn't really matter where it starts

   for (int rptr = 0; rptr < s.size(); rptr++)
   {

    while (letterSet.count(s[rptr])) // while there is a match we need to change our pointers
    {
        letterSet.erase(s[lptr]); // keep erasing from the left side until we get to new character!
        lptr++;
    }

    letterSet.insert(s[rptr]); // insert new letter!
    maxSize = max(maxSize, rptr - lptr + 1);

   }

return maxSize;

}

};
