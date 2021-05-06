.table
	float y
	float p
	float a
.code
main:
	mov $1, y
	mov $0, 100.000000
	mov y, $0
	mov $2, y
	print y
	mov $6, p
	mov $3, y
	mov $4, 200.000000
	add $5, $3, $4
	mov p, $5
	mov $7, p
	println p
	mov $9, a
	mov $8, 1.000000
	mov a, $8
	mov $10, a
	mov $11, y
	add $12, $10, $11
	mov $13, p
	add $14, $12, $13
	println $14
