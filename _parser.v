#############################################################################
#                     U N R E G I S T E R E D   C O P Y
# 
# You are on day 70 of your 30 day trial period.
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
# _parser.v
# YACC verbose file generated from _parser.y.
# 
# Date: 12/27/16
# Time: 23:21:25
# 
# AYACC Version: 2.07
#############################################################################


##############################################################################
# Rules
##############################################################################

    0  $accept : program $end

    1  program : MAIN LE RE LB stmt_seq RB

    2  stmt_seq : stmt_seq stmt
    3           | stmt

    4  stmt : for_stmt
    5       | while_stmt
    6       | if_stmt
    7       | LB stmt_seq RB
    8       | decl_stmt
    9       | SEMI
   10       | expr SEMI
   11       |
   12       | error
   13       | output_stmt
   14       | input_stmt

   15  output_stmt : OUTPUT LE expr RE SEMI

   16  input_stmt : INPUT LE expr RE SEMI

   17  decl_stmt : TYPE idlist SEMI

   18  idlist : idlist COM ID
   19         | idlist COM init
   20         | ID
   21         | init

   22  $$1 :

   23  init : ID $$1 ASSIGN expr

   24  if_stmt : IF LE expr RE stmt
   25          | IF LE expr RE stmt ELSE stmt

   26  for_stmt : FOR LE expr SEMI expr SEMI expr RE stmt

   27  while_stmt : WHILE LE expr RE stmt

   28  expr : expr EQ expr
   29       | expr NEQ expr
   30       | expr LTE expr
   31       | expr GTE expr
   32       | expr bAND expr
   33       | expr bOR expr
   34       | bNOT expr
   35       | NOT expr
   36       | expr MOD expr
   37       | SADD expr
   38       | expr SADD
   39       | SSUB expr
   40       | expr SSUB
   41       | expr LT expr
   42       | expr GT expr
   43       | expr ADD expr
   44       | expr SUB expr
   45       | expr MUL expr
   46       | expr DIV expr
   47       | SUB expr
   48       | LE expr RE
   49       | ID
   50       | CHAR
   51       | INT
   52       | expr AND expr
   53       | expr OR expr
   54       | expr LS expr
   55       | expr RS expr
   56       | expr bXOR expr
   57       |
   58       | expr ASSIGN expr
   59       | error


##############################################################################
# States
##############################################################################

state 0
	$accept : . program $end

	MAIN  shift 1

	program  goto 2


state 1
	program : MAIN . LE RE LB stmt_seq RB

	LE  shift 3


state 2
	$accept : program . $end  (0)

	$end  accept


state 3
	program : MAIN LE . RE LB stmt_seq RB

	RE  shift 4


state 4
	program : MAIN LE RE . LB stmt_seq RB

	LB  shift 5


5: shift-reduce conflict (shift 6, reduce 11) on error
5: shift-reduce conflict (shift 7, reduce 11) on ID
5: shift-reduce conflict (shift 8, reduce 11) on INT
5: shift-reduce conflict (shift 9, reduce 11) on FOR
5: shift-reduce conflict (shift 10, reduce 11) on WHILE
5: shift-reduce conflict (shift 11, reduce 11) on IF
5: shift-reduce conflict (shift 12, reduce 11) on LB
5: shift-reduce conflict (shift 13, reduce 11) on SEMI
5: shift-reduce conflict (shift 14, reduce 11) on TYPE
5: shift-reduce conflict (shift 15, reduce 11) on CHAR
5: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
5: shift-reduce conflict (shift 17, reduce 11) on INPUT
5: shift-reduce conflict (shift 18, reduce 11) on SUB
5: shift-reduce conflict (shift 19, reduce 11) on bNOT
5: shift-reduce conflict (shift 20, reduce 11) on SADD
5: shift-reduce conflict (shift 21, reduce 11) on SSUB
5: shift-reduce conflict (shift 22, reduce 11) on NOT
5: shift-reduce conflict (shift 23, reduce 11) on LE
5: shift-reduce conflict (shift 13, reduce 57) on SEMI
5: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
5: reduce-reduce conflict (reduce 11, reduce 57) on OR
5: reduce-reduce conflict (reduce 11, reduce 57) on AND
5: reduce-reduce conflict (reduce 11, reduce 57) on bOR
5: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
5: reduce-reduce conflict (reduce 11, reduce 57) on bAND
5: reduce-reduce conflict (reduce 11, reduce 57) on EQ
5: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
5: reduce-reduce conflict (reduce 11, reduce 57) on LT
5: reduce-reduce conflict (reduce 11, reduce 57) on GT
5: reduce-reduce conflict (reduce 11, reduce 57) on LTE
5: reduce-reduce conflict (reduce 11, reduce 57) on GTE
5: reduce-reduce conflict (reduce 11, reduce 57) on LS
5: reduce-reduce conflict (reduce 11, reduce 57) on RS
5: reduce-reduce conflict (reduce 11, reduce 57) on ADD
5: shift-reduce conflict (shift 18, reduce 57) on SUB
5: reduce-reduce conflict (reduce 11, reduce 57) on MUL
5: reduce-reduce conflict (reduce 11, reduce 57) on DIV
5: reduce-reduce conflict (reduce 11, reduce 57) on MOD
5: shift-reduce conflict (shift 20, reduce 57) on SADD
5: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 5
	program : MAIN LE RE LB . stmt_seq RB
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt_seq  goto 26
	stmt  goto 27
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


6: reduce-reduce conflict (reduce 12, reduce 59) on SEMI
6: reduce-reduce conflict (reduce 12, reduce 59) on ASSIGN
6: reduce-reduce conflict (reduce 12, reduce 59) on OR
6: reduce-reduce conflict (reduce 12, reduce 59) on AND
6: reduce-reduce conflict (reduce 12, reduce 59) on bOR
6: reduce-reduce conflict (reduce 12, reduce 59) on bXOR
6: reduce-reduce conflict (reduce 12, reduce 59) on bAND
6: reduce-reduce conflict (reduce 12, reduce 59) on EQ
6: reduce-reduce conflict (reduce 12, reduce 59) on NEQ
6: reduce-reduce conflict (reduce 12, reduce 59) on LT
6: reduce-reduce conflict (reduce 12, reduce 59) on GT
6: reduce-reduce conflict (reduce 12, reduce 59) on LTE
6: reduce-reduce conflict (reduce 12, reduce 59) on GTE
6: reduce-reduce conflict (reduce 12, reduce 59) on LS
6: reduce-reduce conflict (reduce 12, reduce 59) on RS
6: reduce-reduce conflict (reduce 12, reduce 59) on ADD
6: reduce-reduce conflict (reduce 12, reduce 59) on SUB
6: reduce-reduce conflict (reduce 12, reduce 59) on MUL
6: reduce-reduce conflict (reduce 12, reduce 59) on DIV
6: reduce-reduce conflict (reduce 12, reduce 59) on MOD
6: reduce-reduce conflict (reduce 12, reduce 59) on SADD
6: reduce-reduce conflict (reduce 12, reduce 59) on SSUB
state 6
	stmt : error .  (12)
	expr : error .  (59)

	.  reduce 12


state 7
	expr : ID .  (49)

	.  reduce 49


state 8
	expr : INT .  (51)

	.  reduce 51


state 9
	for_stmt : FOR . LE expr SEMI expr SEMI expr RE stmt

	LE  shift 33


state 10
	while_stmt : WHILE . LE expr RE stmt

	LE  shift 34


state 11
	if_stmt : IF . LE expr RE stmt ELSE stmt
	if_stmt : IF . LE expr RE stmt

	LE  shift 35


12: shift-reduce conflict (shift 6, reduce 11) on error
12: shift-reduce conflict (shift 7, reduce 11) on ID
12: shift-reduce conflict (shift 8, reduce 11) on INT
12: shift-reduce conflict (shift 9, reduce 11) on FOR
12: shift-reduce conflict (shift 10, reduce 11) on WHILE
12: shift-reduce conflict (shift 11, reduce 11) on IF
12: shift-reduce conflict (shift 12, reduce 11) on LB
12: shift-reduce conflict (shift 13, reduce 11) on SEMI
12: shift-reduce conflict (shift 14, reduce 11) on TYPE
12: shift-reduce conflict (shift 15, reduce 11) on CHAR
12: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
12: shift-reduce conflict (shift 17, reduce 11) on INPUT
12: shift-reduce conflict (shift 18, reduce 11) on SUB
12: shift-reduce conflict (shift 19, reduce 11) on bNOT
12: shift-reduce conflict (shift 20, reduce 11) on SADD
12: shift-reduce conflict (shift 21, reduce 11) on SSUB
12: shift-reduce conflict (shift 22, reduce 11) on NOT
12: shift-reduce conflict (shift 23, reduce 11) on LE
12: shift-reduce conflict (shift 13, reduce 57) on SEMI
12: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
12: reduce-reduce conflict (reduce 11, reduce 57) on OR
12: reduce-reduce conflict (reduce 11, reduce 57) on AND
12: reduce-reduce conflict (reduce 11, reduce 57) on bOR
12: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
12: reduce-reduce conflict (reduce 11, reduce 57) on bAND
12: reduce-reduce conflict (reduce 11, reduce 57) on EQ
12: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
12: reduce-reduce conflict (reduce 11, reduce 57) on LT
12: reduce-reduce conflict (reduce 11, reduce 57) on GT
12: reduce-reduce conflict (reduce 11, reduce 57) on LTE
12: reduce-reduce conflict (reduce 11, reduce 57) on GTE
12: reduce-reduce conflict (reduce 11, reduce 57) on LS
12: reduce-reduce conflict (reduce 11, reduce 57) on RS
12: reduce-reduce conflict (reduce 11, reduce 57) on ADD
12: shift-reduce conflict (shift 18, reduce 57) on SUB
12: reduce-reduce conflict (reduce 11, reduce 57) on MUL
12: reduce-reduce conflict (reduce 11, reduce 57) on DIV
12: reduce-reduce conflict (reduce 11, reduce 57) on MOD
12: shift-reduce conflict (shift 20, reduce 57) on SADD
12: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 12
	stmt : LB . stmt_seq RB
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt_seq  goto 36
	stmt  goto 27
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


state 13
	stmt : SEMI .  (9)

	.  reduce 9


state 14
	decl_stmt : TYPE . idlist SEMI

	ID  shift 37

	idlist  goto 38
	init  goto 39


state 15
	expr : CHAR .  (50)

	.  reduce 50


state 16
	output_stmt : OUTPUT . LE expr RE SEMI

	LE  shift 40


state 17
	input_stmt : INPUT . LE expr RE SEMI

	LE  shift 41


18: shift-reduce conflict (shift 18, reduce 57) on SUB
18: shift-reduce conflict (shift 20, reduce 57) on SADD
18: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 18
	expr : SUB . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 43


19: shift-reduce conflict (shift 18, reduce 57) on SUB
19: shift-reduce conflict (shift 20, reduce 57) on SADD
19: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 19
	expr : bNOT . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 44


20: shift-reduce conflict (shift 18, reduce 57) on SUB
20: shift-reduce conflict (shift 20, reduce 57) on SADD
20: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 20
	expr : SADD . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 45


21: shift-reduce conflict (shift 18, reduce 57) on SUB
21: shift-reduce conflict (shift 20, reduce 57) on SADD
21: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 21
	expr : SSUB . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 46


22: shift-reduce conflict (shift 18, reduce 57) on SUB
22: shift-reduce conflict (shift 20, reduce 57) on SADD
22: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 22
	expr : NOT . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 47


23: shift-reduce conflict (shift 18, reduce 57) on SUB
23: shift-reduce conflict (shift 20, reduce 57) on SADD
23: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 23
	expr : LE . expr RE
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 48


state 24
	stmt : if_stmt .  (6)

	.  reduce 6


state 25
	stmt : while_stmt .  (5)

	.  reduce 5


26: shift-reduce conflict (shift 6, reduce 11) on error
26: shift-reduce conflict (shift 7, reduce 11) on ID
26: shift-reduce conflict (shift 8, reduce 11) on INT
26: shift-reduce conflict (shift 9, reduce 11) on FOR
26: shift-reduce conflict (shift 10, reduce 11) on WHILE
26: shift-reduce conflict (shift 11, reduce 11) on IF
26: shift-reduce conflict (shift 12, reduce 11) on LB
26: shift-reduce conflict (shift 49, reduce 11) on RB
26: shift-reduce conflict (shift 13, reduce 11) on SEMI
26: shift-reduce conflict (shift 14, reduce 11) on TYPE
26: shift-reduce conflict (shift 15, reduce 11) on CHAR
26: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
26: shift-reduce conflict (shift 17, reduce 11) on INPUT
26: shift-reduce conflict (shift 18, reduce 11) on SUB
26: shift-reduce conflict (shift 19, reduce 11) on bNOT
26: shift-reduce conflict (shift 20, reduce 11) on SADD
26: shift-reduce conflict (shift 21, reduce 11) on SSUB
26: shift-reduce conflict (shift 22, reduce 11) on NOT
26: shift-reduce conflict (shift 23, reduce 11) on LE
26: shift-reduce conflict (shift 13, reduce 57) on SEMI
26: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
26: reduce-reduce conflict (reduce 11, reduce 57) on OR
26: reduce-reduce conflict (reduce 11, reduce 57) on AND
26: reduce-reduce conflict (reduce 11, reduce 57) on bOR
26: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
26: reduce-reduce conflict (reduce 11, reduce 57) on bAND
26: reduce-reduce conflict (reduce 11, reduce 57) on EQ
26: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
26: reduce-reduce conflict (reduce 11, reduce 57) on LT
26: reduce-reduce conflict (reduce 11, reduce 57) on GT
26: reduce-reduce conflict (reduce 11, reduce 57) on LTE
26: reduce-reduce conflict (reduce 11, reduce 57) on GTE
26: reduce-reduce conflict (reduce 11, reduce 57) on LS
26: reduce-reduce conflict (reduce 11, reduce 57) on RS
26: reduce-reduce conflict (reduce 11, reduce 57) on ADD
26: shift-reduce conflict (shift 18, reduce 57) on SUB
26: reduce-reduce conflict (reduce 11, reduce 57) on MUL
26: reduce-reduce conflict (reduce 11, reduce 57) on DIV
26: reduce-reduce conflict (reduce 11, reduce 57) on MOD
26: shift-reduce conflict (shift 20, reduce 57) on SADD
26: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 26
	program : MAIN LE RE LB stmt_seq . RB
	stmt_seq : stmt_seq . stmt
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	RB  shift 49
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt  goto 50
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


state 27
	stmt_seq : stmt .  (3)

	.  reduce 3


state 28
	stmt : for_stmt .  (4)

	.  reduce 4


state 29
	stmt : decl_stmt .  (8)

	.  reduce 8


state 30
	stmt : expr . SEMI
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	SEMI  shift 51
	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72


state 31
	stmt : output_stmt .  (13)

	.  reduce 13


state 32
	stmt : input_stmt .  (14)

	.  reduce 14


33: shift-reduce conflict (shift 18, reduce 57) on SUB
33: shift-reduce conflict (shift 20, reduce 57) on SADD
33: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 33
	for_stmt : FOR LE . expr SEMI expr SEMI expr RE stmt
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 73


34: shift-reduce conflict (shift 18, reduce 57) on SUB
34: shift-reduce conflict (shift 20, reduce 57) on SADD
34: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 34
	while_stmt : WHILE LE . expr RE stmt
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 74


35: shift-reduce conflict (shift 18, reduce 57) on SUB
35: shift-reduce conflict (shift 20, reduce 57) on SADD
35: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 35
	if_stmt : IF LE . expr RE stmt ELSE stmt
	if_stmt : IF LE . expr RE stmt
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 75


36: shift-reduce conflict (shift 6, reduce 11) on error
36: shift-reduce conflict (shift 7, reduce 11) on ID
36: shift-reduce conflict (shift 8, reduce 11) on INT
36: shift-reduce conflict (shift 9, reduce 11) on FOR
36: shift-reduce conflict (shift 10, reduce 11) on WHILE
36: shift-reduce conflict (shift 11, reduce 11) on IF
36: shift-reduce conflict (shift 12, reduce 11) on LB
36: shift-reduce conflict (shift 76, reduce 11) on RB
36: shift-reduce conflict (shift 13, reduce 11) on SEMI
36: shift-reduce conflict (shift 14, reduce 11) on TYPE
36: shift-reduce conflict (shift 15, reduce 11) on CHAR
36: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
36: shift-reduce conflict (shift 17, reduce 11) on INPUT
36: shift-reduce conflict (shift 18, reduce 11) on SUB
36: shift-reduce conflict (shift 19, reduce 11) on bNOT
36: shift-reduce conflict (shift 20, reduce 11) on SADD
36: shift-reduce conflict (shift 21, reduce 11) on SSUB
36: shift-reduce conflict (shift 22, reduce 11) on NOT
36: shift-reduce conflict (shift 23, reduce 11) on LE
36: shift-reduce conflict (shift 13, reduce 57) on SEMI
36: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
36: reduce-reduce conflict (reduce 11, reduce 57) on OR
36: reduce-reduce conflict (reduce 11, reduce 57) on AND
36: reduce-reduce conflict (reduce 11, reduce 57) on bOR
36: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
36: reduce-reduce conflict (reduce 11, reduce 57) on bAND
36: reduce-reduce conflict (reduce 11, reduce 57) on EQ
36: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
36: reduce-reduce conflict (reduce 11, reduce 57) on LT
36: reduce-reduce conflict (reduce 11, reduce 57) on GT
36: reduce-reduce conflict (reduce 11, reduce 57) on LTE
36: reduce-reduce conflict (reduce 11, reduce 57) on GTE
36: reduce-reduce conflict (reduce 11, reduce 57) on LS
36: reduce-reduce conflict (reduce 11, reduce 57) on RS
36: reduce-reduce conflict (reduce 11, reduce 57) on ADD
36: shift-reduce conflict (shift 18, reduce 57) on SUB
36: reduce-reduce conflict (reduce 11, reduce 57) on MUL
36: reduce-reduce conflict (reduce 11, reduce 57) on DIV
36: reduce-reduce conflict (reduce 11, reduce 57) on MOD
36: shift-reduce conflict (shift 20, reduce 57) on SADD
36: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 36
	stmt_seq : stmt_seq . stmt
	stmt : LB stmt_seq . RB
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	RB  shift 76
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt  goto 50
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


state 37
	init : ID . $$1 ASSIGN expr
	idlist : ID .  (20)
	$$1 : .  (22)

	ASSIGN  reduce 22
	.  reduce 20

	$$1  goto 77


state 38
	decl_stmt : TYPE idlist . SEMI
	idlist : idlist . COM init
	idlist : idlist . COM ID

	SEMI  shift 78
	COM  shift 79


state 39
	idlist : init .  (21)

	.  reduce 21


40: shift-reduce conflict (shift 18, reduce 57) on SUB
40: shift-reduce conflict (shift 20, reduce 57) on SADD
40: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 40
	output_stmt : OUTPUT LE . expr RE SEMI
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 80


41: shift-reduce conflict (shift 18, reduce 57) on SUB
41: shift-reduce conflict (shift 20, reduce 57) on SADD
41: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 41
	input_stmt : INPUT LE . expr RE SEMI
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 81


state 42
	expr : error .  (59)

	.  reduce 59


state 43
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : SUB expr .  (47)
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	.  reduce 47


state 44
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : bNOT expr .  (34)
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	.  reduce 34


state 45
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : SADD expr .  (37)
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	.  reduce 37


state 46
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD
	expr : SSUB expr .  (39)

	.  reduce 39


state 47
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : NOT expr .  (35)
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	.  reduce 35


state 48
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : LE expr . RE
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	RE  shift 82


state 49
	program : MAIN LE RE LB stmt_seq RB .  (1)

	.  reduce 1


state 50
	stmt_seq : stmt_seq stmt .  (2)

	.  reduce 2


state 51
	stmt : expr SEMI .  (10)

	.  reduce 10


52: shift-reduce conflict (shift 18, reduce 57) on SUB
52: shift-reduce conflict (shift 20, reduce 57) on SADD
52: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 52
	expr : expr ASSIGN . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 83


53: shift-reduce conflict (shift 18, reduce 57) on SUB
53: shift-reduce conflict (shift 20, reduce 57) on SADD
53: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 53
	expr : expr OR . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 84


54: shift-reduce conflict (shift 18, reduce 57) on SUB
54: shift-reduce conflict (shift 20, reduce 57) on SADD
54: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 54
	expr : expr AND . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 85


55: shift-reduce conflict (shift 18, reduce 57) on SUB
55: shift-reduce conflict (shift 20, reduce 57) on SADD
55: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 55
	expr : expr bOR . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 86


56: shift-reduce conflict (shift 18, reduce 57) on SUB
56: shift-reduce conflict (shift 20, reduce 57) on SADD
56: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 56
	expr : expr bXOR . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 87


57: shift-reduce conflict (shift 18, reduce 57) on SUB
57: shift-reduce conflict (shift 20, reduce 57) on SADD
57: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 57
	expr : expr bAND . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 88


58: shift-reduce conflict (shift 18, reduce 57) on SUB
58: shift-reduce conflict (shift 20, reduce 57) on SADD
58: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 58
	expr : expr EQ . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 89


59: shift-reduce conflict (shift 18, reduce 57) on SUB
59: shift-reduce conflict (shift 20, reduce 57) on SADD
59: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 59
	expr : expr NEQ . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 90


60: shift-reduce conflict (shift 18, reduce 57) on SUB
60: shift-reduce conflict (shift 20, reduce 57) on SADD
60: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 60
	expr : expr LT . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 91


61: shift-reduce conflict (shift 18, reduce 57) on SUB
61: shift-reduce conflict (shift 20, reduce 57) on SADD
61: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 61
	expr : expr GT . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 92


62: shift-reduce conflict (shift 18, reduce 57) on SUB
62: shift-reduce conflict (shift 20, reduce 57) on SADD
62: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 62
	expr : expr LTE . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 93


63: shift-reduce conflict (shift 18, reduce 57) on SUB
63: shift-reduce conflict (shift 20, reduce 57) on SADD
63: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 63
	expr : expr GTE . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 94


64: shift-reduce conflict (shift 18, reduce 57) on SUB
64: shift-reduce conflict (shift 20, reduce 57) on SADD
64: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 64
	expr : expr LS . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 95


65: shift-reduce conflict (shift 18, reduce 57) on SUB
65: shift-reduce conflict (shift 20, reduce 57) on SADD
65: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 65
	expr : expr RS . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 96


66: shift-reduce conflict (shift 18, reduce 57) on SUB
66: shift-reduce conflict (shift 20, reduce 57) on SADD
66: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 66
	expr : expr ADD . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 97


67: shift-reduce conflict (shift 18, reduce 57) on SUB
67: shift-reduce conflict (shift 20, reduce 57) on SADD
67: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 67
	expr : expr SUB . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 98


68: shift-reduce conflict (shift 18, reduce 57) on SUB
68: shift-reduce conflict (shift 20, reduce 57) on SADD
68: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 68
	expr : expr MUL . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 99


69: shift-reduce conflict (shift 18, reduce 57) on SUB
69: shift-reduce conflict (shift 20, reduce 57) on SADD
69: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 69
	expr : expr DIV . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 100


70: shift-reduce conflict (shift 18, reduce 57) on SUB
70: shift-reduce conflict (shift 20, reduce 57) on SADD
70: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 70
	expr : expr MOD . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 101


state 71
	expr : expr SADD .  (38)

	.  reduce 38


state 72
	expr : expr SSUB .  (40)

	.  reduce 40


state 73
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	for_stmt : FOR LE expr . SEMI expr SEMI expr RE stmt
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	SEMI  shift 102
	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72


state 74
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	while_stmt : WHILE LE expr . RE stmt
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	RE  shift 103


state 75
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	if_stmt : IF LE expr . RE stmt ELSE stmt
	expr : expr . NEQ expr
	expr : expr . EQ expr
	if_stmt : IF LE expr . RE stmt
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	RE  shift 104


state 76
	stmt : LB stmt_seq RB .  (7)

	.  reduce 7


state 77
	init : ID $$1 . ASSIGN expr

	ASSIGN  shift 105


state 78
	decl_stmt : TYPE idlist SEMI .  (17)

	.  reduce 17


state 79
	idlist : idlist COM . init
	idlist : idlist COM . ID

	ID  shift 106

	init  goto 107


state 80
	output_stmt : OUTPUT LE expr . RE SEMI
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	RE  shift 108


state 81
	input_stmt : INPUT LE expr . RE SEMI
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	RE  shift 109


state 82
	expr : LE expr RE .  (48)

	.  reduce 48


state 83
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr ASSIGN expr .  (58)
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 58


state 84
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr OR expr .  (53)
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 53


state 85
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr AND expr .  (52)
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 52


state 86
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr bOR expr .  (33)
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 33


state 87
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr bXOR expr .  (56)
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 56


state 88
	expr : expr . GTE expr
	expr : expr bAND expr .  (32)
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 32


state 89
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr EQ expr .  (28)
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 28


state 90
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr NEQ expr .  (29)
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 29


state 91
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr LT expr .  (41)
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 41


state 92
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr GT expr .  (42)
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 42


state 93
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr LTE expr .  (30)
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 30


state 94
	expr : expr GTE expr .  (31)
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 31


state 95
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr LS expr .  (54)
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 54


state 96
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr RS expr .  (55)
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 55


state 97
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr ADD expr .  (43)
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 43


state 98
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr SUB expr .  (44)
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 44


state 99
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr MUL expr .  (45)
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	SADD  shift 71
	SSUB  shift 72
	.  reduce 45


state 100
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr DIV expr .  (46)
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	SADD  shift 71
	SSUB  shift 72
	.  reduce 46


state 101
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr MOD expr .  (36)
	expr : expr . MOD expr
	expr : expr . SADD

	SADD  shift 71
	SSUB  shift 72
	.  reduce 36


102: shift-reduce conflict (shift 18, reduce 57) on SUB
102: shift-reduce conflict (shift 20, reduce 57) on SADD
102: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 102
	for_stmt : FOR LE expr SEMI . expr SEMI expr RE stmt
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 110


103: shift-reduce conflict (shift 6, reduce 11) on error
103: shift-reduce conflict (shift 7, reduce 11) on ID
103: shift-reduce conflict (shift 8, reduce 11) on INT
103: shift-reduce conflict (shift 9, reduce 11) on FOR
103: shift-reduce conflict (shift 10, reduce 11) on WHILE
103: shift-reduce conflict (shift 11, reduce 11) on IF
103: shift-reduce conflict (shift 12, reduce 11) on LB
103: shift-reduce conflict (shift 13, reduce 11) on SEMI
103: shift-reduce conflict (shift 14, reduce 11) on TYPE
103: shift-reduce conflict (shift 15, reduce 11) on CHAR
103: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
103: shift-reduce conflict (shift 17, reduce 11) on INPUT
103: shift-reduce conflict (shift 18, reduce 11) on SUB
103: shift-reduce conflict (shift 19, reduce 11) on bNOT
103: shift-reduce conflict (shift 20, reduce 11) on SADD
103: shift-reduce conflict (shift 21, reduce 11) on SSUB
103: shift-reduce conflict (shift 22, reduce 11) on NOT
103: shift-reduce conflict (shift 23, reduce 11) on LE
103: shift-reduce conflict (shift 13, reduce 57) on SEMI
103: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
103: reduce-reduce conflict (reduce 11, reduce 57) on OR
103: reduce-reduce conflict (reduce 11, reduce 57) on AND
103: reduce-reduce conflict (reduce 11, reduce 57) on bOR
103: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
103: reduce-reduce conflict (reduce 11, reduce 57) on bAND
103: reduce-reduce conflict (reduce 11, reduce 57) on EQ
103: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
103: reduce-reduce conflict (reduce 11, reduce 57) on LT
103: reduce-reduce conflict (reduce 11, reduce 57) on GT
103: reduce-reduce conflict (reduce 11, reduce 57) on LTE
103: reduce-reduce conflict (reduce 11, reduce 57) on GTE
103: reduce-reduce conflict (reduce 11, reduce 57) on LS
103: reduce-reduce conflict (reduce 11, reduce 57) on RS
103: reduce-reduce conflict (reduce 11, reduce 57) on ADD
103: shift-reduce conflict (shift 18, reduce 57) on SUB
103: reduce-reduce conflict (reduce 11, reduce 57) on MUL
103: reduce-reduce conflict (reduce 11, reduce 57) on DIV
103: reduce-reduce conflict (reduce 11, reduce 57) on MOD
103: shift-reduce conflict (shift 20, reduce 57) on SADD
103: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 103
	while_stmt : WHILE LE expr RE . stmt
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt  goto 111
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


104: shift-reduce conflict (shift 6, reduce 11) on error
104: shift-reduce conflict (shift 7, reduce 11) on ID
104: shift-reduce conflict (shift 8, reduce 11) on INT
104: shift-reduce conflict (shift 9, reduce 11) on FOR
104: shift-reduce conflict (shift 10, reduce 11) on WHILE
104: shift-reduce conflict (shift 11, reduce 11) on IF
104: shift-reduce conflict (shift 12, reduce 11) on LB
104: shift-reduce conflict (shift 13, reduce 11) on SEMI
104: shift-reduce conflict (shift 14, reduce 11) on TYPE
104: shift-reduce conflict (shift 15, reduce 11) on CHAR
104: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
104: shift-reduce conflict (shift 17, reduce 11) on INPUT
104: shift-reduce conflict (shift 18, reduce 11) on SUB
104: shift-reduce conflict (shift 19, reduce 11) on bNOT
104: shift-reduce conflict (shift 20, reduce 11) on SADD
104: shift-reduce conflict (shift 21, reduce 11) on SSUB
104: shift-reduce conflict (shift 22, reduce 11) on NOT
104: shift-reduce conflict (shift 23, reduce 11) on LE
104: shift-reduce conflict (shift 13, reduce 57) on SEMI
104: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
104: reduce-reduce conflict (reduce 11, reduce 57) on OR
104: reduce-reduce conflict (reduce 11, reduce 57) on AND
104: reduce-reduce conflict (reduce 11, reduce 57) on bOR
104: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
104: reduce-reduce conflict (reduce 11, reduce 57) on bAND
104: reduce-reduce conflict (reduce 11, reduce 57) on EQ
104: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
104: reduce-reduce conflict (reduce 11, reduce 57) on LT
104: reduce-reduce conflict (reduce 11, reduce 57) on GT
104: reduce-reduce conflict (reduce 11, reduce 57) on LTE
104: reduce-reduce conflict (reduce 11, reduce 57) on GTE
104: reduce-reduce conflict (reduce 11, reduce 57) on LS
104: reduce-reduce conflict (reduce 11, reduce 57) on RS
104: reduce-reduce conflict (reduce 11, reduce 57) on ADD
104: shift-reduce conflict (shift 18, reduce 57) on SUB
104: reduce-reduce conflict (reduce 11, reduce 57) on MUL
104: reduce-reduce conflict (reduce 11, reduce 57) on DIV
104: reduce-reduce conflict (reduce 11, reduce 57) on MOD
104: shift-reduce conflict (shift 20, reduce 57) on SADD
104: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 104
	if_stmt : IF LE expr RE . stmt ELSE stmt
	if_stmt : IF LE expr RE . stmt
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt  goto 112
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


105: shift-reduce conflict (shift 18, reduce 57) on SUB
105: shift-reduce conflict (shift 20, reduce 57) on SADD
105: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 105
	init : ID $$1 ASSIGN . expr
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 113


state 106
	idlist : idlist COM ID .  (18)
	init : ID . $$1 ASSIGN expr
	$$1 : .  (22)

	ASSIGN  reduce 22
	.  reduce 18

	$$1  goto 77


state 107
	idlist : idlist COM init .  (19)

	.  reduce 19


state 108
	output_stmt : OUTPUT LE expr RE . SEMI

	SEMI  shift 114


state 109
	input_stmt : INPUT LE expr RE . SEMI

	SEMI  shift 115


state 110
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	for_stmt : FOR LE expr SEMI expr . SEMI expr RE stmt
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	SEMI  shift 116
	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72


state 111
	while_stmt : WHILE LE expr RE stmt .  (27)

	.  reduce 27


112: shift-reduce conflict (shift 117, reduce 24) on ELSE
state 112
	if_stmt : IF LE expr RE stmt . ELSE stmt
	if_stmt : IF LE expr RE stmt .  (24)

	ELSE  shift 117
	.  reduce 24


state 113
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	init : ID $$1 ASSIGN expr .  (23)
	expr : expr . EQ expr
	expr : expr . LTE expr
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	.  reduce 23


state 114
	output_stmt : OUTPUT LE expr RE SEMI .  (15)

	.  reduce 15


state 115
	input_stmt : INPUT LE expr RE SEMI .  (16)

	.  reduce 16


116: shift-reduce conflict (shift 18, reduce 57) on SUB
116: shift-reduce conflict (shift 20, reduce 57) on SADD
116: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 116
	for_stmt : FOR LE expr SEMI expr SEMI . expr RE stmt
	expr : .  (57)

	error  shift 42
	ID  shift 7
	INT  shift 8
	CHAR  shift 15
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 57

	expr  goto 118


117: shift-reduce conflict (shift 6, reduce 11) on error
117: shift-reduce conflict (shift 7, reduce 11) on ID
117: shift-reduce conflict (shift 8, reduce 11) on INT
117: shift-reduce conflict (shift 9, reduce 11) on FOR
117: shift-reduce conflict (shift 10, reduce 11) on WHILE
117: shift-reduce conflict (shift 11, reduce 11) on IF
117: shift-reduce conflict (shift 12, reduce 11) on LB
117: shift-reduce conflict (shift 13, reduce 11) on SEMI
117: shift-reduce conflict (shift 14, reduce 11) on TYPE
117: shift-reduce conflict (shift 15, reduce 11) on CHAR
117: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
117: shift-reduce conflict (shift 17, reduce 11) on INPUT
117: shift-reduce conflict (shift 18, reduce 11) on SUB
117: shift-reduce conflict (shift 19, reduce 11) on bNOT
117: shift-reduce conflict (shift 20, reduce 11) on SADD
117: shift-reduce conflict (shift 21, reduce 11) on SSUB
117: shift-reduce conflict (shift 22, reduce 11) on NOT
117: shift-reduce conflict (shift 23, reduce 11) on LE
117: shift-reduce conflict (shift 13, reduce 57) on SEMI
117: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
117: reduce-reduce conflict (reduce 11, reduce 57) on OR
117: reduce-reduce conflict (reduce 11, reduce 57) on AND
117: reduce-reduce conflict (reduce 11, reduce 57) on bOR
117: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
117: reduce-reduce conflict (reduce 11, reduce 57) on bAND
117: reduce-reduce conflict (reduce 11, reduce 57) on EQ
117: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
117: reduce-reduce conflict (reduce 11, reduce 57) on LT
117: reduce-reduce conflict (reduce 11, reduce 57) on GT
117: reduce-reduce conflict (reduce 11, reduce 57) on LTE
117: reduce-reduce conflict (reduce 11, reduce 57) on GTE
117: reduce-reduce conflict (reduce 11, reduce 57) on LS
117: reduce-reduce conflict (reduce 11, reduce 57) on RS
117: reduce-reduce conflict (reduce 11, reduce 57) on ADD
117: shift-reduce conflict (shift 18, reduce 57) on SUB
117: reduce-reduce conflict (reduce 11, reduce 57) on MUL
117: reduce-reduce conflict (reduce 11, reduce 57) on DIV
117: reduce-reduce conflict (reduce 11, reduce 57) on MOD
117: shift-reduce conflict (shift 20, reduce 57) on SADD
117: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 117
	if_stmt : IF LE expr RE stmt ELSE . stmt
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt  goto 119
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


state 118
	expr : expr . GTE expr
	expr : expr . bAND expr
	expr : expr . bOR expr
	expr : expr . NEQ expr
	expr : expr . EQ expr
	expr : expr . LTE expr
	for_stmt : FOR LE expr SEMI expr SEMI expr . RE stmt
	expr : expr . LS expr
	expr : expr . AND expr
	expr : expr . SUB expr
	expr : expr . GT expr
	expr : expr . SSUB
	expr : expr . DIV expr
	expr : expr . ASSIGN expr
	expr : expr . MUL expr
	expr : expr . ADD expr
	expr : expr . RS expr
	expr : expr . OR expr
	expr : expr . LT expr
	expr : expr . bXOR expr
	expr : expr . MOD expr
	expr : expr . SADD

	ASSIGN  shift 52
	OR  shift 53
	AND  shift 54
	bOR  shift 55
	bXOR  shift 56
	bAND  shift 57
	EQ  shift 58
	NEQ  shift 59
	LT  shift 60
	GT  shift 61
	LTE  shift 62
	GTE  shift 63
	LS  shift 64
	RS  shift 65
	ADD  shift 66
	SUB  shift 67
	MUL  shift 68
	DIV  shift 69
	MOD  shift 70
	SADD  shift 71
	SSUB  shift 72
	RE  shift 120


state 119
	if_stmt : IF LE expr RE stmt ELSE stmt .  (25)

	.  reduce 25


120: shift-reduce conflict (shift 6, reduce 11) on error
120: shift-reduce conflict (shift 7, reduce 11) on ID
120: shift-reduce conflict (shift 8, reduce 11) on INT
120: shift-reduce conflict (shift 9, reduce 11) on FOR
120: shift-reduce conflict (shift 10, reduce 11) on WHILE
120: shift-reduce conflict (shift 11, reduce 11) on IF
120: shift-reduce conflict (shift 12, reduce 11) on LB
120: shift-reduce conflict (shift 13, reduce 11) on SEMI
120: shift-reduce conflict (shift 14, reduce 11) on TYPE
120: shift-reduce conflict (shift 15, reduce 11) on CHAR
120: shift-reduce conflict (shift 16, reduce 11) on OUTPUT
120: shift-reduce conflict (shift 17, reduce 11) on INPUT
120: shift-reduce conflict (shift 18, reduce 11) on SUB
120: shift-reduce conflict (shift 19, reduce 11) on bNOT
120: shift-reduce conflict (shift 20, reduce 11) on SADD
120: shift-reduce conflict (shift 21, reduce 11) on SSUB
120: shift-reduce conflict (shift 22, reduce 11) on NOT
120: shift-reduce conflict (shift 23, reduce 11) on LE
120: shift-reduce conflict (shift 13, reduce 57) on SEMI
120: reduce-reduce conflict (reduce 11, reduce 57) on ASSIGN
120: reduce-reduce conflict (reduce 11, reduce 57) on OR
120: reduce-reduce conflict (reduce 11, reduce 57) on AND
120: reduce-reduce conflict (reduce 11, reduce 57) on bOR
120: reduce-reduce conflict (reduce 11, reduce 57) on bXOR
120: reduce-reduce conflict (reduce 11, reduce 57) on bAND
120: reduce-reduce conflict (reduce 11, reduce 57) on EQ
120: reduce-reduce conflict (reduce 11, reduce 57) on NEQ
120: reduce-reduce conflict (reduce 11, reduce 57) on LT
120: reduce-reduce conflict (reduce 11, reduce 57) on GT
120: reduce-reduce conflict (reduce 11, reduce 57) on LTE
120: reduce-reduce conflict (reduce 11, reduce 57) on GTE
120: reduce-reduce conflict (reduce 11, reduce 57) on LS
120: reduce-reduce conflict (reduce 11, reduce 57) on RS
120: reduce-reduce conflict (reduce 11, reduce 57) on ADD
120: shift-reduce conflict (shift 18, reduce 57) on SUB
120: reduce-reduce conflict (reduce 11, reduce 57) on MUL
120: reduce-reduce conflict (reduce 11, reduce 57) on DIV
120: reduce-reduce conflict (reduce 11, reduce 57) on MOD
120: shift-reduce conflict (shift 20, reduce 57) on SADD
120: shift-reduce conflict (shift 21, reduce 57) on SSUB
state 120
	for_stmt : FOR LE expr SEMI expr SEMI expr RE . stmt
	stmt : .  (11)
	expr : .  (57)

	error  shift 6
	ID  shift 7
	INT  shift 8
	FOR  shift 9
	WHILE  shift 10
	IF  shift 11
	LB  shift 12
	SEMI  shift 13
	TYPE  shift 14
	CHAR  shift 15
	OUTPUT  shift 16
	INPUT  shift 17
	SUB  shift 18
	bNOT  shift 19
	SADD  shift 20
	SSUB  shift 21
	NOT  shift 22
	LE  shift 23
	.  reduce 11

	if_stmt  goto 24
	while_stmt  goto 25
	stmt  goto 121
	for_stmt  goto 28
	decl_stmt  goto 29
	expr  goto 30
	output_stmt  goto 31
	input_stmt  goto 32


state 121
	for_stmt : FOR LE expr SEMI expr SEMI expr RE stmt .  (26)

	.  reduce 26


##############################################################################
# Summary
##############################################################################

State 5 contains 22 shift-reduce conflict(s)
State 5 contains 18 reduce-reduce conflict(s)
State 6 contains 22 reduce-reduce conflict(s)
State 12 contains 22 shift-reduce conflict(s)
State 12 contains 18 reduce-reduce conflict(s)
State 18 contains 3 shift-reduce conflict(s)
State 19 contains 3 shift-reduce conflict(s)
State 20 contains 3 shift-reduce conflict(s)
State 21 contains 3 shift-reduce conflict(s)
State 22 contains 3 shift-reduce conflict(s)
State 23 contains 3 shift-reduce conflict(s)
State 26 contains 23 shift-reduce conflict(s)
State 26 contains 18 reduce-reduce conflict(s)
State 33 contains 3 shift-reduce conflict(s)
State 34 contains 3 shift-reduce conflict(s)
State 35 contains 3 shift-reduce conflict(s)
State 36 contains 23 shift-reduce conflict(s)
State 36 contains 18 reduce-reduce conflict(s)
State 40 contains 3 shift-reduce conflict(s)
State 41 contains 3 shift-reduce conflict(s)
State 52 contains 3 shift-reduce conflict(s)
State 53 contains 3 shift-reduce conflict(s)
State 54 contains 3 shift-reduce conflict(s)
State 55 contains 3 shift-reduce conflict(s)
State 56 contains 3 shift-reduce conflict(s)
State 57 contains 3 shift-reduce conflict(s)
State 58 contains 3 shift-reduce conflict(s)
State 59 contains 3 shift-reduce conflict(s)
State 60 contains 3 shift-reduce conflict(s)
State 61 contains 3 shift-reduce conflict(s)
State 62 contains 3 shift-reduce conflict(s)
State 63 contains 3 shift-reduce conflict(s)
State 64 contains 3 shift-reduce conflict(s)
State 65 contains 3 shift-reduce conflict(s)
State 66 contains 3 shift-reduce conflict(s)
State 67 contains 3 shift-reduce conflict(s)
State 68 contains 3 shift-reduce conflict(s)
State 69 contains 3 shift-reduce conflict(s)
State 70 contains 3 shift-reduce conflict(s)
State 102 contains 3 shift-reduce conflict(s)
State 103 contains 22 shift-reduce conflict(s)
State 103 contains 18 reduce-reduce conflict(s)
State 104 contains 22 shift-reduce conflict(s)
State 104 contains 18 reduce-reduce conflict(s)
State 105 contains 3 shift-reduce conflict(s)
State 112 contains 1 shift-reduce conflict(s)
State 116 contains 3 shift-reduce conflict(s)
State 117 contains 22 shift-reduce conflict(s)
State 117 contains 18 reduce-reduce conflict(s)
State 120 contains 22 shift-reduce conflict(s)
State 120 contains 18 reduce-reduce conflict(s)


43 token(s), 14 nonterminal(s)
60 grammar rule(s), 122 state(s)


##############################################################################
# End of File
##############################################################################
