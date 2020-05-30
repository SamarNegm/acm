section	.text
   global _start         ;must be declared for using gcc

_start:	                 ;tell linker entry point

SYS_EXIT  equ 1
SYS_WRITE equ 4
STDIN     equ 0
STDOUT    equ 1
SYS_READ  equ 3
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
section .bss           ;Uninitialized data

;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;


include 'emu8086.inc'



org  100h; set location counter to 100h



jmp CodeStart



DataStart:

    promptMsg db "enter a number> ", 0

    minMsg db "the smallest number is ", 0

    promptMsgtwo db "enter the second number> ", 0

    newline db 13, 10, 0

    num1 dw ?

    num2 dw ?

    numSmall dw ?



CodeStart:



   ; prompt user to enter in a number

    mov si, offset promptMsg

    call print_string



   ; read in the number into cx

    call scan_num



   ; move the number to a variable

    mov num1, cx



   ; advance cursor to the next line

    mov si, offset newline

    call print_string



   ; prompt user to enter in a number

    mov si, offset promptMsgtwo

    call print_string



   ; read in the number into cx

    call scan_num



   ; move the number to a variable

    mov num2, cx



   ; advance cursor to the next line

    mov si, offset newline

    call print_string



   ;compare values

    CMP num1, num2



   ; print min message

    mov si, offset minMsg

    call print_string



    mov ax, numSmall

    call print_num

    EndLabel:

    ret



DEFINE_PRINT_STRING

DEFINE_SCAN_NUM

DEFINE_PRINT_NUM

DEFINE_PRINT_NUM_UNS

