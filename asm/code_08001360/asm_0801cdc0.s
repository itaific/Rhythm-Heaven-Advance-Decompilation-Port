asm(".syntax unified \n\
\n\
.balign 4, 0 \n\
\n\
glabel func_0801cdc0 \n\
/* 0801cdc0 */ PUSH {LR} \n\
/* 0801cdc2 */ SUB SP, 0xC \n\
/* 0801cdc4 */ BL func_0800c3b8 \n\
/* 0801cdc8 */ LSLS R0, R0, 0x10 \n\
/* 0801cdca */ LSRS R0, R0, 0x10 \n\
/* 0801cdcc */ LDR R1, =0x0801cd91 @ !PossiblePointer \n\
/* 0801cdce */ MOVS R2, 0x0 @ Set R2 to 0x0 \n\
/* 0801cdd0 */ MOVS R3, 0x2 @ Set R3 to 0x2 \n\
/* 0801cdd2 */ BL func_0800856c \n\
/* 0801cdd6 */ BL func_0800e0ec \n\
/* 0801cdda */ MOVS R0, 0x0 @ Set R0 to 0x0 \n\
/* 0801cddc */ STR R0, [SP] \n\
/* 0801cdde */ MOVS R0, 0x1D @ Set R0 to 0x1D \n\
/* 0801cde0 */ STR R0, [SP, 0x4] \n\
/* 0801cde2 */ MOVS R0, 0x1 @ Set R0 to 0x1 \n\
/* 0801cde4 */ STR R0, [SP, 0x8] \n\
/* 0801cde6 */ MOVS R1, 0x1 @ Set R1 to 0x1 \n\
/* 0801cde8 */ MOVS R2, 0x0 @ Set R2 to 0x0 \n\
/* 0801cdea */ MOVS R3, 0x0 @ Set R3 to 0x0 \n\
/* 0801cdec */ BL func_0800e0a0 \n\
/* 0801cdf0 */ ADD SP, 0xC \n\
/* 0801cdf2 */ POP {R0} \n\
/* 0801cdf4 */ BX R0 \n\
\n\
.ltorg \n\
.balign 4, 0 \n\
.syntax divided");