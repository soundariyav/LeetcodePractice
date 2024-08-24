import numpy as np;
class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        accounts = np.array(accounts)
        a = np.array(accounts.sum(axis =1))
        print (a)
        return np.max(a)
