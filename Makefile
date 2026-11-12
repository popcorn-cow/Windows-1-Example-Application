# This Makefile will build the Win1 Example application

CC ?= gcc
CFLAGS ?= -g -DLINT_ARGS -DNDEBUG -O0 -Wall -Wextra -mwindows
LIBS ?= -lgdi32 -luser32
EXE ?= Win1App.exe
BUILD_DIR ?= bin
SOURCE_FILES ?= $(wildcard *.c)
# LINK=link4
# RC=rc
# MAPSYM=mapsym
# MARK=mark

bin/$(EXE): resources.o $(SOURCE_FILES)
	$(CC) $(CFLAGS) $(LIBS) -o $(EXE) $(SOURCE_FILES) resources.o

resources.o:
	windres resource.rc -O coff -o resources.o

# aboutdlg.o: aboutdlg.c aboutdlg.h resource.h globals.h

# mainwnd.o: mainwnd.c mainwnd.h aboutdlg.h resource.h globals.h


# winmain.o: winmain.c mainwnd.h resource.h globals.h



# resource.res: resource.rc App.ico resource.h

# $(EXE): winmain.o mainwnd.o aboutdlg.o resource.res App.ico Win1App.def
#   $(LINK) winmain.obj mainwnd.obj aboutdlg.obj,$(EXE) /align:16,/map,slibw.lib,Win1App.def
#   $(MAPSYM) Win1App.map
#   $(RC) resource.res $(EXE)
#   $(MARK) FONT MEMORY $(EXE)
