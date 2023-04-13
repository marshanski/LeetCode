class Solution(object):
    def removeDuplicateLetters(self, s):
        """
        :type s: str
        :rtype: str
        """
        chaning_map ={}
        letters     = []
        for char in s:
            letters.append(char)
        index    = 0
        print(letters)
        for ch in letters:
            if ch in chaning_map:
                print ("raz")
                chaning_map[ch].append(index)
            else:
                chaning_map[ch] = [index]
            index+=1
        print(chaning_map)
        