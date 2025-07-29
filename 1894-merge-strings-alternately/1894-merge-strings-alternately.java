class Solution {
    public String mergeAlternately(String word1, String word2) {
        String s1 = "";
        char[] arr1 = word1.toCharArray();
        char[] arr2 = word2.toCharArray();
        int l = word1.length();
        int l2 = word2.length();
        int l3 =0;
        if(l<l2) l3=l;
        else l3=l2;
        for(int i =0;i<l3;i++)
        {
            s1+=arr1[i];
            s1+=arr2[i];
        }
        for(int i =l3;i<l;i++)
        {
            s1+=arr1[i];
        }
        for(int i =l3;i<l2;i++)
        {
            s1+=arr2[i];
        }
        return s1;
    }
}