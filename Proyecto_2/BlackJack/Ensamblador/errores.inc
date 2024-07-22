datoErroneo1:
  mov rax, 1
  mov rdi, 1
  mov rsi, datoMalo
  mov rdx, lenDatoMal
  syscall

  mov [pedirCartaJug], byte 0
  JMP pedirCarta1

datoErroneo2:
  mov rax, 1
  mov rdi, 1
  mov rsi, datoMalo
  mov rdx, lenDatoMal
  syscall

  mov [pedirCartaJug], byte 0
  JMP pedirCarta2

datoErroneo3:
  mov rax, 1
  mov rdi, 1
  mov rsi, datoMalo
  mov rdx, lenDatoMal
  syscall

  mov [pedirCartaJug], byte 0
  JMP pedirCarta3

datoErroneoAs:
  mov rax, 1
  mov rdi, 1
  mov rsi, datoMalo
  mov rdx, lenDatoMal
  syscall

  mov [AS], byte 0
  JMP decisionAs

datoErroneoJugar:
  mov rax, 1
  mov rdi, 1
  mov rsi, datoMalo
  mov rdx, lenDatoMal
  syscall

  mov [jugarNuevo], byte 0
  JMP jugarOtra

datoErroneoJug:
  mov rax, 1
  mov rdi, 1
  mov rsi, datoMalo
  mov rdx, lenDatoMal
  syscall

  mov [cantJug], byte 0
  JMP multiJug