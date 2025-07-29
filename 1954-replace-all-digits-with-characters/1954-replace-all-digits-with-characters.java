class Solution {
    public String replaceDigits(String s) {
        char[] arr= s.toCharArray();
        for(int i =0;i<s.length()-1;i+=2)
        {
            arr[i+1] = (char)(arr[i] + (arr[i+1] - '0'));
        }
        String s1 = new String(arr);
        return s1;
    }
}