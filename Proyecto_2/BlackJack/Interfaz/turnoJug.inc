global cualTurno
cualTurno: ;**** nose si es necesario, no se llama en ningun lado
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
  JG pasarSig; ret, pasar a otro jug

  mov [pedirCartaJug], rdi

  CMP [pedirCartaJug], byte 50
  JE pasarSig ; ret, pasar a otro jug

  call getNumero
  call verificarSuma1
  sub [totalSumaJug1], byte 48
  mov rax, [numeroRandom]
  ret

global pedirCarta2
pedirCarta2:
  CMP [totalSumaJug2], byte 69 ; Se compara si se paso de 21
  JG pasarSig; ret, pasar a otro jug

  mov [pedirCartaJug], rdi

  CMP [pedirCartaJug], byte 50
  JE pasarSig ; ret, pasar a otro jug

  call getNumero
  call verificarSuma2
  sub [totalSumaJug2], byte 48
  mov rax, [numeroRandom]
  ret

global pedirCarta3
pedirCarta3:
  CMP [totalSumaJug3], byte 69 ; Se compara si se paso de 21
  JG pasarSig; ret, pasar a otro jug

  mov [pedirCartaJug], rdi

  CMP [pedirCartaJug], byte 50
  JE pasarSig ; ret, pasar a otro jug

  call getNumero
  call verificarSuma3
  sub [totalSumaJug3], byte 48
  mov rax, [numeroRandom]
  ret

global pasarSig
pasarSig:
  mov [numeroRandom], byte 0
  mov rax, [numeroRandom]
  ret
