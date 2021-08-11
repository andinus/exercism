// hamming implements Distance.
package hamming

import "errors"

// Distance returns the distance between 2 equal DNA strands.
func Distance(strand1, strand2 string) (int, error) {
	var dist int
	if len(strand1) != len(strand2) {
		return dist, errors.New("length not equal")
	}
	for idx := 0; idx < len(strand1); idx++ {
		if strand1[idx] != strand2[idx] {
			dist++
		}
	}
	return dist, nil
}
