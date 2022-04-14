package main

type NumMatrix struct {
	sums [][]int
}

func Constructor(matrix [][]int) NumMatrix {

	rows := len(matrix)

	if rows == 0 {
		return NumMatrix{}
	}

	cols := len(matrix[0])
	sums := make([][]int, rows+1)
	sums[0] = make([]int, cols+1)

	for i, row := range matrix {
		sums[i+1] = make([]int, cols+1)
		for j, value := range row {
			sums[i+1][j+1] = sums[i+1][j] + sums[i][j+1] - sums[i][j] + value
		}
	}

	return NumMatrix{sums: sums}
}

func (nm *NumMatrix) SumRegion(row1, col1, row2, col2 int) int {
	return nm.sums[row2+1][col2+1] - nm.sums[row1][col2+1] - nm.sums[row2+1][col1] + nm.sums[row1][col1]
}
