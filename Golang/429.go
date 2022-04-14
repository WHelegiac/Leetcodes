package main

// import "container/list"

// type Node struct {
// 	Val      int
// 	Children []*Node
// }

// // func levelOrder(root *Node) [][]int {
// // 	if root == nil {
// // 		return nil
// // 	}

// // 	ans := [][]int{}
// // 	queue := list.New()
// // 	queue.PushBack(root)
// // 	for queue.Len() > 0 {
// // 		size := queue.Len()
// // 		tier := []int{}
// // 		for i := 0; i < size; i++ {
// // 			temp := queue.Remove(queue.Front()).(*Node)
// // 			tier = append(tier, temp.Val)
// // 			for j := 0; j < len(temp.Children); j++ {
// // 				if temp.Children[j] != nil {
// // 					queue.PushBack(temp.Children[j])
// // 				}
// // 			}
// // 			ans = append(ans, tier)
// // 		}
// // 	}
// // 	return ans
// // }
