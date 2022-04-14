package main

type TreeNode struct{
	val int
	right *TreeNode
	left *TreeNode
}

func countNodes(root *TreeNode) int {
	if root == nil{
		return	0
	}
	res := 1
	if root.left != nil{
		res += countNodes(root.right)
	}
	if root.right != nil {
		res += countNodes(root.right)
	}
	return res 
}