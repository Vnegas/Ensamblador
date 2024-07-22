;Antony Picado, C15939 - Jimmy Castro, B91808 - Kenneth Osorio, C15734 - Sebastián Venegas, C18440
;https://replit.com/join/tapenleewa-mrafro

global _start
  section .data
    turno1: db "TURNO JUGADOR 1", 0
    turno2: db "TURNO JUGADOR 2", 0
    turno3: db "TURNO JUGADOR 3", 0
    turnoCPU: db "TURNO MÁQUINA", 0

  section .bss
    ;time resb 1


  section .text
  extern rand

  %include "D:\Universidad\PI\GIT\ProyectoIntegrador-Subgrupo3-Blackjack\BlackJack\cartas.inc"
  %include "D:\Universidad\PI\GIT\ProyectoIntegrador-Subgrupo3-Blackjack\BlackJack\turnoCPU.inc"
  %include "D:\Universidad\PI\GIT\ProyectoIntegrador-Subgrupo3-Blackjack\BlackJack\turnoJug.inc"
  %include "D:\Universidad\PI\GIT\ProyectoIntegrador-Subgrupo3-Blackjack\BlackJack\ganador.inc"

  _start:
    call inteligenciaCPU
    ret

  global jugarOtra
  jugarOtra:
    JMP _start2

  global _start2
  _start2:
    ret
