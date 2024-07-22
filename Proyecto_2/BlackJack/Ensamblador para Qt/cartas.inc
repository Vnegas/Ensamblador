global primeraCartaJug1
primeraCartaJug1:
  call getNumero
  call verificarSuma1
  mov rax, [numeroRandom]
  ret

global segundaCartaJug1
segundaCartaJug1:
  call getNumero
  call verificarSuma1
  sub [totalSumaJug1], byte 48
  mov rax, [numeroRandom]
  ret

global sumaTotalJug1
sumaTotalJug1:
  mov rax, [totalSumaJug1]
  ret

global primeraCartaJug2
primeraCartaJug2:
  call getNumero
  call verificarSuma2
  mov rax, [numeroRandom]
  ret

global segundaCartaJug2
segundaCartaJug2:
  call getNumero
  call verificarSuma2
  sub [totalSumaJug2], byte 48
  mov rax, [numeroRandom]
  ret

global sumaTotalJug2
sumaTotalJug2:
  mov rax, [totalSumaJug2]
  ret

global primeraCartaJug3
primeraCartaJug3:
  call getNumero
  call verificarSuma3
  mov rax, [numeroRandom]
  ret

global segundaCartaJug3
segundaCartaJug3:
  call getNumero
  call verificarSuma3
  sub [totalSumaJug3], byte 48
  mov rax, [numeroRandom]
  ret

global sumaTotalJug3
sumaTotalJug3:
  mov rax, [totalSumaJug3]
  ret

global primeraCartaCPU
primeraCartaCPU:
  call getNumero
  call controlAsCPU
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  mov rax, [numeroRandom]
  ret

global segundaCartaCPU
segundaCartaCPU:
  call getNumero
  call controlAsCPU
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  sub [totalSumaCPU], byte 48
  mov rax, [numeroRandom]
  ret

global sumaTotalCPU
sumaTotalCPU:
  mov rax, [totalSumaCPU]
  ret

global verificarSuma1
verificarSuma1:
  CMP [numeroRandom], byte 49
  JG sumarNum1
  add [cantAs], byte 1
  ret

global verificarSuma2
verificarSuma2:
  CMP [numeroRandom], byte 49
  JG sumarNum2
  add [cantAs], byte 1
  ret

global verificarSuma3
verificarSuma3:
  CMP [numeroRandom], byte 49
  JG sumarNum3
  add [cantAs], byte 1
  ret

global sumarNum1
sumarNum1:
  mov bl, [numeroRandom]
  add [totalSumaJug1], bl
  ret
global sumarNum2
sumarNum2:
  mov bl, [numeroRandom]
  add [totalSumaJug2], bl
  ret
global sumarNum3
sumarNum3:
  mov bl, [numeroRandom]
  add [totalSumaJug3], bl
  ret

global getNumero
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

global getNumDetenerse
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

global imprimirNum
imprimirNum:
  ret

global controlAs
controlAs:
  CMP [cantAs], byte 1
  JGE decisionAs
  ret

global decisionAs
decisionAs:
  mov [AS], rdi
  sub [cantAs], byte 1

  CMP [AS], byte 50 ;Verifica la opción del usuario
  JE cartaAs11
  CMP [turnoJug], byte 49
  JE sumarJug1
  CMP [turnoJug], byte 50
  JE sumarJug2
  add [totalSumaJug3], byte 49
  JMP controlAs

global cartaAs11
cartaAs11:
  CMP [turnoJug], byte 49
  JE sumar11Jug1
  CMP [turnoJug], byte 50
  JE sumar11Jug2
  add [totalSumaJug3], byte 59
  JMP controlAs

global sumarJug1
sumarJug1:
  add [totalSumaJug1], byte 49
  JMP controlAs
global sumarJug2
sumarJug2:
  add [totalSumaJug2], byte 49
  JMP controlAs
global sumar11Jug1
sumar11Jug1:
  add [totalSumaJug1], byte 59
  JMP controlAs
global sumar11Jug2
sumar11Jug2:
  add [totalSumaJug2], byte 59
  JMP controlAs