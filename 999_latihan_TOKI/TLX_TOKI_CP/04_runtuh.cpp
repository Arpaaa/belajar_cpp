#include <iostream>
using namespace std;

int R, C;
char grid[25][10];

int findLastRow() {
    int lastRow = 0;
    for (int i=1; i<=R; i++) {
        bool isFull = true;
        for (int j=1; j<=C; j++) {
            if (grid[i][j] != '1') {
                isFull = false;
                break;
            }
        }
        if (isFull) {
            for (int j=1; j<=C; j++) {
                grid[i][j] = '0';
            }
            lastRow = i;
        }
    }
    return lastRow;
}

int countBlockAfter(int row, int col) {
    int counter = 0;
    for (int i = 1; i <= row; i++) {
        if (grid[i][col] == '1') {
            counter++;
            grid[i][col] = '0';
        };
    }
    return counter;
}

void collapse(int blocks, int col, int aboveRow) {
    for (int i = aboveRow - blocks; i < aboveRow; i++) {
        grid[i+1][col] = '1';
    }
}

int findLastRowToFall(int lastRow, int col) {
    int lastRowToFall = R;
    for (int i = lastRow; i < R; i++) {
        if (grid[i+1][col] == '1') {
            lastRowToFall = i;
            break;
        }
    }
    return lastRowToFall;
}

int main() {
    cin >> R >> C;
    for (int i=1; i<=R; i++) {
        for (int j=1; j<=C; j++) cin >> grid[i][j];
    }

    int lastRow = findLastRow();
    while (lastRow) {
        for (int j=1; j<=C; j++) {
            int countBlock = countBlockAfter(lastRow, j);
            int lastRowToFall = findLastRowToFall(lastRow, j);
            collapse(countBlock, j, lastRowToFall);
        }
        lastRow = findLastRow();
    }
    for (int i=1; i<=R; i++) {
        for (int j=1; j<=C; j++) cout <<\ grid[i][j];
        cout << '\n';
    }
}