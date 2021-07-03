'''Gold Mine problem'''

class goldMine:
    def __init__(self,rows, cols, matrix):
        '''intialize'''
        self.rows = rows
        self.cols = cols
        self.matrix = matrix

    def solve(self):
        '''Solving Gold Mine problem'''

        matrix = self.matrix

        # for i in range(self.rows):
        #     matrix[i].append(0)

        for j in range(self.cols-2, -1, -1):

            for i in range(self.rows):

                if i>=1 and i<=self.rows-2:
                    matrix[i][j] += max(matrix[i-1][j+1], matrix[i+1][j+1], matrix[i][j+1])

                elif i==0:
                    matrix[i][j] += max(matrix[i+1][j+1], matrix[i][j+1])
                else:
                    matrix[i][j] += max(matrix[i-1][j+1], matrix[i][j+1])
        
        maximum = 0
        for j in range(self.rows):
            maximum = max(maximum, matrix[j][0])
            
        print(maximum)


row = int(input())
col = int(input())
input_list = []
for i in range(row):
    input_list.append([int(elem) for elem in input().split(" ")])

obj = goldMine(row, col, input_list)
obj.solve()
