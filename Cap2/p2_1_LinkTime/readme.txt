Apenas compilando a biblioteca externa como uma biblioteca estática:
	gcc -c myfunc.c

Apenas compilando o programa (main):
	gcc -c prog.c
	
Linkando ambos:
	gcc prog.o myfunc.o -o prog


Executando
	./prog
