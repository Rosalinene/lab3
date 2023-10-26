// Csc211.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

hello world bytre type db
hello db "Hello World", O Ah
data
heelo db "Hello World" 0Ah, 0
prompt db "Enter an Integer", 0Ah, 0
formIn db "%d"
num dd0
num1 dd 6

.code
main PROC c
push offset hello
call printf

invoke ExitProcess, 0
main endp
end