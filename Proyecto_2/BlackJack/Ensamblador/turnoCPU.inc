inteligenciaCPU:
  call getNumDetenerse
  sub [numeroRandom],  byte 48
  mov bl, [numeroRandom]
  sub [numDetenerseCPU], byte bl 
  ret

controlAsCPU:
  CMP [numeroRandom], byte 49
  JE elegirValorAs
  ret

elegirValorAs:
  CMP [totalSumaCPU], byte 59
  JL cartaAs11CPU
  mov [numeroRandom], byte 49 ;si la suma total es mayor o igual a 11, el valor de AS será 1
  ret

cartaAs11CPU:
  mov [numeroRandom], byte 59 ;si la suma total es menor a 11, el valor de AS será 11
  ret

turnoMaquina:
  mov al, [numDetenerseCPU]
  CMP [totalSumaCPU], al
  JGE cualComprobar

  mov rax, 1
  mov rdi, 1
  mov rsi, turnoCPU
  mov rdx, lenTurnoCPU
  syscall

  mov rax, 1
  mov rdi, 1
  mov rsi, cartaExtra
  mov rdx, lenExtra
  syscall

  call getNumero
  call controlAsCPU
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  sub [totalSumaCPU], byte 48
  call cambiarLetras

  mov ax, [totalSumaCPU]
  mov [total], ax
  call normalizarTotal

  CMP [totalSumaCPU], byte 69 ;Verifica si se pasó de 21
  JG ganaTodos
  JE ganaCPU
  JMP turnoMaquina