#include <stdlib.h>
#include <string.h>

bool DFS(char **board, int row, int col, char *word, int idx, int a, int b, bool **isVisit) {
    if (strlen(word) == idx) {
        return true;
    }

    isVisit[a][b] = true;
    if (a - 1 >= 0 && board[a - 1][b] == word[idx] && !isVisit[a - 1][b]) {
        if (DFS(board, row, col, word, idx + 1, a - 1, b, isVisit)) {
            return true;
        }
    }
    if (a + 1 < row && board[a + 1][b] == word[idx] && !isVisit[a + 1][b]) {
        if (DFS(board, row, col, word, idx + 1, a + 1, b, isVisit)) {
            return true;
        }
    }
    if (b - 1 >= 0 && board[a][b - 1] == word[idx] && !isVisit[a][b - 1]) {
        if (DFS(board, row, col, word, idx + 1, a, b - 1, isVisit)) {
            return true;
        }
    }
    if (b + 1 < col && board[a][b + 1] == word[idx] && !isVisit[a][b + 1]) {
        if (DFS(board, row, col, word, idx + 1, a, b + 1, isVisit)) {
            return true;
        }
    }

    isVisit[a][b] = false;
    return false;
}

bool exist(char **board, int boardSize, int *boardColSize, char *word) {
    bool **isVisit = (bool **) malloc(boardSize * sizeof(bool *));
    for (int i = 0; i < boardSize; ++i) {
        isVisit[i] = (bool *)malloc(*boardColSize * sizeof(bool));
        memset(isVisit[i], false, *boardColSize * sizeof(bool));
    }

    for (int i = 0; i < boardSize; ++i) {
        for (int j = 0; j < *boardColSize; ++j) {
            if (board[i][j] == word[0]) {
                if (DFS(board, boardSize, *boardColSize, word, 1, i, j, isVisit)) {
                    return true;
                }
            }
        }
    }

    return false;
}