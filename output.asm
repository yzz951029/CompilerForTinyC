	.586
	.model flat, stdcall
	option casemap :none

	include \masm32\include\windows.inc
	include \masm32\include\user32.inc
	include \masm32\include\kernel32.inc
	include \masm32\include\masm32.inc

	includelib \masm32\lib\user32.lib
	includelib \masm32\lib\kernel32.lib
	includelib \masm32\lib\masm32.lib
	include\masm32\include\msvcrt.inc
	includelib\masm32\lib\msvcrt.lib
.data
	charInputStream db '%c',0
	intInputStream db '%d',0
	charOutputStream db '%c',13,10,0
	intOutputStream db '%d',13,10,0
		_i DWORD 0
		_j DWORD 0
		_n DWORD 0
		_r DWORD 0
		_x DWORD 0
		_y DWORD 0
		_pi DWORD 0
		_c DWORD 0
		t0 DWORD 0
		t1 DWORD 0
		t2 DWORD 0
		t3 DWORD 0
		t4 DWORD 0
		t5 DWORD 0
		t6 DWORD 0
		t7 DWORD 0
		t8 DWORD 0
		t9 DWORD 0
		t10 DWORD 0
		t11 DWORD 0
		t12 DWORD 0
		t13 DWORD 0
		t14 DWORD 0
		t15 DWORD 0
		t16 DWORD 0
		t17 DWORD 0
		t18 DWORD 0
		t19 DWORD 0
		t20 DWORD 0
		t21 DWORD 0
		t22 DWORD 0
		t23 DWORD 0
		t24 DWORD 0
		t25 DWORD 0
		t26 DWORD 0
		t27 DWORD 0
		t28 DWORD 0
		t29 DWORD 0
		t30 DWORD 0
		t31 DWORD 0
		buffer BYTE 128 dup(0)
		LF BYTE 13, 10, 0
.code
@203:
	MOV eax,0
	MOV _pi,eax
	MOV eax,97
	MOV _c,eax
	MOV eax,1
	ADD eax, 2
	MOV t3, eax
	MOV eax,3
	MOV ecx,4
	MUL ecx
	MOV t6, eax
	MOV edx,0
	MOV eax,t6
	MOV ecx,5
	DIV ecx
	MOV t5, eax
	MOV edx,0
	MOV eax,t5
	MOV ecx,6
	DIV ecx

	MOV t4, edx
	MOV eax,t3
	SUB eax,t4
	MOV t2, eax
	MOV eax,t2
	AND eax,7
	MOV t1, eax
	MOV eax,9
	SAR eax,1
	MOV t8, eax
	MOV eax,8
	XOR eax,t8
	MOV t7, eax
	MOV eax,t1
	OR eax,t7
	MOV t0, eax
	INVOKE crt_printf,addr intOutputStream,t0
	MOV eax,0
	MOV _i,eax
@40:
	MOV eax,_i
	CMP eax,10
	JGE @42
	MOV eax,_c
	INC _c
	MOV t11, eax
	MOV eax,t11
	SUB eax,97
	MOV t10, eax
	INVOKE crt_printf,addr intOutputStream,t10
	MOV eax,_i
	ADD eax, 1
	MOV t9, eax
	MOV eax,t9
	MOV _i,eax
	JMP @40
@42:
	INVOKE crt_scanf,addr intInputStream,addr _n
@58:
	MOV eax,_n
	CMP eax,0
	JL @0
	MOV eax,_n
	CMP eax,10
	JL @65
@71:
	MOV eax,_n
	CMP eax,100
	JGE @65
	INVOKE crt_printf,addr intOutputStream,1
	JMP @63
@65:
	MOV eax,1
	NEG eax
	MOV t12, eax
	MOV eax,_n
	CMP eax,t12
	JG @89
@89:
	MOV eax,_n
	CMP eax,4
	JLE @83
@82:
	MOV eax,0
	MOV _r,eax
	JMP @81
@83:
	MOV eax,1
	MOV _r,eax
@101:
	MOV eax,_n
	CMP eax,0
	JLE @103
	MOV eax,_r
	SAL eax,3
	MOV t15, eax
	MOV eax,_r
	SAL eax,1
	MOV t16, eax
	MOV eax,t15
	ADD eax, t16
	MOV t14, eax
	MOV eax,t14
	MOV _r,eax
	MOV eax,_n
	DEC _n
	MOV t13, eax
	JMP @101
@103:
@81:
@63:
	MOV eax,0
	MOV _pi,eax
	MOV eax,_r
	NEG eax
	MOV t17, eax
	MOV eax,t17
	MOV _i,eax
@122:
	MOV eax,_i
	CMP eax,_r
	JGE @124
	MOV eax,_r
	NEG eax
	MOV t19, eax
	MOV eax,t19
	MOV _j,eax
@135:
	MOV eax,_j
	CMP eax,_r
	JGE @137
	MOV eax,_i
	MOV ecx,2
	MUL ecx
	MOV t22, eax
	MOV eax,t22
	ADD eax, 1
	MOV t21, eax
	MOV eax,t21
	MOV _x,eax
	MOV eax,_j
	MOV ecx,2
	MUL ecx
	MOV t24, eax
	MOV eax,t24
	ADD eax, 1
	MOV t23, eax
	MOV eax,t23
	MOV _y,eax
	MOV eax,_x
	MOV ecx,_x
	MUL ecx
	MOV t26, eax
	MOV eax,_y
	MOV ecx,_y
	MUL ecx
	MOV t27, eax
	MOV eax,t26
	ADD eax, t27
	MOV t25, eax
	MOV eax,4
	MOV ecx,_r
	MUL ecx
	MOV t29, eax
	MOV eax,t29
	MOV ecx,_r
	MUL ecx
	MOV t28, eax
	MOV eax,t25
	CMP eax,t28
	JGE @162
@163:
	MOV eax,_pi
	ADD eax, 1
	MOV t30, eax
	MOV eax,t30
	MOV _pi,eax
@162:
	MOV eax,_j
	ADD eax, 1
	MOV t20, eax
	MOV eax,t20
	MOV _j,eax
	JMP @135
@137:
	MOV eax,_i
	ADD eax, 1
	MOV t18, eax
	MOV eax,t18
	MOV _i,eax
	JMP @122
@124:
	MOV eax,_r
	CMP eax,1
	JL @183
@184:
	MOV eax,_r
	CMP eax,2
	JL @191
	MOV edx,0
	MOV eax,_pi
	MOV ecx,_r
	DIV ecx
	MOV t31, eax
	INVOKE crt_printf,addr intOutputStream,t31
	JMP @189
@191:
	INVOKE crt_printf,addr intOutputStream,3
@189:
@183:
	INVOKE crt_scanf,addr intInputStream,addr _n
	JMP @58
@0:
	invoke ExitProcess, 0
	end @203
