class Solution:
    def setZeroes(self, matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        FRZ = False
        FCZ = False
        r = len(matrix)
        c = len(matrix[0])
        for i in range(r):
            for j in range(c):
                if matrix[i][j] == 0:
                    if i == 0:
                        FRZ = 1
                    if j == 0:
                        FCZ = 1
                    matrix[i][0] = 0
                    matrix[0][j] = 0
        for i in range(1, r):
            if matrix[i][0] == 0:
                for j in range(1, c):
                    matrix[i][j] = 0
        for j in range(1, c):
            if matrix[0][j] == 0:
                for i in range(1, r):
                    matrix[i][j] = 0
        if FRZ:
            for j in range(c):
                matrix[0][j] = 0
        if FCZ:
            for i in range(r):
                matrix[i][0] = 0
        return None
