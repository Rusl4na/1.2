plan: f g
f: f.c
	g++ f.c -o f.o
	./f.o
g: g.c
	g++ g.c -o g.o
	./g.o
