all: hotel_management

hotel_management: src/main.o src/hotel.o src/utility.o src/authentication.o
	g++ -o hotel_management src/main.o src/hotel.o src/utility.o src/authentication.o

src/main.o: src/main.cpp include/hotel.h include/utility.h include/authentication.h
	g++ -c src/main.cpp -o src/main.o

src/hotel.o: src/hotel.cpp include/hotel.h include/utility.h
	g++ -c src/hotel.cpp -o src/hotel.o

src/utility.o: src/utility.cpp include/utility.h
	g++ -c src/utility.cpp -o src/utility.o

src/authentication.o: src/authentication.cpp include/authentication.h
	g++ -c src/authentication.cpp -o src/authentication.o

clean:
	rm -f hotel_management src/*.o
