class Solution {
    public int prefixCount(String[] words, String pref) {
        int count =0;
        for(String each:words)
        {
            if(each.startsWith(pref))
            count++;
        }
        return count;
    }
}