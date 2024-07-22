global cualComprobar
cualComprobar:
  CMP [cantJug], byte 49
  JE comprobarGanador1
  CMP [cantJug], byte 50
  JE comprobarGanador2
  JMP comprobarGanador3

global comprobarGanador1
comprobarGanador1:
  CMP [totalSumaJug1], byte 69
  JG ganaCPU
  xor bl, bl
  mov bl, [totalSumaCPU]
  CMP bl, [totalSumaJug1]

  JGE ganaCPU
  JMP ganaJugador1

global comprobarGanador2
comprobarGanador2:
  CMP [totalSumaJug1], byte 69
  mov bl, [totalSumaJug2]
  mov [sumaMayor], bl
  mov [turnoJug], byte 2
  JG jugMayorCPU
  CMP [totalSumaJug2], byte 69
  mov bl, [totalSumaJug1]
  mov [sumaMayor], bl
  mov [turnoJug], byte 1
  JG jugMayorCPU
  CMP bl, [totalSumaJug2]
  mov [sumaMayor], bl
  mov [turnoJug], byte 1
  JG jugMayorCPU ;    El jugador1 es mayor que el jugador2
  mov bl, [totalSumaJug2]
  mov [sumaMayor], bl
  mov [turnoJug], byte 2
  JMP jugMayorCPU ;    El jugador2 es mayor que el jugador1

global comprobarGanador3
comprobarGanador3:
  CMP [totalSumaJug1], byte 69
  mov bl, [totalSumaJug2]
  mov [sumaMayor], bl
  mov [turnoJug], byte 2
  JG jugMayorJug3
  CMP [totalSumaJug2], byte 69
  mov bl, [totalSumaJug1]
  mov [sumaMayor], bl
  mov [turnoJug], byte 1
  JG jugMayorJug3
  CMP bl, [totalSumaJug2]
  mov [sumaMayor], bl
  mov [turnoJug], byte 1
  JG jugMayorJug3 ;    El jugador1 es mayor que el jugador2
  mov bl, [totalSumaJug2]
  mov [sumaMayor], bl
  mov [turnoJug], byte 2
  JMP jugMayorJug3 ;    El jugador2 es mayor que el jugador1

global jugMayorJug3
jugMayorJug3: ;    Compara entre jugador y jugador3
  CMP [totalSumaJug3], byte 69
  JG jugMayorCPU
  mov bl, [totalSumaJug3]
  CMP [sumaMayor], bl
  JG jugMayorCPU
  mov [sumaMayor], bl
  mov [turnoJug], byte 3
  JMP jugMayorCPU

global jugMayorCPU
jugMayorCPU: ;    Compara entre jugador y CPU
  mov bl, [totalSumaCPU]
  CMP [sumaMayor], bl
  JLE ganaCPU
  CMP [turnoJug], byte 1
  JE ganaJugador1
  CMP [turnoJug], byte 2
  JE ganaJugador2
  JMP ganaJugador3

global ganaJugador1
ganaJugador1:
  xor rax,rax
  mov rax, gano1
  ret

global ganaJugador2
ganaJugador2:
  xor rax,rax
  mov rax, gano2
  ret

global ganaJugador3
ganaJugador3:
  xor rax,rax
  mov rax, gano3
  ret

global ganaCPU
ganaCPU:
  xor rax,rax
  mov rax, perder
  ret

global ganaTodos
ganaTodos:
  xor rax,rax
  mov rax, ganamos
  ret