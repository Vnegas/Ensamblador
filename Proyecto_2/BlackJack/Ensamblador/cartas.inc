primerasCartasJug: ;GLOBAL
  mov rax, 1
  mov rdi, 1
  mov rsi, cartasJug1
  mov rdx, lenCartJ1
  syscall

  call getNumero
  call verificarSuma1
  call cambiarLetras

  mov rax, 1
  mov rdi, 1
  mov rsi, espacio
  mov rdx, lenEspacio
  syscall

  call getNumero
  call verificarSuma1
  call cambiarLetras
  mov [turnoJug], byte 49
  call controlAs
  sub [totalSumaJug1], byte 48

  CMP [cantJug], byte 49
  JE primerasCartasCPU

  mov rax, 1
  mov rdi, 1
  mov rsi, cartasJug2
  mov rdx, lenCartJ2
  syscall

  call getNumero
  call verificarSuma2
  call cambiarLetras

  mov rax, 1
  mov rdi, 1
  mov rsi, espacio
  mov rdx, lenEspacio
  syscall

  call getNumero
  call verificarSuma2
  call cambiarLetras
  mov [turnoJug], byte 50
  call controlAs
  sub [totalSumaJug2], byte 48

  CMP [cantJug], byte 50
  JE primerasCartasCPU

  mov rax, 1
  mov rdi, 1
  mov rsi, cartasJug3
  mov rdx, lenCartJ3
  syscall

  call getNumero
  call verificarSuma3
  call cambiarLetras

  mov rax, 1
  mov rdi, 1
  mov rsi, espacio
  mov rdx, lenEspacio
  syscall

  call getNumero
  call verificarSuma3
  call cambiarLetras
  mov [turnoJug], byte 51
  call controlAs
  sub [totalSumaJug3], byte 48
  JMP primerasCartasCPU

primerasCartasCPU:
  mov rax, 1
  mov rdi, 1
  mov rsi, cartasCPU
  mov rdx, lenCartCPU
  syscall

  call getNumero
  call controlAsCPU
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  call cambiarLetras

  mov rax, 1
  mov rdi, 1
  mov rsi, espacio
  mov rdx, lenEspacio
  syscall

  call getNumero
  call controlAsCPU
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  sub [totalSumaCPU], byte 48
  call cambiarLetras
  ret

verificarSuma1:
  CMP [numeroRandom], byte 49
  JG sumarNum1
  add [cantAs], byte 1
  ret
verificarSuma2:
  CMP [numeroRandom], byte 49
  JG sumarNum2
  add [cantAs], byte 1
  ret
verificarSuma3:
  CMP [numeroRandom], byte 49
  JG sumarNum3
  add [cantAs], byte 1
  ret

sumarNum1:
  mov bl, [numeroRandom]
  add [totalSumaJug1], bl
  ret
sumarNum2:
  mov bl, [numeroRandom]
  add [totalSumaJug2], bl
  ret
sumarNum3:
  mov bl, [numeroRandom]
  add [totalSumaJug3], bl
  ret

getNumero:
  mov rax, 228
  xor edi, edi
  lea rsi, [time] 
  syscall

  mov al,  [time+8]
  mov bl, al ;centenas
  xor eax, eax
  mov al, bl
  mov edx, 0
  mov ecx, 100
  div ecx
  mov bl, dl

  mov al, bl ; decenas
  mov edx, 0
  mov ecx, 10
  div ecx
  mov al, dl
  add al, 49
  mov [numeroRandom], al
  ret

getNumDetenerse:
  mov rax, 228
  xor edi, edi
  lea rsi, [time] 
  syscall

  mov al, [time+8]
  mov bl, al ;centenas

  xor eax, eax
  mov al, bl
  mov edx, 0
  mov ecx, 100
  div ecx
  mov bl, dl

  mov al, bl ; decenas
  mov edx, 0
  mov ecx, 5
  div ecx
  mov al, dl
  add al, 48
  mov [numeroRandom], al
  ret

cambiarLetras:
  CMP [numeroRandom], byte 49
  JE cambiarAS
  CMP [numeroRandom], byte 59
  JE cambiarAS
  CMP [numeroRandom], byte 58
  JL imprimirNum
  call getNumDetenerse
  CMP [numeroRandom], byte 49
  JE cambiar10
  CMP [numeroRandom], byte 50
  JE cambiarJota
  CMP [numeroRandom], byte 51
  JE cambiarReina
  JMP cambiarRey

imprimirNum:
  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall
  ret

cambiar10:
  mov [numeroRandom], byte 49
  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall

  mov [numeroRandom], byte 48
  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall
  ret

cambiarJota:
  mov [numeroRandom], byte 74
  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall
  ret

cambiarReina:
  mov [numeroRandom], byte 81
  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall
  ret

cambiarRey:
  mov [numeroRandom], byte 75
  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall
  ret

cambiarAS:
  mov [numeroRandom], byte 65
  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall
  ret

controlAs: ;**GLOBAL
  CMP [cantAs], byte 1
  JGE decisionAs
  ret

decisionAs:
  mov rax, 1
  mov rdi, 1
  mov rsi, cartaAS
  mov rdx, lenCartaAS
  syscall

  mov rax, 0
  mov rdi, 2
  mov rsi, AS
  mov rdx, 2
  syscall

  CMP [AS], byte 50 ;Verifica la opción del usuario
  JG datoErroneoAs
  JE cartaAs11
  CMP [AS], byte 48
  JLE datoErroneoAs
  sub [cantAs], byte 1
  CMP [turnoJug], byte 49
  JE sumarJug1
  CMP [turnoJug], byte 50
  JE sumarJug2
  add [totalSumaJug3], byte 49
  JMP controlAs

cartaAs11:
  sub [cantAs], byte 1
  CMP [turnoJug], byte 49
  JE sumar11Jug1
  CMP [turnoJug], byte 50
  JE sumar11Jug2
  add [totalSumaJug3], byte 59
  JMP controlAs

sumarJug1:
  add [totalSumaJug1], byte 49
  JMP controlAs
sumarJug2:
  add [totalSumaJug2], byte 49
  JMP controlAs
sumar11Jug1:
  add [totalSumaJug1], byte 59
  JMP controlAs
sumar11Jug2:
  add [totalSumaJug2], byte 59
  JMP controlAs