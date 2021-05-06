.table
    int x
.code
main:
    mov $0, 1       // 1 
    mov x, $0       // x = 1
    println x       // writeln(x)
    mov $1, 1       // 1
    mov $2, 1       // 1
    add $3, $1, $2  // 1 + 1
    println $3      // writeln(1 + 1)
