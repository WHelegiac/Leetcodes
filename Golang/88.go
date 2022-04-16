package main

// import (
// 	"fmt"
// 	"sort"
// )

// func merge(nums1 []int, m int, nums2 []int, _ int) {
// 	copy(nums1[m:], nums2)
// 	sort.Ints(nums1)
// }

// func merge2(nums1 []int, m int, nums2 []int, n int) {

// 	sortedNums := make([]int, 0, m+n)
// 	i, j, k := 0, 0, 0
// 	for i < len(nums1) && j < len(nums2) {
// 		if nums1[i] >= nums1[j] {
// 			sortedNums[k] = nums1[j]
// 			j++
// 		} else {
// 			sortedNums[k] = nums2[j]
// 			i++
// 		}
// 		k++
// 	}
// 	fmt.Print(sortedNums)
// 	for index, value := range sortedNums {
// 		if index < len(nums1) {
// 			nums1[index] = value
// 		} else {
// 			nums1 = append(nums1, value)
// 		}
// 	}
// }

// func main() {
// 	nums1 := []int{1, 2, 3}
// 	m := len(nums1)
// 	nums2 := []int{2, 5, 6}
// 	n := len(nums2)

// 	merge2(nums1, m, nums2, n)

// 	fmt.Print(nums1)
// }

func merge(nums1 []int, m int, nums2 []int, n int) {
	if m == 0 {
		copy(nums1, nums2)
		return
	}

	i := m - 1
	j := n - 1
	k := m + n - 1

	for ; i >= 0 && j >= 0; k-- {
		if nums1[i] > nums2[j] {
			nums1[k] = nums1[i]
			i--
		} else {
			nums2[k] = nums2[j]
			j--
		}
	}
	for ; j >= 0; k-- {
		nums1[k] = nums2[j]
		j--
	}
}
