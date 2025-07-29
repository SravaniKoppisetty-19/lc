class Solution {
    public String reverseWords(String s) {
        String[] arr = s.split(" ");
        String s1 ="";
        for(int i =0;i< arr.length;i++)
        {
            char[] a = arr[i].toCharArray();
            int l= a.length;
            for(int j=l-1;j>=0;j--)
            {
                s1+=a[j];
            }
            s1+=" ";
        }
        char[] arr2 = s1.toCharArray();
        String s2 = "";
        for(int i =0;i<arr2.length-1;i++)
        {
            s2+=arr2[i];
        }
        return s2;
    }
}