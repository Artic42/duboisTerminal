BINARIES = bin
SOURCES = src
SCRIPTS = script

all: help connectDevice ejectDevice info createKeys deleteKeys


help: $(BINARIES)/help
connectDevice: $(BINARIES)/connectDevice
ejectDevice: $(BINARIES)/ejectDevice
info: $(BINARIES)/info
createKeys: $(BINARIES)/createKeys
deleteKeys: $(BINARIES)/deleteKeys
install:
	cp $(BINARIES)/* /home/artic/bin
	cp $(SCRIPTS)/* /home/artic/.script

$(BINARIES)/help: $(SOURCES)/help.c
	gcc $(SOURCES)/help.c -o $(BINARIES)/helpMe
	cp $(BINARIES)/helpMe $(BINARIES)/ayudame

$(BINARIES)/connectDevice: $(SOURCES)/connectDevice.c
	gcc $(SOURCES)/connectDevice.c -o $(BINARIES)/connectDevice
	cp $(BINARIES)/connectDevice $(BINARIES)/conectarDisp

$(BINARIES)/ejectDevice: $(SOURCES)/ejectDevice.c
	gcc $(SOURCES)/ejectDevice.c -o $(BINARIES)/ejectDevice
	cp $(BINARIES)/ejectDevice $(BINARIES)/extraerDisp

$(BINARIES)/info: $(SOURCES)/info.c
	gcc $(SOURCES)/info.c -o $(BINARIES)/info

$(BINARIES)/createKeys: $(SOURCES)/createKeys.c
	gcc $(SOURCES)/createKeys.c -o $(BINARIES)/createKeys
	cp $(BINARIES)/createKeys $(BINARIES)/crearLlaves

$(BINARIES)/deleteKeys: $(SOURCES)/deleteKeys.c
	gcc $(SOURCES)/deleteKeys.c -o $(BINARIES)/deleteKeys
	cp $(BINARIES)/deleteKeys $(BINARIES)/borrarCodigos