global cualComprobar
cualComprobar:
  CMP [cantJug], byte 49
  JE comprobarGanador1
  CMP [cantJug], byte 50
  JE comprobarGanador2
  JMP comprobarGanador3

comprobarGanador1:
  CMP [totalSumaJug1], byte 69
  JG ganaCPU
  xor bl, bl
  mov bl, [totalSumaCPU]
  CMP bl, [totalSumaJug1]

  JGE ganaCPU
  JMP ganaJugador1

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

jugMayorJug3: ;    Compara entre jugador y jugador3
  CMP [totalSumaJug3], byte 69
  JG jugMayorCPU
  mov bl, [totalSumaJug3]
  CMP [sumaMayor], bl
  JG jugMayorCPU
  mov [sumaMayor], bl
  mov [turnoJug], byte 3
  JMP jugMayorCPU

jugMayorCPU: ;    Compara entre jugador y CPU
  mov bl, [totalSumaCPU]
  CMP [sumaMayor], bl
  JLE ganaCPU
  CMP [turnoJug], byte 1
  JE ganaJugador1
  CMP [turnoJug], byte 2
  JE ganaJugador2
  JMP ganaJugador3

ganaJugador1:
  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug1
  mov rdx, lenSumJug1
  syscall

  mov ax, [totalSumaJug1]
  mov [total], ax
  call normalizarTotal

  call imprimirSumaMJ

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaCPU
  mov rdx, lenSumCPU
  syscall

  mov ax, [totalSumaCPU]
  mov [total], ax
  call normalizarTotal
  
  mov rax, 1
  mov rdi, 1
  mov rsi, gano1
  mov rdx, lenG1
  syscall
  JMP jugarOtra

ganaJugador2:
  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug1
  mov rdx, lenSumJug1
  syscall

  mov ax, [totalSumaJug1]
  mov [total], ax
  call normalizarTotal

  call imprimirSumaMJ

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaCPU
  mov rdx, lenSumCPU
  syscall

  mov ax, [totalSumaCPU]
  mov [total], ax
  call normalizarTotal
  
  mov rax, 1
  mov rdi, 1
  mov rsi, gano2
  mov rdx, lenG2
  syscall
  JMP jugarOtra

ganaJugador3:
  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug1
  mov rdx, lenSumJug1
  syscall

  mov ax, [totalSumaJug1]
  mov [total], ax
  call normalizarTotal

  call imprimirSumaMJ

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaCPU
  mov rdx, lenSumCPU
  syscall

  mov ax, [totalSumaCPU]
  mov [total], ax
  call normalizarTotal
  
  mov rax, 1
  mov rdi, 1
  mov rsi, gano3
  mov rdx, lenG3
  syscall
  JMP jugarOtra

ganaCPU:
  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug1
  mov rdx, lenSumJug1
  syscall

  mov ax, [totalSumaJug1]
  mov [total], ax
  call normalizarTotal

  call imprimirSumaMJ

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaCPU
  mov rdx, lenSumCPU
  syscall

  mov ax, [totalSumaCPU]
  mov [total], ax
  call normalizarTotal

  mov rax, 1
  mov rdi, 1
  mov rsi, perder
  mov rdx, lenP
  syscall
  JMP jugarOtra

ganaTodos:
  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug1
  mov rdx, lenSumJug1
  syscall

  mov ax, [totalSumaJug1]
  mov [total], ax
  call normalizarTotal

  call imprimirSumaMJ

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaCPU
  mov rdx, lenSumCPU
  syscall

  mov ax, [totalSumaCPU]
  mov [total], ax
  call normalizarTotal

  mov rax, 1
  mov rdi, 1
  mov rsi, ganamos
  mov rdx, lenGanamos
  syscall
  JMP jugarOtra

imprimirSumaMJ:
  CMP [cantJug], byte 50
  JE imprimirJug2
  CMP [cantJug], byte 51
  JE imprimirJug3
  ret

imprimirJug2:
  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug2
  mov rdx, lenSumJug2
  syscall

  mov ax, [totalSumaJug2]
  mov [total], ax
  call normalizarTotal
  ret

imprimirJug3:
  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug2
  mov rdx, lenSumJug2
  syscall

  mov ax, [totalSumaJug2]
  mov [total], ax
  call normalizarTotal

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaJug3
  mov rdx, lenSumJug3
  syscall

  mov ax, [totalSumaJug3]
  mov [total], ax
  call normalizarTotal
  ret