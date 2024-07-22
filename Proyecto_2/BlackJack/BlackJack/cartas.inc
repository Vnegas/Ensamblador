global primeraCarta
primeraCarta:
  xor rax, rax
  call rand
  ret

global getNumDetenerse
getNumDetenerse:
  mov rax, 228
  xor edi, edi
  lea rsi, [rbx]
  syscall

  mov r12b, [rbx]
  add r12, 8
  mov al, r12b

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
  ret
