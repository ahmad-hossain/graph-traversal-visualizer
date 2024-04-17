//
// Created by Ahmad Hossain on 4/16/24.
//

#include "DfsStrategy.h"
#include "utils.h"

void DfsStrategy::traverse(vector<vector<char>> &matrix, unsigned long r, unsigned long c, unsigned long width, unsigned long height) {
    bool isOutOfBounds = r < 0 || r >= height || c < 0 || c >= width;
    if (isOutOfBounds) {
        return;
    }

    bool isVisited = matrix[r][c] == 'X';
    if (isVisited) {
        return;
    }

    matrix[r][c] = 'X';

    refreshUi(matrix);

    traverse(matrix, r + 1, c, width, height);
    traverse(matrix, r - 1, c, width, height);
    traverse(matrix, r, c + 1, width, height);
    traverse(matrix, r, c - 1, width, height);
}
