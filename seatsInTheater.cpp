int seatsInTheater(int nCols, int nRows, int col, int row) {

    int first = 1 + nCols - col;
    int second = nRows - row;
    return first * second;
}
