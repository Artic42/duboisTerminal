BINARIES = bin
SOURCES = src

help: $(BINARIES)/help

$(BINARIES)/help: $(SOURCES)/help.c
	gcc $(SOURCES)/help.c -o $(BINARIES)/help
	cp $(BINARIES)/help $(BINARIES)/ayuda