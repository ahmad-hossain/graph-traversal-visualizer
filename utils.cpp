//
// Created by Ahmad Hossain on 4/16/24.
//

#include "utils.h"
#include <thread>

using namespace std;
using namespace this_thread;
using namespace chrono;

const auto REFRESH_WAIT_TIME = chrono::milliseconds(200);

void refreshUi(vector<vector<char>> &matrix) {
    sleep_for(REFRESH_WAIT_TIME);
    clearScreen();
    printMatrix(matrix);
}

void clearScreen() {
    system("clear");
}

void printMatrix(vector<vector<char>> &matrix) {
    for (const auto &row: matrix) {
        for (const auto &cell: row) {
            cout << cell << ' ';
        }
        cout << '\n';
    }
}
