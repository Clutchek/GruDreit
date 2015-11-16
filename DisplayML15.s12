	ORG	$1000
	
DisplayOne	EQU	$09C2
DisplayTwo	EQU	$09C3


	LDX	#tabell
start:	JSR	DisplayML15
	BRA	start
	
tabell: FCB	1,2,3,4,5,6

DisplayML15:
	MOVB	#1,DisplayOne
	MOVB	#$D0,DisplayTwo
	MOVB	#0,DisplayOne
	LDAA	#0
	JMP	DisplayML15_Loop
	
DisplayML15_Success:
	MOVB	#0,DisplayTwo
	MOVB	#0,DisplayTwo
	RTS
	
DisplayML15_Loop:
	;Nej
	CMPA	#6
	BEQ	DisplayML15_Success
	LDAB	A,X
	STAB	DisplayTwo
	INCA
	BRA	DisplayML15_Loop
	

FisplayML15:
	LDAA	#1
	STAA	$9C2
	LDAA	#$D0
	STAA	$9C3
	LDAA	#0
	STAA	$9C2
	
