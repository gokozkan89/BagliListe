hepsi: derle calistir
derle:
	g++ -I ./include/ -o ./lib/sayi.o -c ./src/sayi.cpp
	g++ -I ./include/ -o ./lib/dugum.o -c ./src/dugum.cpp
	g++ -I ./include/ -o ./lib/BagilListe.o -c ./src/BagilListe.cpp
	g++ -I ./include/ -o ./lib/islem.o -c ./src/islem.cpp
	g++ -I ./include/ -o ./bin/main ./lib/sayi.o ./lib/dugum.o	./lib/BagilListe.o	./lib/islem.o	./src/main.cpp
	
calistir:
	./bin/main
	