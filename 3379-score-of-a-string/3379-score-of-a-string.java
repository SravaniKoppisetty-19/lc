class Solution {
    public int scoreOfString(String s) {
        int len = s.length();
        int sum =0;
        for(int i = 0;i<len-1;i++)
        {
             sum += Math.abs(s.charAt(i) - s.charAt(i+1));
        }
        return sum;
    }
}