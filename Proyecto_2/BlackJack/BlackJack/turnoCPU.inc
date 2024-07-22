global inteligenciaCPU
inteligenciaCPU:
  call getNumDetenerse ;numero entre 0-4 en rax
  sub ax, 48
  mov bx, 21
  sub bx, ax
  mov ax, bx
  ret

global turnoMaquina
turnoMaquina:
  CMP ecx, edx
  JGE terminar

  CMP ecx, 21 ;Verifica si se pasó de 21
  JGE terminar

  call rand
  ret

global terminar
terminar:
  mov rax, 0
  ret
