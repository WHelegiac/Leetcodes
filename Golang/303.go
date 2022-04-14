package main

type NumArray struct {
	sums []int
}

func Constructor(nums []int) NumArray {

	sums := make([]int, len(nums)+1)
	for index, value := range nums {
		sums[index+1] = sums[index] + value
	}
	return NumArray{sums: sums}
}

func (this *NumArray) SumRange(i, j int) int {
	return this.sums[j+1] - this.sums[i]
}
