# Makefile for building Light UII

# Compiler --------------------->
CC = gcc

# Flags --------------------->
LIGHT_CFLAGS = -Wall -MMD -std=c17 -I include 

# OS --------------------->
OS := $(shell node scripts/os.js)

# Add flags based on OS --------------------->
LIGHT_CFLAGS += $(shell node scripts/flags.js $(OS))

# Light UII out --------------------->
LIGHT_OUT := $(shell node scripts/out.js $(OS))

# Llibs path --------------------->

LLIBS_PATH = external/llibs

# Llibs build ------------------------------------------>

LLIBS_CFLAGS = -Wall -MMD -std=c17 -Iinclude -I$(LLIBS_PATH)/cross/include

LLIBS_NATIVE_PATH := $(shell node $(LLIBS_PATH)/scripts/native.js $(OS))

# Different files --------------------->
LLIBS_SRC_FILES := $(shell node scripts/find.js $(LLIBS_PATH)/$(LLIBS_NATIVE_PATH) .c)\
	$(shell node scripts/find.js $(LLIBS_PATH)/cross/ .c)
LLIBS_OBJ_FILES := $(LLIBS_SRC_FILES:.c=.o)
LLIBS_DEP_FILES := $(LLIBS_OBJ_FILES:.o=.d)

# Light UII build ------------------------------------------>

# Llibs framework --------------------->
LIGHT_CFLAGS += -I$(LLIBS_PATH)/cross/include

# Different files --------------------->
LIGHT_SRC_FILES := $(shell node scripts/find.js src .c)
LIGHT_OBJ_FILES := $(LIGHT_SRC_FILES:.c=.o)
LIGHT_DEP_FILES := $(LIGHT_OBJ_FILES:.o=.d)

# Default Target --------------------->
all: $(LIGHT_OUT)

# Linking Llibs and LIGHT together --------------------->
$(LIGHT_OUT): $(LIGHT_OBJ_FILES) $(LLIBS_OBJ_FILES)
	$(CC) $(LIGHT_CFLAGS) -o $@ $^

# Compiling LIGHT object files --------------------->
$(LIGHT_SRC_FILES:.c=.o): %.o: %.c
	$(CC) $(LIGHT_CFLAGS) -c $< -o $@

# Compiling Llibs object files --------------------->
$(LLIBS_SRC_FILES:.c=.o): %.o: %.c
	$(CC) $(LLIBS_CFLAGS) -c $< -o $@

# Include generated dependencies --------------------->
-include $(LIGHT_DEP_FILES) $(LLIBS_DEP_FILES)

# Clean --------------------->
clean:
	rm -f $(LIGHT_OUT) $(LIGHT_OBJ_FILES) $(LIGHT_DEP_FILES) $(LLIBS_DEP_FILES)
