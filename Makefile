CC = g++
CFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

all:
	$(CC) -c main/main.cpp -I SFML-2.5.1/include
	$(CC) main.o -o app -L SFML-2.5.1/lib 	$(CFLAGS)
	export LD_LIBRARY_PATH=SFML-2.5.1/lib  && ./app
clean:
	rm -rf ../main.o	
