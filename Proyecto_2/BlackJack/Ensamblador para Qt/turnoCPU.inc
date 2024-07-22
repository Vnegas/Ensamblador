global inteligenciaCPU
inteligenciaCPU:
  call getNumDetenerse
  sub [numeroRandom],  byte 48
  mov bl, [numeroRandom]
  sub [numDetenerseCPU], byte bl 
  ret

global controlAsCPU
controlAsCPU:
  CMP [numeroRandom], byte 49
  JE elegirValorAs
  ret

global elegirValorAs
elegirValorAs:
  CMP [totalSumaCPU], byte 59
  JL cartaAs11CPU
  mov [numeroRandom], byte 49 ;si la suma total es mayor o igual a 11, el valor de AS será 1
  ret

global cartaAs11CPU
cartaAs11CPU:
  mov [numeroRandom], byte 59 ;si la suma total es menor a 11, el valor de AS será 11
  ret

global turnoMaquina
turnoMaquina:
  mov al, [numDetenerseCPU]
  CMP [totalSumaCPU], al
  JGE terminar

  CMP [totalSumaCPU], byte 69 ;Verifica si se pasó de 21
  JGE terminar

  call getNumero
  call controlAsCPU
  mov bl, [numeroRandom]
  add [totalSumaCPU], bl
  sub [totalSumaCPU], byte 48
  mov rax, [numeroRandom]
  ret

global terminar
terminar:
  mov [numeroRandom], byte 0
  mov rax, [numeroRandom]
  ret