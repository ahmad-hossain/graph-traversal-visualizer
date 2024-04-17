//
// Created by Ahmad Hossain on 4/16/24.
//

#include "BfsStrategy.h"
#include <queue>
#include "utils.h"

void BfsStrategy::traverse(vector<vector<char>> &matrix, unsigned long r, unsigned long c, unsigned long width,
                           unsigned long height) {
    queue<pair<unsigned long, unsigned long>> q;
    q.push({r, c});

    while (!q.empty()) {
        auto [row, col] = q.front();
        q.pop();

        bool isOutOfBounds = row < 0 || row >= height || col < 0 || col >= width;
        if (isOutOfBounds) {
            continue;
        }

        bool isVisited = matrix[row][col] == 'X';
        if (isVisited) {
            continue;
        }

        matrix[row][col] = 'X';
        refreshUi(matrix);

        q.push({row + 1, col});
        q.push({row - 1, col});
        q.push({row, col + 1});
        q.push({row, col - 1});
    }
}
