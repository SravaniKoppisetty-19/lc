class Solution {
    public int countMatches(List<List<String>> items, String ruleKey, String ruleValue) {
         int count =0;
        int k=0;
        if(ruleKey.equals("type"))
        {
            k = 0;
        }
        else if(ruleKey.equals("color"))
        {
            k = 1;
        }
        else{
            k =2;
        }
        for(int i=0;i<items.size();i++)
        {
            if(items.get(i).get(k).equals(ruleValue))
            {
                count++;
            }
        }
        return count;
    }
}