	extern	printf

	section	.data
holberton:
	db	"Hello, Holberton", 0
fmt:
	db "%s", 10, 0

	section	.text

	global	main
main:
	push	rbp
	mov	rdi,fmt
	mov	rsi,holberton
	mov	rax,0
	call	printf
	pop	rbp
	mov	rax,0
	ret
