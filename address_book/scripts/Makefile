CC := gcc
CFLAGS := -Wall -O3
Libs = -lcurses
Target := client_addressbook
Source := $(wildcard src/*.c)
Objs := $(patsubst %.c,%.o,$(Source))
Modules += node_operation others string main
AllObjs := $(addsuffix /src/*.o,$(Modules))

