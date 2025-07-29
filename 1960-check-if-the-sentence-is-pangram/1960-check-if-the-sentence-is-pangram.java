class Solution {
    public boolean checkIfPangram(String sentence) {
        char[] arr = sentence.toCharArray();
        int[] freq = new int[26];
        for(char each : arr)
        {
            freq[each - 'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(freq[i] == 0)
            {
                return false;
            }
        }
        return true;
    }
}