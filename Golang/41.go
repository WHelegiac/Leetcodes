package main

func firstMissingPositive(nums []int) int {

	size := len(nums)
	for i := 0; i < size; i++ {
		if nums[i] < 0 {
			nums[i] = size + 1
		}
	}

	for i := 0; i < size; i++ {
		if nums[i] <= size {
			nums[nums[i]-1] = -abs(nums[nums[i]-1])
		}
	}

	for i := 0; i < size; i++ {
		if nums[i] > 0 {
			return i + 1
		}
	}

	return size + 1
}

func abs(x int) int {
	if x < 0 {
		return -x
	}
	return x
}
