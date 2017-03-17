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
# lexer.v
# Lex verbose file generated from lexer.l.
# 
# Date: 11/22/16
# Time: 10:18:50
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  int|double|char

    2  if

    3  for

    4  while

    5  \n

    6  [\t ]

    7  -?([1-9])([0-9])*

    8  ([a-zA-Z\_])([0-9]|[a-zA-Z\_])*

    9  "+"

   10  "-"

   11  "*"

   12  "/"

   13  "("

   14  ")"

   15  ;

   16  "="

   17  "=="

   18  "{"

   19  "}"

   20  ","


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x28               goto 5
	0x29               goto 6
	0x2a               goto 7
	0x2b               goto 8
	0x2c               goto 9
	0x2d               goto 10
	0x2f               goto 11
	0x31 - 0x39 (9)    goto 12
	0x3b               goto 13
	0x3d               goto 14
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x62 (2)    goto 15
	0x63               goto 16
	0x64               goto 17
	0x65               goto 15
	0x66               goto 18
	0x67 - 0x68 (2)    goto 15
	0x69               goto 19
	0x6a - 0x76 (13)   goto 15
	0x77               goto 20
	0x78 - 0x7a (3)    goto 15
	0x7b               goto 21
	0x7d               goto 22


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x28               goto 5
	0x29               goto 6
	0x2a               goto 7
	0x2b               goto 8
	0x2c               goto 9
	0x2d               goto 10
	0x2f               goto 11
	0x31 - 0x39 (9)    goto 12
	0x3b               goto 13
	0x3d               goto 14
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x62 (2)    goto 15
	0x63               goto 16
	0x64               goto 17
	0x65               goto 15
	0x66               goto 18
	0x67 - 0x68 (2)    goto 15
	0x69               goto 19
	0x6a - 0x76 (13)   goto 15
	0x77               goto 20
	0x78 - 0x7a (3)    goto 15
	0x7b               goto 21
	0x7d               goto 22


state 3
	match 6


state 4
	match 5


state 5
	match 13


state 6
	match 14


state 7
	match 11


state 8
	match 9


state 9
	match 20


state 10
	0x31 - 0x39 (9)    goto 12

	match 10


state 11
	match 12


state 12
	0x30 - 0x39 (10)   goto 12

	match 7


state 13
	match 15


state 14
	0x3d               goto 23

	match 16


state 15
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x7a (26)   goto 15

	match 8


state 16
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x67 (7)    goto 15
	0x68               goto 24
	0x69 - 0x7a (18)   goto 15

	match 8


state 17
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x6e (14)   goto 15
	0x6f               goto 25
	0x70 - 0x7a (11)   goto 15

	match 8


state 18
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x6e (14)   goto 15
	0x6f               goto 26
	0x70 - 0x7a (11)   goto 15

	match 8


state 19
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x65 (5)    goto 15
	0x66               goto 27
	0x67 - 0x6d (7)    goto 15
	0x6e               goto 28
	0x6f - 0x7a (12)   goto 15

	match 8


state 20
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x67 (7)    goto 15
	0x68               goto 29
	0x69 - 0x7a (18)   goto 15

	match 8


state 21
	match 18


state 22
	match 19


state 23
	match 17


state 24
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61               goto 30
	0x62 - 0x7a (25)   goto 15

	match 8


state 25
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x74 (20)   goto 15
	0x75               goto 31
	0x76 - 0x7a (5)    goto 15

	match 8


state 26
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x71 (17)   goto 15
	0x72               goto 32
	0x73 - 0x7a (8)    goto 15

	match 8


state 27
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x7a (26)   goto 15

	match 2


state 28
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x73 (19)   goto 15
	0x74               goto 33
	0x75 - 0x7a (6)    goto 15

	match 8


state 29
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x68 (8)    goto 15
	0x69               goto 34
	0x6a - 0x7a (17)   goto 15

	match 8


state 30
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x71 (17)   goto 15
	0x72               goto 33
	0x73 - 0x7a (8)    goto 15

	match 8


state 31
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61               goto 15
	0x62               goto 35
	0x63 - 0x7a (24)   goto 15

	match 8


state 32
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x7a (26)   goto 15

	match 3


state 33
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x7a (26)   goto 15

	match 1


state 34
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x6b (11)   goto 15
	0x6c               goto 36
	0x6d - 0x7a (14)   goto 15

	match 8


state 35
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x6b (11)   goto 15
	0x6c               goto 37
	0x6d - 0x7a (14)   goto 15

	match 8


state 36
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x64 (4)    goto 15
	0x65               goto 38
	0x66 - 0x7a (21)   goto 15

	match 8


state 37
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x64 (4)    goto 15
	0x65               goto 33
	0x66 - 0x7a (21)   goto 15

	match 8


state 38
	0x30 - 0x39 (10)   goto 15
	0x41 - 0x5a (26)   goto 15
	0x5f               goto 15
	0x61 - 0x7a (26)   goto 15

	match 4


#############################################################################
# Summary
#############################################################################

1 start state(s)
20 expression(s), 38 state(s)


#############################################################################
# End of File
#############################################################################
