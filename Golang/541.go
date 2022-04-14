package main

func reverseStr(s string, k int) string {
	str := []byte(s)
	for i := 0; i < len(s)-1; i += 2 * k {
		if i+k <= len(s) {
			reverse(str[i : i+k])
		} else {
			reverse(str[i:])
		}
	}
	return string(str)
}

func reverse(str []byte) {
	l, r := 0, len(str)-1

	for l < r {
		str[l], str[r] = str[r], str[l]
		l++
		r--
	}
}
