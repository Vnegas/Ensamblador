global comprobarGanador1
comprobarGanador1:      ;ecx = totalSumaJug1 - edx = totalSumaCPU
  CMP edx, 21
  JG ganaJugador1

  CMP ecx, 21
  JG ganaCPU



  CMP edx, ecx

  JGE ganaCPU
  JMP ganaJugador1

global comprobarGanador2
comprobarGanador2:      ;ecx = totalSumaJug1 - edx = totalSumaJug2 - r8d = totalSumaCPU
  CMP ecx, 21
  mov ebx, edx
  mov eax, ebx ;eax = sumaMayor
  mov r9b, 2 ;r9b = turnoJug
  JG jugMayorCPU
  CMP edx, 21
  mov ebx, ecx
  mov eax, ebx
  mov r9b, 1
  JG jugMayorCPU
  CMP ebx, edx
  mov eax, ebx
  mov r9b, 1
  JG jugMayorCPU        ;El jugador1 es mayor que el jugador2
  mov ebx, edx
  mov eax, ebx
  mov r9b, 2
  JMP jugMayorCPU       ;El jugador2 es mayor que el jugador1

global comprobarGanador3
comprobarGanador3:      ;ecx = totalSumaJug1 - edx = totalSumaJug2 - r8d = totalSumaJug3 - r10d = totalSumaCPU
  CMP ecx, 21
  mov ebx, edx
  mov eax, ebx
  mov r9b, 2 ;r9b = turnoJug
  JG jugMayorJug3
  CMP edx, 21
  mov ebx, ecx
  mov eax, ebx
  mov r9b, 1
  JG jugMayorJug3
  CMP ebx, edx
  mov eax, ebx
  mov r9b, 1
  JG jugMayorJug3       ;El jugador1 es mayor que el jugador2
  mov ebx, edx
  mov eax, ebx
  mov r9b, 2
  JMP jugMayorJug3      ;jugador2 es mayor que el jugador1

global jugMayorJug3     ;Compara entre jugador y jugador3
jugMayorJug3:      ;ecx = totalSumaJug1 - edx = totalSumaJug2 - r8d = totalSumaJug3
  CMP r8d, 21
  JG jugMayorCPU
  mov ebx, r8d
  CMP eax, ebx
  JG jugMayorCPU
  mov eax, ebx
  mov r9b, 3 ;r9b = turnoJug
  JMP jugMayorCPU

global jugMayorCPU
jugMayorCPU: ;Compara entre jugador y CPU
  mov ebx, r8d
  CMP eax, ebx ;eax = sumaMayor
  JLE ganaCPU
  CMP r9b, 1 ;r9b = turnoJug
  JE ganaJugador1
  CMP r9b, 2
  JE ganaJugador2
  JMP ganaJugador3

global ganaJugador1
ganaJugador1:
  xor rax,rax
  mov rax, 1
  ret

global ganaJugador2
ganaJugador2:
  xor rax,rax
  mov rax, 2
  ret

global ganaJugador3
ganaJugador3:
  xor rax,rax
  mov rax, 3
  ret

global ganaCPU
ganaCPU:
  xor rax,rax
  mov rax, 4
  ret

global ganaTodos
ganaTodos:
  xor rax,rax
  mov rax, 5
  ret
