.table
	float y
	float p
    float a
.code
main:
	mov $0, 100.000000
	mov y, $0
	print y

	mov $1, 200.000000
	mov $2, y
	add $3, $1, $0
	mov p, $3
	println p

	mov $4, 1.000000
	mov a, $4
    mov $5, p
    mov $6, y
    add $7, $6, $5
    mov $8, a 
    add $9, $8, $7
	println $9
