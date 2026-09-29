#include <bits/stdc++.h>
using namespace std;

// Function to calculate the absolute difference
// between the two diagonal sums of the matrix
int diagonalDifference(vector<vector<int>> arr) {
    
    // Get the size of the square matrix
    int n = arr.size();

    int leftDiagonal = 0;
    int rightDiagonal = 0;

    // Calculate the sum of both diagonals
    for (int i = 0; i < n; i++) {
        
        // Add elements of the left/primary diagonal
        leftDiagonal += arr[i][i];

        // Add elements of the right/secondary diagonal
        rightDiagonal += arr[i][n - 1 - i];
    }

    // Return the absolute difference between the two sums
    return abs(leftDiagonal - rightDiagonal);
}
