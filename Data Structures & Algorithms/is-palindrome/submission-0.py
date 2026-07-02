class Solution:
    def isPalindrome(self, s: str) -> bool:
        a=""
        for i in s:
            if i.isalnum():
                a=a+i
        a=a.lower()
        print(a)
        k=a[::-1]
        if a==k: return True
        else: return False