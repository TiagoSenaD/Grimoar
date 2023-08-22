CC = g++ #compilador
LIBSRC = $(shell pwd)/../../Grimor/src/Grimor/ #PATH para a pasta com as Shared Libs
LIBPATH = $(shell pwd) #PATH para linkar as Shared Libs
INCLUDES = $(shell pwd)/../../Grimor/src/ #PATH para adicionar todas as bibliotecas ao compilador


all: Mute_Aplicaton


Aplicaton:
	$(CC) Sandbox_APP.cpp -I$(INCLUDES) -lGrimoar -L./  -Wl,-rpath=$(LIBPATH) -o sandbox

Mute_Aplicaton:
	@$(CC) Sandbox_APP.cpp -I$(INCLUDES) -lGrimoar -L./  -Wl,-rpath=$(LIBPATH) -o sandbox
