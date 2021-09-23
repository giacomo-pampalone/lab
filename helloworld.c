//libreira stdio.h standard input output
#include <stdio.h>

main(){ 
    printf("Hello World!");
}

/* studente@F9client60:~$ ls
Documenti          Musica                      Scrivania
eclipse-workspace  Protege-5.5.0               snap
esercizi           Protege-5.5.0-linux.tar.gz  Video
Immagini           Pubblici                    weka-3-8-4
Modelli            Scaricati                   weka-3-8-4-azul-zulu-linux.zip
studente@F9client60:~$ mkdir lab1
studente@F9client60:~$ ls
Documenti          Musica                      snap
eclipse-workspace  Protege-5.5.0               Video
esercizi           Protege-5.5.0-linux.tar.gz  weka-3-8-4
Immagini           Pubblici                    weka-3-8-4-azul-zulu-linux.zip
lab1               Scaricati
Modelli            Scrivania
studente@F9client60:~$ cd lab1
studente@F9client60:~/lab1$ ls -a
.  ..
studente@F9client60:~/lab1$ code .
studente@F9client60:~/lab1$ ls
studente@F9client60:~/lab1$ ls
helloworld.c
studente@F9client60:~/lab1$ cat helloworld.c 
#include <stdio.h>

main(){ 
    printf("Hello World!");
}studente@F9client60:~/lab1$ helloworld.c
helloworld.c: comando non trovato
studente@F9client60:~/lab1$ ./helloworld.c
bash: ./helloworld.c: Permesso negato
studente@F9client60:~/lab1$ ls -l
totale 4
-rw-rw-r-- 1 studente studente 58 set 23 12:22 helloworld.c
studente@F9client60:~/lab1$ chmod +x helloworld.c
studente@F9client60:~/lab1$ ls
helloworld.c
studente@F9client60:~/lab1$ gcc helloworld.c 
helloworld.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^~~~
studente@F9client60:~/lab1$ gcc helloworld.c 
helloworld.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^~~~
studente@F9client60:~/lab1$ gcc helloworld.c 
helloworld.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^~~~
studente@F9client60:~/lab1$ gcc helloworld.c 
helloworld.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^~~~
studente@F9client60:~/lab1$ gcc helloworld.c 
helloworld.c:3:1: warning: return type defaults to ‘int’ [-Wimplicit-int]
 main(){
 ^~~~
studente@F9client60:~/lab1$ ls
a.out  helloworld.c
studente@F9client60:~/lab1$ ./a.out
Hello World!studente@F9client60:~/lab1$ ^C
studente@F9client60:~/lab1$ */
