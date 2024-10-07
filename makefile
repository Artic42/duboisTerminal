BINARIES = bin
SOURCES = src

all: help connectDevice ejectDevice


help: $(BINARIES)/help
connectDevice: $(BINARIES)/connectDevice
ejectDevice: $(BINARIES)/ejectDevice

$(BINARIES)/help: $(SOURCES)/help.c
	gcc $(SOURCES)/help.c -o $(BINARIES)/help
	cp $(BINARIES)/help $(BINARIES)/ayuda

$(BINARIES)/connectDevice: $(SOURCES)/connectDevice.c
	gcc $(SOURCES)/connectDevice.c -o $(BINARIES)/connectDevice
	cp $(BINARIES)/connectDevice $(BINARIES)/conectarDispositivo

$(BINARIES)/ejectDevice: $(SOURCES)/ejectDevice.c
	gcc $(SOURCES)/ejectDevice.c -o $(BINARIES)/ejectDevice
	cp $(BINARIES)/ejectDevice $(BINARIES)/extraerDispositivo