	extern printf		;the C function, to be called

	        section .data	; variables
msg:		db "Hello, Holberton", 0 ; the C string needs a 0
fmt:		db "%s", 10, 0		 ;call printf formatter 10 \n

	        section .text	; actual code

	        global main	; start here
main:				; kinda like int main()
	push    rbp		; push to first register
	mov	rbp, rsp
	mov	edi, fmt	; move format register
	mov	esi, msg	; move msg
	call	printf		; call printf, believe it or not

	mov	eax,0		; move 0 to register

	pop	rbp		; pop off stack

	mov	rax,0		; return value is 0 bc execution is successful
	ret			; return
