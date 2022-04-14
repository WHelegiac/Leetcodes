package main

func fourSumCount(nums1 []int, nums2 []int, nums3 []int, nums4 []int) int {

	myMap := map[int]int{}
	for _, value1 := range nums1 {
		for _, value2 := range nums2 {
			myMap[value2+value1]++
		}
	}

	ans := 0
	for _, value3 := range nums3 {
		for _, value4 := range nums4 {
			ans += myMap[-(value4 + value3)]
		}
	}
	return ans
}
