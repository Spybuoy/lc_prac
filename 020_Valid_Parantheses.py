class Solution:
    def isValid(self, s: str) -> bool:
        umap = {")": "(", "}": "{", "]": "["}
        stk = []
        for each in s:
            if each not in umap:
                stk.append(each)
            else:
                if not stk:  # Stk empty
                    return False
                if stk[-1] != umap[each]:  # stk last elem diff from close paranthesis
                    return False
                else:
                    stk.pop()  # remove last added if correctly closed

        return len(stk) == 0
