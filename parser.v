#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 35 of your 30 day trial period.
# 
# This file was produced by an UNREGISTERED COPY of Parser Generator. It is
# for evaluation purposes only. If you continue to use Parser Generator 30
# days after installation then you are required to purchase a license. For
# more information see the online help or go to the Bumble-Bee Software
# homepage at:
# 
# http://www.bumblebeesoftware.com
# 
# This notice must remain present in the file. It cannot be removed.
#############################################################################

#############################################################################
# parser.v
# YACC verbose file generated from parser.y.
# 
# Date: 11/22/16
# Time: 10:18:50
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : stmt_seq

    2  stmt_seq : stmt_seq stmt
    3           | stmt

    4  stmt : for_stmt
    5       | while_stmt
    6       | if_stmt
    7       | assign_stmt
    8       | LB stmt_seq RB
    9       | decl_stmt
   10       | SEMI
   11       | expr SEMI
   12       | error

   13  decl_stmt : TYPE idlist SEMI

   14  idlist : idlist COM ID
   15         | ID

   16  assign_stmt : ID ASSIGN expr SEMI

   17  if_stmt : IF LE expr RE stmt_seq
   18          | IF LE expr RE stmt_seq ELSE stmt_seq

   19  for_stmt : FOR LE expr SEMI expr SEMI expr RE stmt_seq

   20  while_stmt : WHILE LE expr RE stmt_seq

   21  expr : expr EQ expr
   22       | expr ADD expr
   23       | expr SUB expr
   24       | expr MUL expr
   25       | expr DIV expr
   26       | SUB expr
   27       | LE expr RE
   28       | ID
   29       | INT


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11

	if_stmt  goto 12
	stmt_seq  goto 13
	stmt  goto 14
	program  goto 15
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 1
	stmt : error .  (12)

	.  reduce 12


state 2
	assign_stmt : ID . ASSIGN expr SEMI
	expr : ID .  (28)

	ASSIGN  shift 21
	.  reduce 28


state 3
	expr : INT .  (29)

	.  reduce 29


state 4
	for_stmt : FOR . LE expr SEMI expr SEMI expr RE stmt_seq

	LE  shift 22


state 5
	while_stmt : WHILE . LE expr RE stmt_seq

	LE  shift 23


state 6
	if_stmt : IF . LE expr RE stmt_seq
	if_stmt : IF . LE expr RE stmt_seq ELSE stmt_seq

	LE  shift 24


state 7
	stmt : LB . stmt_seq RB

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11

	if_stmt  goto 12
	stmt_seq  goto 25
	stmt  goto 14
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 8
	stmt : SEMI .  (10)

	.  reduce 10


state 9
	decl_stmt : TYPE . idlist SEMI

	ID  shift 26

	idlist  goto 27


state 10
	expr : SUB . expr

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 29


state 11
	expr : LE . expr RE

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 30


state 12
	stmt : if_stmt .  (6)

	.  reduce 6


state 13
	program : stmt_seq .  (1)
	stmt_seq : stmt_seq . stmt

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11
	.  reduce 1

	if_stmt  goto 12
	stmt  goto 31
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 14
	stmt_seq : stmt .  (3)

	.  reduce 3


state 15
	$accept : program . $end  (0)

	$end  accept


state 16
	stmt : for_stmt .  (4)

	.  reduce 4


state 17
	stmt : while_stmt .  (5)

	.  reduce 5


state 18
	stmt : assign_stmt .  (7)

	.  reduce 7


state 19
	stmt : expr . SEMI
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	SEMI  shift 32
	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37


state 20
	stmt : decl_stmt .  (9)

	.  reduce 9


state 21
	assign_stmt : ID ASSIGN . expr SEMI

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 38


state 22
	for_stmt : FOR LE . expr SEMI expr SEMI expr RE stmt_seq

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 39


state 23
	while_stmt : WHILE LE . expr RE stmt_seq

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 40


state 24
	if_stmt : IF LE . expr RE stmt_seq
	if_stmt : IF LE . expr RE stmt_seq ELSE stmt_seq

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 41


state 25
	stmt_seq : stmt_seq . stmt
	stmt : LB stmt_seq . RB

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	RB  shift 42
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11

	if_stmt  goto 12
	stmt  goto 31
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 26
	idlist : ID .  (15)

	.  reduce 15


state 27
	decl_stmt : TYPE idlist . SEMI
	idlist : idlist . COM ID

	SEMI  shift 43
	COM  shift 44


state 28
	expr : ID .  (28)

	.  reduce 28


state 29
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : SUB expr .  (26)
	expr : expr . EQ expr

	.  reduce 26


state 30
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : LE expr . RE
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37
	RE  shift 45


state 31
	stmt_seq : stmt_seq stmt .  (2)

	.  reduce 2


state 32
	stmt : expr SEMI .  (11)

	.  reduce 11


state 33
	expr : expr EQ . expr

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 46


state 34
	expr : expr ADD . expr

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 47


state 35
	expr : expr SUB . expr

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 48


state 36
	expr : expr MUL . expr

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 49


state 37
	expr : expr DIV . expr

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 50


state 38
	assign_stmt : ID ASSIGN expr . SEMI
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	SEMI  shift 51
	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37


state 39
	expr : expr . SUB expr
	expr : expr . MUL expr
	for_stmt : FOR LE expr . SEMI expr SEMI expr RE stmt_seq
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	SEMI  shift 52
	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37


state 40
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr . ADD expr
	while_stmt : WHILE LE expr . RE stmt_seq
	expr : expr . EQ expr

	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37
	RE  shift 53


state 41
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	if_stmt : IF LE expr . RE stmt_seq
	if_stmt : IF LE expr . RE stmt_seq ELSE stmt_seq
	expr : expr . ADD expr
	expr : expr . EQ expr

	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37
	RE  shift 54


state 42
	stmt : LB stmt_seq RB .  (8)

	.  reduce 8


state 43
	decl_stmt : TYPE idlist SEMI .  (13)

	.  reduce 13


state 44
	idlist : idlist COM . ID

	ID  shift 55


state 45
	expr : LE expr RE .  (27)

	.  reduce 27


state 46
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr EQ expr .  (21)
	expr : expr . EQ expr

	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37
	.  reduce 21


state 47
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr ADD expr .  (22)
	expr : expr . ADD expr
	expr : expr . EQ expr

	MUL  shift 36
	DIV  shift 37
	.  reduce 22


state 48
	expr : expr SUB expr .  (23)
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	MUL  shift 36
	DIV  shift 37
	.  reduce 23


state 49
	expr : expr . SUB expr
	expr : expr MUL expr .  (24)
	expr : expr . MUL expr
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	.  reduce 24


state 50
	expr : expr . SUB expr
	expr : expr . MUL expr
	expr : expr DIV expr .  (25)
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	.  reduce 25


state 51
	assign_stmt : ID ASSIGN expr SEMI .  (16)

	.  reduce 16


state 52
	for_stmt : FOR LE expr SEMI . expr SEMI expr RE stmt_seq

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 56


state 53
	while_stmt : WHILE LE expr RE . stmt_seq

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11

	if_stmt  goto 12
	stmt_seq  goto 57
	stmt  goto 14
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 54
	if_stmt : IF LE expr RE . stmt_seq
	if_stmt : IF LE expr RE . stmt_seq ELSE stmt_seq

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11

	if_stmt  goto 12
	stmt_seq  goto 58
	stmt  goto 14
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 55
	idlist : idlist COM ID .  (14)

	.  reduce 14


state 56
	expr : expr . SUB expr
	expr : expr . MUL expr
	for_stmt : FOR LE expr SEMI expr . SEMI expr RE stmt_seq
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	SEMI  shift 59
	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37


57: shift-reduce conflict (shift 1, reduce 20) on error
57: shift-reduce conflict (shift 2, reduce 20) on ID
57: shift-reduce conflict (shift 3, reduce 20) on INT
57: shift-reduce conflict (shift 4, reduce 20) on FOR
57: shift-reduce conflict (shift 5, reduce 20) on WHILE
57: shift-reduce conflict (shift 6, reduce 20) on IF
57: shift-reduce conflict (shift 7, reduce 20) on LB
57: shift-reduce conflict (shift 8, reduce 20) on SEMI
57: shift-reduce conflict (shift 9, reduce 20) on TYPE
state 57
	stmt_seq : stmt_seq . stmt
	while_stmt : WHILE LE expr RE stmt_seq .  (20)

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	.  reduce 20

	if_stmt  goto 12
	stmt  goto 31
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


58: shift-reduce conflict (shift 1, reduce 17) on error
58: shift-reduce conflict (shift 2, reduce 17) on ID
58: shift-reduce conflict (shift 3, reduce 17) on INT
58: shift-reduce conflict (shift 4, reduce 17) on FOR
58: shift-reduce conflict (shift 5, reduce 17) on WHILE
58: shift-reduce conflict (shift 6, reduce 17) on IF
58: shift-reduce conflict (shift 7, reduce 17) on LB
58: shift-reduce conflict (shift 8, reduce 17) on SEMI
58: shift-reduce conflict (shift 9, reduce 17) on TYPE
58: shift-reduce conflict (shift 60, reduce 17) on ELSE
state 58
	stmt_seq : stmt_seq . stmt
	if_stmt : IF LE expr RE stmt_seq .  (17)
	if_stmt : IF LE expr RE stmt_seq . ELSE stmt_seq

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	ELSE  shift 60
	.  reduce 17

	if_stmt  goto 12
	stmt  goto 31
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 59
	for_stmt : FOR LE expr SEMI expr SEMI . expr RE stmt_seq

	ID  shift 28
	INT  shift 3
	SUB  shift 10
	LE  shift 11

	expr  goto 61


state 60
	if_stmt : IF LE expr RE stmt_seq ELSE . stmt_seq

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11

	if_stmt  goto 12
	stmt_seq  goto 62
	stmt  goto 14
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 61
	expr : expr . SUB expr
	expr : expr . MUL expr
	for_stmt : FOR LE expr SEMI expr SEMI expr . RE stmt_seq
	expr : expr . DIV expr
	expr : expr . ADD expr
	expr : expr . EQ expr

	EQ  shift 33
	ADD  shift 34
	SUB  shift 35
	MUL  shift 36
	DIV  shift 37
	RE  shift 63


62: shift-reduce conflict (shift 1, reduce 18) on error
62: shift-reduce conflict (shift 2, reduce 18) on ID
62: shift-reduce conflict (shift 3, reduce 18) on INT
62: shift-reduce conflict (shift 4, reduce 18) on FOR
62: shift-reduce conflict (shift 5, reduce 18) on WHILE
62: shift-reduce conflict (shift 6, reduce 18) on IF
62: shift-reduce conflict (shift 7, reduce 18) on LB
62: shift-reduce conflict (shift 8, reduce 18) on SEMI
62: shift-reduce conflict (shift 9, reduce 18) on TYPE
62: shift-reduce conflict (shift 10, reduce 18) on SUB
62: shift-reduce conflict (shift 11, reduce 18) on LE
state 62
	stmt_seq : stmt_seq . stmt
	if_stmt : IF LE expr RE stmt_seq ELSE stmt_seq .  (18)

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11
	.  reduce 18

	if_stmt  goto 12
	stmt  goto 31
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


state 63
	for_stmt : FOR LE expr SEMI expr SEMI expr RE . stmt_seq

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	SUB  shift 10
	LE  shift 11

	if_stmt  goto 12
	stmt_seq  goto 64
	stmt  goto 14
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


64: shift-reduce conflict (shift 1, reduce 19) on error
64: shift-reduce conflict (shift 2, reduce 19) on ID
64: shift-reduce conflict (shift 3, reduce 19) on INT
64: shift-reduce conflict (shift 4, reduce 19) on FOR
64: shift-reduce conflict (shift 5, reduce 19) on WHILE
64: shift-reduce conflict (shift 6, reduce 19) on IF
64: shift-reduce conflict (shift 7, reduce 19) on LB
64: shift-reduce conflict (shift 8, reduce 19) on SEMI
64: shift-reduce conflict (shift 9, reduce 19) on TYPE
state 64
	stmt_seq : stmt_seq . stmt
	for_stmt : FOR LE expr SEMI expr SEMI expr RE stmt_seq .  (19)

	error  shift 1
	ID  shift 2
	INT  shift 3
	FOR  shift 4
	WHILE  shift 5
	IF  shift 6
	LB  shift 7
	SEMI  shift 8
	TYPE  shift 9
	.  reduce 19

	if_stmt  goto 12
	stmt  goto 31
	for_stmt  goto 16
	while_stmt  goto 17
	assign_stmt  goto 18
	expr  goto 19
	decl_stmt  goto 20


##############################################################################
# Summary
##############################################################################

State 57 contains 9 shift-reduce conflict(s)
State 58 contains 10 shift-reduce conflict(s)
State 62 contains 11 shift-reduce conflict(s)
State 64 contains 9 shift-reduce conflict(s)


22 token(s), 11 nonterminal(s)
30 grammar rule(s), 65 state(s)


##############################################################################
# End of File
##############################################################################
