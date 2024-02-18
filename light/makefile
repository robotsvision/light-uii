# Compiler ---------------------------------------------->
CC = gcc

# Flags ------------------------------------------------>
CFLAGS = -Wall -std=c17 -Isrc -m64 -O3 -s -flto -ffunction-sections -fdata-sections -Wl,--gc-sections -MMD -MP

# for debug -Wall -std=c17 -Isrc -m64 -O3 -g
# for realise -Wall -std=c17 -Isrc -m64 -O3 -s -flto -ffunction-sections -fdata-sections -Wl,--gc-sections -MMD -MP

PLATFORM ?= "-DNONE"

# Use Llibs framework ------------------------------>

CFLAGS += -I"C:\Projects\llibs\"

# Platform-specific Flags ------------------------------>
ifeq ($(OS), Windows_NT)
# Windows ------------------------------>
    UNAME_S := Windows
    CFLAGS += -municode
	CFLAGS += -D__L_WINDOWS__
    ifeq ($(PROCESSOR_ARCHITECTURE),AMD64)
        UNAME_M := x86_64
    endif
    ifeq ($(PROCESSOR_ARCHITECTURE),x86)
        UNAME_M := x86
    endif
else
# Unix family ------------------------------>
    UNAME_S := $(shell uname -s)
	UNAME_M := $(shell uname -m)

	ifeq ($(UNAME_S), Linux)
        CFLAGS += -D__L_LINUX__
    endif

	ifeq ($(UNAME_S), Darwin)
        CFLAGS += -D__L_OSX__
    endif
endif

ifeq ($(UNAME_S),Windows)
    ifeq ($(UNAME_M),x86_64)
        OUT=light/win64/light.exe
    endif
    ifeq ($(UNAME_M),x86)
        OUT=light/win32/light.exe
    endif
endif

ifeq ($(UNAME_S), Linux)
    ifeq ($(UNAME_M),x86_64)
        OUT=light/linux64/light
    endif
    ifeq ($(UNAME_M),x86)
        OUT=light/linux32/light
    endif
endif

ifeq ($(UNAME_S), Darwin)
    ifeq ($(UNAME_M),x86_64)
        OUT=light/osx32/light
    endif
    ifeq ($(UNAME_M),x86)
        OUT=light/osx64/light
    endif
endif

# Source and Object Files ------------------------------>
SRC_FILES :=  $(shell python utils/find.py src .c)
OBJ_FILES := $(SRC_FILES:.c=.o)
DEP_FILES := $(OBJ_FILES:.o=.d)

# Default Target --------------------------------------->
all: $(OUT)

# Linking ---------------------------------------------->
$(OUT): $(OBJ_FILES)
	$(CC) $(CFLAGS) -o $(OUT) $(OBJ_FILES)

# Compiling -------------------------------------------->
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Include generated dependencies ----------------------->
-include $(DEP_FILES)

# Clean ------------------------------------------------>
clean:
	rm -f $(OUT) $(OBJ_FILES) $(DEP_FILES)
