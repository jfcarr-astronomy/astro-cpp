default:
	@echo "Targets:"
	@echo " build"
	@echo " clean"

run: build
	@echo ""
	@./astroutil

build: astroutil

astroutil: AstroUtil.o main.o
	g++ -o astroutil main.o AstroUtil.o

main.o: main.cpp
	g++ -c main.cpp

AstroUtil.o: AstroUtil.cpp AstroUtil.h
	g++ -c AstroUtil.cpp

clean:
	-rm -f astroutil
	-rm -f main.o
	-rm -f AstroUtil.o