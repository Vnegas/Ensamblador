primerasCartas:
  mov rax, 1
  mov rdi, 1
  mov rsi, cartasJug1
  mov rdx, lenCartJ
  syscall

  call getNumero
  mov eax, [numeroRandom]
  add [totalSumaJug], eax

  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall

  mov rax, 1
  mov rdi, 1
  mov rsi, espacio
  mov rdx, lenEspacio
  syscall

  call getNumero
  mov eax, [numeroRandom]
  add [totalSumaJug], eax
  sub [totalSumaJug], byte 48

  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall

  ;cartas de la maquina
  mov rax, 1
  mov rdi, 1
  mov rsi, cartasCPU
  mov rdx, lenCartCPU
  syscall

  call getNumero
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  ;mov [numeroRandom], bl

  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall

  mov rax, 1
  mov rdi, 1
  mov rsi, espacio
  mov rdx, lenEspacio
  syscall

  call getNumero
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  sub [totalSumaCPU], byte 48
  ;mov [numeroRandom], bl

  mov rax, 1
  mov rdi, 1
  mov rsi, numeroRandom
  mov rdx, 2
  syscall

  call inteligenciaCPU
  mov rax, 1
  mov rdi, 1
  mov rsi, numDetenerseCPU
  mov rdx, 1
  syscall

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
  mov ecx, 11
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
  mov ecx, 4
  div ecx
  mov al, dl
  add al, 48
  mov [numCPU], al

  ret