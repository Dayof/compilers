.table
	int x
.code
main:
	mov $1, x
	mov $0, 1
	mov x, $0
	mov $2, x
	println x
	mov $3, 1
	mov $4, 1
	add $5, $3, $4
	println $5
