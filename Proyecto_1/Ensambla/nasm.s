section .text
global aumentarBrillo
aumentarBrillo:
    sub rsp, 8
    push rdx                                ; push the byte to the stack
    vpbroadcastb ymm1, byte [rsp]           ; fill ymm1 with the specified byte
    pop rdx							          ; fix stack to prior state

    vmovups ymm2, [rcx]                     ; mover al registro 256 bytes
    vpaddusb ymm0, ymm1, ymm2               ; sumar el valor de suma a todos los elementos
    vmovups [rcx], ymm0                     ; regresar a la memoria

    add rcx, 32

    add rsp, 8
    cmp r8d, 0
    sub r8d, 1
    jg aumentarBrillo
    ret

global disminuirBrillo
disminuirBrillo:
    sub rsp, 8
    push rdx					; push the byte to the stack
    vpbroadcastb ymm1, byte [rsp]               ; fill ymm1 with the specified byte
    pop	rdx					; fix stack to prior state

    vmovups ymm2, [rcx]                         ; mover al registro 256 bytes
    vpsubusb ymm0, ymm2, ymm1                   ; restar el valor de resta a todos los elementos
    vmovups [rcx], ymm0		        	; regresar a la memoria

    add rcx, 32

    add rsp, 8
    cmp r8d, 0
    sub r8d, 1
    jg disminuirBrillo
    ret

global aumentarContraste
aumentarContraste:
    sub rsp, 8
    push r9
    vmovups ymm5, [rdx]        			; fill ymm5 with factor
    vpbroadcastb ymm1, [rsp]                    ; fill ymm1 with the specified byte
    pop r9

    vmovups ymm2, [rcx]	           	; mover al registro 256 bytes
    vpsubusb ymm0, ymm2, ymm1
    vpmulld ymm3, ymm5, ymm0
    vpsubusb ymm4, ymm3, ymm1
    vmovups [rcx], ymm4

    add rcx, 32

    add rsp, 8
    CMP r8d, 0
    sub r8d, 1
    JG aumentarContraste
    ret

global disminuirContraste
disminuirContraste:
    sub rsp, 8
    push r9
    vmovups ymm5, [rdx]        			; fill ymm5 with factor
    vpbroadcastb ymm1, [rsp]	    	; fill ymm1 with the specified byte
    pop r9

    vmovups ymm2, [rcx]	           	; mover al registro 256 bytes
    vpsubusb ymm0, ymm2, ymm1
    vpmulld ymm3, ymm5, ymm0
    vpaddusb ymm4, ymm3, ymm1
    vmovups [rcx], ymm4

    add rdi, 32

    add rsp, 8
    CMP r8d, 0
    sub r8d, 1
    JG disminuirContraste
    ret

global colorNegativo
colorNegativo:
    sub rsp, 8
    push rdx						            ; push the byte to the stack
    vpbroadcastb ymm1, byte [rsp]	; fill ymm1 with 255
    pop	rdx							         		; fix stack to prior state

    vmovups ymm2, [rcx]	           	; mover al registro 256 bytes
    vpsubusb ymm0, ymm1, ymm2	    	; restar 255 a todos los elementos
    vmovups [rcx], ymm0		        	; regresar a la memoria

    add rcx, 32

    add rsp, 8
    cmp r8d, 0
    sub r8d, 1
    jg colorNegativo
    ret

global tamanoDuplicado
tamanoDuplicado:
    ; rsi = array original
    ; rdi = array duplicado
    xor bl, bl
    mov bl, [rdx]
    mov [rcx], bl

    add rcx, 1
    add rdx, 1
    mov bl, [rdx]
    mov [rcx], bl

    add rcx, 1
    add rdx, 1
    mov bl, [rdx]
    mov [rcx], bl

    sub rdx, 2
    add rcx, 1

    mov bl, [rdx]
    mov [rcx], bl

    add rcx, 1
    add rdx, 1
    mov bl, [rdx]
    mov [rcx], bl

    add rcx, 1
    add rdx, 1
    mov bl, [rdx]
    mov [rcx], bl

    add rdx, 1
    add rcx, 1

    cmp r8d, 0
    sub r8d, 1
    jg tamanoDuplicado
    ret

global espejar
espejar:
    neg rcx
    ;mov rax, rcx
    ret
