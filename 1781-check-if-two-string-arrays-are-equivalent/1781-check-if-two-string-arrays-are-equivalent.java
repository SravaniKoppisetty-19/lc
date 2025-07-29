class Solution {
    public boolean arrayStringsAreEqual(String[] word1, String[] word2) {
       String s1 = "";
       String s2 = "";
       for(String each : word1)
       s1+=each;
       for(String each : word2)
       {
         s2+=each;
       }
        if(s1.equals(s2))
        {
            return true;
        }
        return false;
    }
}