;Antony Picado, C15939 - Jimmy Castro, B91808 - Kenneth Osorio, C15734 - Sebastián Venegas, C18440
;https://replit.com/join/tapenleewa-mrafro

global _start
  section .data
    gano1: db "¡Ha ganado el jugador 1!", 0
    lenG1: equ $-gano1 ; define int in RAM
    gano2: db "¡Ha ganado el jugador 2!", 0
    lenG2: equ $-gano2 ; define int in RAM
    gano3: db "¡Ha ganado el jugador 3!", 0
    lenG3: equ $-gano3 ; define int in RAM
    ganamos: db "¡Ganan todos los jugadores!"
    lenGanamos: equ $-ganamos
    perder: db "¡Ha ganado el CPU!", 0  
    lenP: equ $-perder 

    turno1: db "TURNO JUGADOR 1", 0
    lenTurno1: equ $-turno1
    turno2: db "TURNO JUGADOR 2", 0
    lenTurno2: equ $-turno2
    turno3: db "TURNO JUGADOR 3", 0
    lenTurno3: equ $-turno3
    turnoCPU: db "TURNO MÁQUINA", 0
    lenTurnoCPU: equ $-turnoCPU 
    
  section .bss
    cantJug resb 2
    turnoJug resb 2

    numeroRandom resb 2
    total resb 3

    digito1 resb 2
    digito2 resb 2

    sumaMayor resb 2
  
    totalSumaJug1 resb 2
    totalSumaJug2 resb 2
    totalSumaJug3 resb 2

    pedirCartaJug resb 2

    AS resb 2
    cantAs resb 2
  
    totalSumaCPU resb 3
    numDetenerseCPU resb 2
  
    jugarNuevo resb 2
    cerebroCPU resb 2

    time: resb 2

  section .text
  %include "cartas.inc"
  %include "turnoCPU.inc"
  %include "turnoJug.inc"
  %include "ganador.inc"

  _start:
    mov [totalSumaJug1], byte 0
    mov [totalSumaJug2], byte 0
    mov [totalSumaJug3], byte 0
    mov [totalSumaCPU], byte 0
    mov [cantJug], byte 0
    mov [pedirCartaJug], byte 0
    mov [numeroRandom], byte 0
    mov [cantAs], byte 0
    mov [numDetenerseCPU], byte 69
    call inteligenciaCPU
    ret

  global multiJug
  multiJug:
    mov [cantJug], rdi
    ret

  global jugarOtra
  jugarOtra:
    JMP start2

  global _start2
  _start2:
    mov [totalSumaJug1], byte 0
    mov [totalSumaJug2], byte 0
    mov [totalSumaJug3], byte 0
    mov [totalSumaCPU], byte 0
    mov [cantJug], byte 0
    mov [pedirCartaJug], byte 0
    mov [numeroRandom], byte 0
    mov [cantAs], byte 0
    mov [numDetenerseCPU], byte 69
    ret