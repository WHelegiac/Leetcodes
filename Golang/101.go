package main


type TreeNode struct {
	val   int
	Left  *TreeNode
	Right *TreeNode
}

func isSymmetric(root *TreeNode) bool {
	u, v := root, root
	queue := []*TreeNode{}
	queue = append(queue, u)
	queue = append(queue, v)

	for len(queue) > 0 {
		u, v := queue[0], queue[1]
		queue = queue[2:]
		if u == nil && v == nil {
			continue
		}
		if u == nil || v == nil {
			return false
		}

		if u.val != v.val {
			return false
		}

		queue = append(queue, u.Left)
		queue = append(queue, v.Right)

		queue = append(queue, u.Right)
		queue = append(queue, v.Left)
	}

	return true
}
