global pedirCarta1
pedirCarta1:         ;ecx = totalSuma1
  CMP ecx, 69 ; Se compara si se paso de 21
  JG pasarSig; ret, pasar a otro jug

  xor rax, rax
  call rand
  ret

global pasarSig
pasarSig:
  mov rax, 0
  ret
