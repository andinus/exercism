// Package raindrops implements Convert.
package raindrops

import "strconv"

type raindrop struct {
	div int
	res string
}

// Convert returns a string given an integer.
//
// - adds "Pling" to the result if the number is divisible by 3.
//
// - adds "Plang" to the result if the number is divisible by 5.
//
// - adds "Plong" to the result if the number is divisible by 7.
//
// - if it's not divisible by 3, 5 or 7 then the digits of given
// integer is returned.
func Convert(num int) string {
	var res string
	var drops = [3]raindrop{
		{3, "Pling"},
		{5, "Plang"},
		{7, "Plong"},
	}

	for _, drop := range drops {
		if num%drop.div == 0 {
			res += drop.res
		}
	}
	if len(res) == 0 {
		res = strconv.Itoa(num)
	}

	return res
}
