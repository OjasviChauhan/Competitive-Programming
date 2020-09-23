class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        if len(s)==0:
            return 0
        s=s.strip()
        s="".join(reversed(s))
        count=0
        for i in range(0,len(s)):
            if s[i]==' ':
                break
            else:
                count+=1
        return count
