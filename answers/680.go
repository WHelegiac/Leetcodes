/*
 * @Author: WanHao
 * @Date: 2022-03-01 16:53:56
 * @LastEditors: Do not edit
 * @LastEditTime: 2022-03-01 17:02:57
 * @FilePath: \my_leetcodes_question_answers\answers\680.go
 * @FileDescription: Lazy~~~
 */
package main

func validPalindrome(s string) bool {
	low, high := 0, len(s)-1

	for low < high {
		if s[low] == s[high] {
			low++
			high--
		} else {
			flag1, flag2 := true, true
			for i, j := low, high-1; i < j; i, j = i+1, j-1 {
				if s[i] != s[j] {
					flag1 = false
					break
				}
			}

			for i, j := low+1, high; i < j; i, j = i+1, j-1 {
				if s[i] != s[j] {
					flag2 = false
					break
				}
			}

			return flag1 || flag2
		}

	}

	return true
}
