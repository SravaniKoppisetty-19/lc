class Solution:
    def superPow(self, a: int, b: List[int]) -> int:
        sum =0;
        for i in range(len(b)):
            sum = sum *10 + b[i]
        return pow(a,sum,1337)
        