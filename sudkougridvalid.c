#include <stdio.h>

int check_rows(int (*grid)[9]) {
    int used[10];
    for (int r = 0; r < 9; ++r) {
        for (int i = 1; i <= 9; ++i) used[i] = 0;
        for (int c = 0; c < 9; ++c) {
            int v = grid[r][c];
            if (v < 1 || v > 9) return 0; // invalid number
            if (used[v]) return 0;       // duplicate in row
            used[v] = 1;
        }
    }
    return 1;
}

int check_columns(int (*grid)[9]) {
    int used[10];
    for (int c = 0; c < 9; ++c) {
        for (int i = 1; i <= 9; ++i) used[i] = 0;
        for (int r = 0; r < 9; ++r) {
            int v = grid[r][c];
            if (v < 1 || v > 9) return 0; // invalid number
            if (used[v]) return 0;       // duplicate in column
            used[v] = 1;
        }
    }
    return 1;
}

int check_subgrids(int (*grid)[9]) {
    int used[10];
    // box start positions: (0,0),(0,3),(0,6),(3,0),...
    for (int boxR = 0; boxR < 3; ++boxR) {
        for (int boxC = 0; boxC < 3; ++boxC) {
            for (int i = 1; i <= 9; ++i) used[i] = 0;
            for (int r = boxR * 3; r < boxR * 3 + 3; ++r) {
                for (int c = boxC * 3; c < boxC * 3 + 3; ++c) {
                    int v = grid[r][c];
                    if (v < 1 || v > 9) return 0; // invalid number
                    if (used[v]) return 0;       // duplicate in box
                    used[v] = 1;
                }
            }
        }
    }
    return 1;
}

void print_grid(int (*grid)[9]) {
    for (int r = 0; r < 9; ++r) {
        if (r % 3 == 0 && r != 0) printf("---------------------\n");
        for (int c = 0; c < 9; ++c) {
            if (c % 3 == 0 && c != 0) printf("| ");
            printf("%d ", grid[r][c]);
        }
        printf("\n");
    }
}

int main() {
    // Example: a known valid completed Sudoku (you can replace this)
    int grid[9][9] = {
        {5,3,4,6,7,8,9,1,2},
        {6,7,2,1,9,5,3,4,8},
        {1,9,8,3,4,2,5,6,7},
        {8,5,9,7,6,1,4,2,3},
        {4,2,6,8,5,3,7,9,1},
        {7,1,3,9,2,4,8,5,6},
        {9,6,1,5,3,7,2,8,4},
        {2,8,7,4,1,9,6,3,5},
        {3,4,5,2,8,6,1,7,9}
    };

    printf("Given Sudoku grid:\n");
    print_grid(grid);
    printf("\n");

    int r = check_rows(grid);
    int c = check_columns(grid);
    int b = check_subgrids(grid);

    if (r && c && b) {
        printf("VALID SOLUTION\n");   // project required final verdict
    } else {
        printf("INVALID SOLUTION\n");
    }

    return 0;
}
