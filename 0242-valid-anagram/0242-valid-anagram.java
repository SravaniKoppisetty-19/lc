class Solution {
    public boolean isAnagram(String s, String t) {
        int[] freq = new int[26];
        int[] nfreq = new int[26];
        for(int i =0;i<26;i++)
        {
            freq[i] = 0;
            nfreq[i] = 0;
        }
        for(int i =0;i<s.length();i++)
        {
            freq[s.charAt(i)-'a']++;
        }
        for(int i =0;i<t.length();i++)
        {
            nfreq[t.charAt(i) - 'a']++;
        }
        for(int i =0;i<26;i++)
        {
            if(freq[i] != nfreq[i])
            {
                return false;
            }
        }
        return true;
    }
}