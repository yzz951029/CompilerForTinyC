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
# _lexer.v
# Lex verbose file generated from _lexer.l.
# 
# Date: 12/27/16
# Time: 23:21:25
# 
# ALex Version: 2.07
#############################################################################


#############################################################################
# Expressions
#############################################################################

    1  main

    2  output

    3  input

    4  '[a-zA-Z\_]'

    5  "<="

    6  "^"

    7  ">="

    8  "%"

    9  "++"

   10  "--"

   11  "&&"

   12  "&"

   13  "||"

   14  "|"

   15  "~"

   16  "!="

   17  "!"

   18  "<<"

   19  ">>"

   20  "-"

   21  int|char

   22  if

   23  else

   24  for

   25  while

   26  \n

   27  [\t ]

   28  ([0-9])+

   29  ([a-zA-Z\_])([0-9]|[a-zA-Z\_])*

   30  "+"

   31  "*"

   32  "/"

   33  "("

   34  ")"

   35  ;

   36  "="

   37  "=="

   38  "{"

   39  "}"

   40  ","

   41  "<"

   42  ">"

   43  \/\/[^\n]*


#############################################################################
# States
#############################################################################

state 1
	INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x25               goto 6
	0x26               goto 7
	0x27               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5e               goto 22
	0x5f               goto 21
	0x61 - 0x62 (2)    goto 21
	0x63               goto 23
	0x64               goto 21
	0x65               goto 24
	0x66               goto 25
	0x67 - 0x68 (2)    goto 21
	0x69               goto 26
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 27
	0x6e               goto 21
	0x6f               goto 28
	0x70 - 0x76 (7)    goto 21
	0x77               goto 29
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 30
	0x7c               goto 31
	0x7d               goto 32
	0x7e               goto 33


state 2
	^INITIAL

	0x09               goto 3
	0x0a               goto 4
	0x20               goto 3
	0x21               goto 5
	0x25               goto 6
	0x26               goto 7
	0x27               goto 8
	0x28               goto 9
	0x29               goto 10
	0x2a               goto 11
	0x2b               goto 12
	0x2c               goto 13
	0x2d               goto 14
	0x2f               goto 15
	0x30 - 0x39 (10)   goto 16
	0x3b               goto 17
	0x3c               goto 18
	0x3d               goto 19
	0x3e               goto 20
	0x41 - 0x5a (26)   goto 21
	0x5e               goto 22
	0x5f               goto 21
	0x61 - 0x62 (2)    goto 21
	0x63               goto 23
	0x64               goto 21
	0x65               goto 24
	0x66               goto 25
	0x67 - 0x68 (2)    goto 21
	0x69               goto 26
	0x6a - 0x6c (3)    goto 21
	0x6d               goto 27
	0x6e               goto 21
	0x6f               goto 28
	0x70 - 0x76 (7)    goto 21
	0x77               goto 29
	0x78 - 0x7a (3)    goto 21
	0x7b               goto 30
	0x7c               goto 31
	0x7d               goto 32
	0x7e               goto 33


state 3
	match 27


state 4
	match 26


state 5
	0x3d               goto 34

	match 17


state 6
	match 8


state 7
	0x26               goto 35

	match 12


state 8
	0x41 - 0x5a (26)   goto 36
	0x5f               goto 36
	0x61 - 0x7a (26)   goto 36


state 9
	match 33


state 10
	match 34


state 11
	match 31


state 12
	0x2b               goto 37

	match 30


state 13
	match 40


state 14
	0x2d               goto 38

	match 20


state 15
	0x2f               goto 39

	match 32


state 16
	0x30 - 0x39 (10)   goto 16

	match 28


state 17
	match 35


state 18
	0x3c               goto 40
	0x3d               goto 41

	match 41


state 19
	0x3d               goto 42

	match 36


state 20
	0x3d               goto 43
	0x3e               goto 44

	match 42


state 21
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 29


state 22
	match 6


state 23
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 45
	0x69 - 0x7a (18)   goto 21

	match 29


state 24
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 46
	0x6d - 0x7a (14)   goto 21

	match 29


state 25
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6e (14)   goto 21
	0x6f               goto 47
	0x70 - 0x7a (11)   goto 21

	match 29


state 26
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x65 (5)    goto 21
	0x66               goto 48
	0x67 - 0x6d (7)    goto 21
	0x6e               goto 49
	0x6f - 0x7a (12)   goto 21

	match 29


state 27
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 50
	0x62 - 0x7a (25)   goto 21

	match 29


state 28
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 51
	0x76 - 0x7a (5)    goto 21

	match 29


state 29
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x67 (7)    goto 21
	0x68               goto 52
	0x69 - 0x7a (18)   goto 21

	match 29


state 30
	match 38


state 31
	0x7c               goto 53

	match 14


state 32
	match 39


state 33
	match 15


state 34
	match 16


state 35
	match 11


state 36
	0x27               goto 54


state 37
	match 9


state 38
	match 10


state 39
	0x00 - 0x09 (10)   goto 39
	0x0b - 0xff (245)  goto 39

	match 43


state 40
	match 18


state 41
	match 5


state 42
	match 37


state 43
	match 7


state 44
	match 19


state 45
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61               goto 55
	0x62 - 0x7a (25)   goto 21

	match 29


state 46
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x72 (18)   goto 21
	0x73               goto 56
	0x74 - 0x7a (7)    goto 21

	match 29


state 47
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 57
	0x73 - 0x7a (8)    goto 21

	match 29


state 48
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 22


state 49
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6f (15)   goto 21
	0x70               goto 58
	0x71 - 0x73 (3)    goto 21
	0x74               goto 59
	0x75 - 0x7a (6)    goto 21

	match 29


state 50
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 60
	0x6a - 0x7a (17)   goto 21

	match 29


state 51
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 61
	0x75 - 0x7a (6)    goto 21

	match 29


state 52
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x68 (8)    goto 21
	0x69               goto 62
	0x6a - 0x7a (17)   goto 21

	match 29


state 53
	match 13


state 54
	match 4


state 55
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x71 (17)   goto 21
	0x72               goto 59
	0x73 - 0x7a (8)    goto 21

	match 29


state 56
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 63
	0x66 - 0x7a (21)   goto 21

	match 29


state 57
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 24


state 58
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 64
	0x76 - 0x7a (5)    goto 21

	match 29


state 59
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 21


state 60
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6d (13)   goto 21
	0x6e               goto 65
	0x6f - 0x7a (12)   goto 21

	match 29


state 61
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6f (15)   goto 21
	0x70               goto 66
	0x71 - 0x7a (10)   goto 21

	match 29


state 62
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x6b (11)   goto 21
	0x6c               goto 67
	0x6d - 0x7a (14)   goto 21

	match 29


state 63
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 23


state 64
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 68
	0x75 - 0x7a (6)    goto 21

	match 29


state 65
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 1


state 66
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x74 (20)   goto 21
	0x75               goto 69
	0x76 - 0x7a (5)    goto 21

	match 29


state 67
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x64 (4)    goto 21
	0x65               goto 70
	0x66 - 0x7a (21)   goto 21

	match 29


state 68
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 3


state 69
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x73 (19)   goto 21
	0x74               goto 71
	0x75 - 0x7a (6)    goto 21

	match 29


state 70
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 25


state 71
	0x30 - 0x39 (10)   goto 21
	0x41 - 0x5a (26)   goto 21
	0x5f               goto 21
	0x61 - 0x7a (26)   goto 21

	match 2


#############################################################################
# Summary
#############################################################################

1 start state(s)
43 expression(s), 71 state(s)


#############################################################################
# End of File
#############################################################################
