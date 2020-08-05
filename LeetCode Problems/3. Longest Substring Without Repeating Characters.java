class Solution {
    public int lengthOfLongestSubstring(String s) {
        int left = 0;
        int right = 0;
        HashSet h = new HashSet();
        int maxSubstringLength = 0;
        
        while(right < s.length()){
            if(!h.contains(s.charAt(right))){
                h.add(s.charAt(right));
                maxSubstringLength = Math.max(maxSubstringLength, h.size());
                right++;
            }
            else{
                h.remove(s.charAt(left));
                left++;
            }
        }
        return maxSubstringLength;
    }
}
