// AStartAlgorithm.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

#define ROW 9
#define COL 10

struct cell {
    int x, y;
    int parent_x, parent_y;
    double f, g, h;
};

// A utility Function to check whether given cell(row, col)
// is a valid cell or not 
bool isValid(int row, int col) {
    // Return true if row and column are in range
    return ((row >= 0) && (row < ROW)) && ((col >= 0) && (col < COL));
}

// A utility function to check whether the given cell is
// block or not
bool isUnBlocked(int grid[][COL], int row, int col) {
    if (grid[row][col] == 1)
        return true;
    else
        return false;
}

// A utility Function to check whether destination cell has
// been reached or not

int main()
{
    
}
