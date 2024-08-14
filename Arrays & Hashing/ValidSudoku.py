class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:

        # check each row, check each column, if its . we just continue, but if we notice any duplicates in the hashset then we return false
        # otherwise we iterate though the entire sudoku grid and if its fine then we return true
        rows = collections.defaultdict(set)
        cols = collections.defaultdict(set)

        grids = collections.defaultdict(set)

        for row in range(9):
            for col in range(9):
                # check if theres nothing there, because thats fine:
                if board[row][col] == ".":
                    continue

                # is item in list, we check for this first because then we can trigger false earlier n waste less computing power
                if (board[row][col] in rows[row] or board[row][col] in cols[col] or board[row][col]in grids[(row//3,col//3)]):
                    return False
            
            # is item not in list, then we just keep going

                else:
                    # at index of row/col add that board element
                    cols[col].add(board[row][col])
                    rows[row].add(board[row][col])
                    grids[row//3,col//3].add(board[row][col])
            
        return True





        