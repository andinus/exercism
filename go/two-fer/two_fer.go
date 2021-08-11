// twofer implements ShareWith.
package twofer

import "fmt"

// ShareWith returns "One for `name', one for me.". Default name is
// "you".
func ShareWith(name string) string {
	if len(name) == 0 {
		name = "you"
	}
	return fmt.Sprintf("One for %s, one for me.", name)
}
