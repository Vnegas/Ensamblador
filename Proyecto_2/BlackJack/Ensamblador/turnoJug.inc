cualTurno:
  CMP [cantJug], byte 49
  JE turnoMaquina
  CMP [turnoJug], byte 50
  JE pedirCarta2
  CMP [cantJug], byte 51
  JE pedirCarta3
  JMP turnoMaquina

global pedirCarta1
pedirCarta1:
  CMP [totalSumaJug1], byte 69 ; Se compara si se paso de 21
  mov [turnoJug], byte 50
  JG cualTurno

  mov rax, 1
  mov rdi, 1
  mov rsi, turno1
  mov rdx, lenTurno1
  syscall
  
  mov rax, 1
  mov rdi, 1
  mov rsi, pedirCartas
  mov rdx, lenPedir
  syscall

  mov rax, 0
  mov rdi, 2
  mov rsi, pedirCartaJug
  mov rdx, 2
  syscall

  CMP [pedirCartaJug], byte 50 ;Verifica la opción del usuario
  JG datoErroneo1
  JE cualTurno

  CMP [pedirCartaJug], byte 48
  JLE  datoErroneo1

  mov rax, 1
  mov rdi, 1
  mov rsi, cartaExtra
  mov rdx, lenExtra
  syscall

  call getNumero
  call verificarSuma1
  call cambiarLetras
  mov [turnoJug], byte 49
  call controlAs
  sub [totalSumaJug1], byte 48

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaParcialJug
  mov rdx, lenSumParcialJug
  syscall

  mov ax, [totalSumaJug1]
  mov [total], ax
  call normalizarTotal

  JMP pedirCarta1

pedirCarta2:
  CMP [totalSumaJug2], byte 69 ; Se compara si se paso de 21
  mov [turnoJug], byte 51
  JG cualTurno

  mov rax, 1
  mov rdi, 1
  mov rsi, turno2
  mov rdx, lenTurno2
  syscall
  
  mov rax, 1
  mov rdi, 1
  mov rsi, pedirCartas
  mov rdx, lenPedir
  syscall

  mov rax, 0
  mov rdi, 2
  mov rsi, pedirCartaJug
  mov rdx, 2
  syscall

  CMP [pedirCartaJug], byte 50 ;Verifica la opción del usuario
  JG datoErroneo2
  JE cualTurno

  CMP [pedirCartaJug], byte 48
  JLE  datoErroneo2

  mov rax, 1
  mov rdi, 1
  mov rsi, cartaExtra
  mov rdx, lenExtra
  syscall

  call getNumero
  call verificarSuma2
  call cambiarLetras
  mov [turnoJug], byte 50
  call controlAs
  sub [totalSumaJug2], byte 48

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaParcialJug
  mov rdx, lenSumParcialJug
  syscall

  mov ax, [totalSumaJug2]
  mov [total], ax
  call normalizarTotal

  JMP pedirCarta2

pedirCarta3:
  CMP [totalSumaJug3], byte 69 ; Se compara si se paso de 21
  JG turnoMaquina

  mov rax, 1
  mov rdi, 1
  mov rsi, turno3
  mov rdx, lenTurno3
  syscall
  
  mov rax, 1
  mov rdi, 1
  mov rsi, pedirCartas
  mov rdx, lenPedir
  syscall

  mov rax, 0
  mov rdi, 2
  mov rsi, pedirCartaJug
  mov rdx, 2
  syscall

  CMP [pedirCartaJug], byte 50 ;Verifica la opción del usuario
  JG datoErroneo3
  JE turnoMaquina

  CMP [pedirCartaJug], byte 48
  JLE  datoErroneo3

  mov rax, 1
  mov rdi, 1
  mov rsi, cartaExtra
  mov rdx, lenExtra
  syscall

  call getNumero
  call verificarSuma3
  call cambiarLetras
  mov [turnoJug], byte 51
  call controlAs
  sub [totalSumaJug3], byte 48

  mov rax, 1
  mov rdi, 1
  mov rsi, sumaParcialJug
  mov rdx, lenSumParcialJug
  syscall

  mov ax, [totalSumaJug3]
  mov [total], ax
  call normalizarTotal

  JMP pedirCarta3