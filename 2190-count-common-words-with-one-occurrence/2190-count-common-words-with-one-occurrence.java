class Solution {
    public int countWords(String[] words1, String[] words2) {
        HashMap<String,Integer>map1 = new HashMap<>();
        HashMap<String,Integer>map2 = new HashMap<>();
        for(String key : words1){
           map1.put(key,map1.getOrDefault(key,0)+1);
        }
        for(String key : words2){
           map2.put(key,map2.getOrDefault(key,0)+1);
        }
        int count =0;
        for(String key : map1.keySet()){
           if(map1.get(key) == 1 && map2.containsKey(key) && map2.get(key) == 1){
               count++;
           }
        }
        return count;
    }
}