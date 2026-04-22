class Solution:
    def isPalindrome(self, s: str) -> bool:
        processed = [each.lower() for each in s if each.isalnum()]
        return processed == processed[::-1]
