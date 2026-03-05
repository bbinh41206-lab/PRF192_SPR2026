include \masm32\include\masm32rt.inc

.code    ; int main(): Bat ?au code tu ?ây

start:   ; { - Body code cua hàm main

exit     ; return 0;
display proc
print chr$("Hello SE21A03!!!", 13, 10, "Hom nay troi dep!!!")
    ; printf("Hello SE21A03!!!\nHom nay troi dep!!!")
    ret ;return
display endp

end start ; } - K?t thúc ch??ng trình