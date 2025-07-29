class Solution {
    public boolean isAcronym(List<String> words, String s) {
        String s1 = "";
        for(String each : words)
        {
            s1+=each.charAt(0);
        }
        if(s1.equals(s))
        return true;
        return false;
    }
}