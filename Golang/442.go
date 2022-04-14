package main

func findDuplicates(nums []int) []int {

	n := len(nums)

	res := []int{}

	for _,num := range nums {
		nums[(num-1)%n] += n
	}

	for i,num := range nums {
		if 2*n < num && 3*n +1 > num {
			res = append(res, i +1)
		}	
	}
	return res
}