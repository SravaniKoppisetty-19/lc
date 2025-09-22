class Solution {
public:
    int maxFreqSum(string s) {
        int freq[26];
        int vowel =0;
        int conso =0;
        for(auto e : s)
        {
            freq[e-'a']++;
            if(e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u')
            {
                vowel = max(vowel,freq[e-'a']);
            }
            else{
                conso = max(conso,freq[e-'a']);
            }
        }
        return vowel+ conso;
    }
};