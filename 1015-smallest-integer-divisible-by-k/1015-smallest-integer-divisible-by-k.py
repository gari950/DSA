class Solution:
    def smallestRepunitDivByK(self, k: int) -> int:
        n=0
        for i in range(1,k+1):
            n=n*10+1
            if n%k==0:
                return(i)
        return (-1)