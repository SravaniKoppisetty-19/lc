class Solution {
    public String firstPalindrome(String[] words) {
        for(String element : words)
        {
            int n = element.length();
            String s = "";
            for(int i=n-1;i>=0;i--)
            {
                s+=element.charAt(i);
            }
            if(element.equals(s))
            {
                return element;
            }
        }
        return "";
    }
}