;Antony Picado, C15939 - Jimmy Castro, B91808 - Kenneth Osorio, C15734 - Sebastián Venegas, C18440
;https://replit.com/join/tapenleewa-mrafro

global _start

  section .rodata
  	cls: 	
      db `\033[2J\033[H`, 0
      lenCls equ $ - cls

  section .data
    integrantes: db "Integrantes: Antony Picado, Jimmy Castro, Kenneth Osorio, Sebastián Venegas", 0xa, "¡Bienvenido(a) a 21!", 0xa, 0xa,"Reglas del juego:", 0xa, "-El objetivo del juego es acumular con la suma de las cartas un valor cercano o igual a 21, sin sobrepasarse.", 0xa, "-En cada turno puede pedir una carta en caso de verlo necesario.", 0xa, "-En caso de haber un empate contra la casa, gana la casa", 0xa, "-Quien se pase de una suma total de 21, perderá automáticamente.", 0xa
    lenInt: equ $-integrantes
    gano1: db 0xa,"¡Ha ganado el jugador 1!", 0xa
    lenG1: equ $-gano1 ; define int in RAM
    gano2: db 0xa,"¡Ha ganado el jugador 2!", 0xa
    lenG2: equ $-gano2 ; define int in RAM
    gano3: db 0xa,"¡Ha ganado el jugador 3!", 0xa
    lenG3: equ $-gano3 ; define int in RAM
    ganamos: db 0xa, "¡Ganan todos los jugadores!"
    lenGanamos: equ $-ganamos
    cartasJug1: db 0xa, "Las cartas del jugador 1 son: "
    lenCartJ1: equ $-cartasJug1
    cartasJug2: db 0xa, "Las cartas del jugador 2 son: "
    lenCartJ2: equ $-cartasJug2
    cartasJug3: db 0xa, "Las cartas del jugador 3 son: "
    lenCartJ3: equ $-cartasJug3
    cartasCPU: db 0xa,"Las cartas de la máquina son: "
    lenCartCPU: equ $-cartasCPU
    perder: db 0xa, "¡Ha ganado el CPU!", 0xa      
    lenP: equ $-perder 
    espacio: db " y "
    lenEspacio: equ $-espacio
    turno1: db 0xa, 0xa, "        TURNO JUGADOR 1", 0xa
    lenTurno1: equ $-turno1
    turno2: db 0xa, "        TURNO JUGADOR 2", 0xa
    lenTurno2: equ $-turno2
    turno3: db 0xa, "        TURNO JUGADOR 3", 0xa
    lenTurno3: equ $-turno3
    turnoCPU: db 0xa, "        TURNO MÁQUINA", 0xa
    lenTurnoCPU: equ $-turnoCPU 
    pedirCartas: db 0xa,"¿Desea otra carta? Ingrese 1 si desea otra, si no, ingrese 2", 0xa
    lenPedir: equ $-pedirCartas
    volverJugar: db 0xa,"¿Desea volver a jugar? Ingrese 1 si desea volver a jugar, si no, ingrese 2", 0xa
    lenJugar: equ $-volverJugar
    sumaJug1: db 0xa, "La suma de las cartas del jugador 1 es de: "
    lenSumJug1: equ $-sumaJug1
    sumaJug2: db 0xa, "La suma de las cartas del jugador 2 es de: "
    lenSumJug2: equ $-sumaJug2
    sumaJug3: db 0xa, "La suma de las cartas del jugador 3 es de: "
    lenSumJug3: equ $-sumaJug3
    sumaParcialJug: db 0xa, "La suma parcial de sus cartas es de: "
    lenSumParcialJug: equ $-sumaParcialJug
    sumaCPU: db 0xa, "La suma de las cartas del CPU es de: "
    lenSumCPU: equ $-sumaCPU
    datoMalo: db 0xa, "El valor ingresado está erróneo."
    lenDatoMal: equ $-datoMalo
    cartaExtra: db 0xa, "Carta extra: "
    lenExtra: equ $-cartaExtra
    cartaAS: db 0xa, "Le salió como carta un As ", 0xa, "Ingrese 1 si desea utilizarla como un 1, ingrese 2 si desea utilizarla como un 11", 0xa
    lenCartaAS: equ $-cartaAS
    multijugador: db 0xa, "¿Cuántos jugadores van a jugar? (Máximo de jugadores permitidos: 3)", 0xa
    lenMultijugador: equ $-multijugador
    
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
  %include "errores.inc"

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

    mov rax, 1
    mov rdi, 1
    mov rsi, cls
    mov rdx, lenCls
    syscall
    
    mov rax, 1
    mov rdi, 1
    mov rsi, integrantes
    mov rdx, lenInt
    syscall

    call multiJug
    call primerasCartasJug

    JMP pedirCarta1

  multiJug: ;**GLOBAL
    mov rax, 1
    mov rdi, 1
    mov rsi, multijugador
    mov rdx, lenMultijugador
    syscall

    mov rax, 0
    mov rdi, 2
    mov rsi, cantJug
    mov rdx, 2
    syscall

    CMP [cantJug], byte 51
    JG datoErroneoJug

    CMP [cantJug], byte 49
    JL datoErroneoJug
    ret

  normalizarTotal:
    xor bx, bx
    mov bx, [total]
    mov [digito2], bl
    
    call normDigitos

    mov rax, 1
    mov rdi, 1
    mov rsi, digito1
    mov rdx, 2
    syscall

    mov rax, 1
    mov rdi, 1
    mov rsi, digito2
    mov rdx, 2
    syscall
    ret

  normDigitos:
    CMP [total], byte 68
    JGE mayor20
    CMP [total], byte 58
    JGE mayor10
    mov [digito1], byte 48
    ret

  mayor20:
    mov [digito1], byte 50
    sub [digito2], byte 20
    ret

  mayor10:
    mov [digito1], byte 49
    sub [digito2], byte 10
    ret

  jugarOtra: ;**GLOBAL
    mov rax, 1
    mov rdi, 1
    mov rsi, volverJugar
    mov rdx, lenJugar
    syscall

    mov rax, 0
    mov rdi, 2
    mov rsi, jugarNuevo
    mov rdx, 2
    syscall

    CMP [jugarNuevo], byte 50
    JG datoErroneoJugar
    JE end

    CMP [jugarNuevo], byte 49
    JE _start
    JMP datoErroneoJugar

  end:
    mov rax, 1
    mov rdi, 1
    mov rsi, cls
    mov rdx, lenCls
    syscall

    mov rax, 60
    mov rsi, 0
    syscall