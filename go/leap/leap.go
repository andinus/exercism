// leap implements IsLeapYear.
package leap

// IsLeapYear returns if the year passed is a leap year.
func IsLeapYear(year int) bool {
	return year%4 == 0 && (year%100 != 0 || year%400 == 0)
}
