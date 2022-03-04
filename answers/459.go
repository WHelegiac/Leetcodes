/*
 * @Author: WanHao
 * @Date: 2022-02-18 01:38:14
 * @LastEditors: Do not edit
 * @LastEditTime: 2022-02-18 01:46:54
 * @FilePath: \my_leetcodes_question_answers\answers\459.go
 * @FileDescription: Lazy~~~
 */
// /*
//  * @Author: WanHao
//  * @Date: 2022-02-18 01:38:14
//  * @LastEditors: Do not edit
//  * @LastEditTime: 2022-02-18 01:43:36
//  * @FilePath: \my_leetcodes_question_answers\answers\459.go
//  * @FileDescription: Lazy~~~
//  */

// package main

// func findPoisonedDuration(timeSeries []int, duration int) int {

// 	ret := 0
// 	len := len(timeSeries) - 1

// 	for i := 0; i < len; i++ {
// 		ret += min(timeSeries[i] - timeSeries[i+1], duration)
// 	}

// 	return ret + duration

// }

// func min(x, y int) int {
// 	if x <= y {
// 		return x
// 	}
// 	return y
// }

// func findPoisonedDuration(timeSeries []int, duration int) (ans int) {
//     expired := 0
//     for _, t := range timeSeries {
//         if t >= expired {
//             ans += duration
//         } else {
//             ans += t + duration - expired
//         }
//         expired = t + duration
//     }
//     return
// }
