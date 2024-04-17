#include <iostream>
#include "utils.h"
#include "GraphTraversalStrategy.h"
#include "DfsStrategy.h"
#include "BfsStrategy.h"

using namespace std;

int main() {
    unsigned long width, height;
    string algorithm;

    cout << "Enter the width of the grid: ";
    cin >> width;
    cout << "Enter the height of the grid: ";
    cin >> height;
    cout << "Would you like to use the 'dfs' algorithm or the 'bfs' algorithm? ";
    cin >> algorithm;

    cout << "Width=" << width << ", Height=" << height << ", Algorithm=" << algorithm << '\n';

    vector<vector<char>> matrix(height, vector<char>(width, '_'));

    clearScreen();
    printMatrix(matrix);

    GraphTraversalStrategy *strategy;
    if (algorithm == "dfs") {
        strategy = new DfsStrategy();
    } else if (algorithm == "bfs") {
        strategy = new BfsStrategy();
    } else {
        cout << "Invalid algorithm\n";
        return 1;
    }

    strategy->traverse(matrix, 0, 0, width, height);

    return 0;
}