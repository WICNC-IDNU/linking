V := # @

SOURCES = \
	mod1.c \
	mod2.c

TARGET := main
OUTPUT_DIR := ./target

.PHONY: clean

CC = cc

OBJS = $(SOURCES:%.c=$(OUTPUT_DIR)/%.o)
SO_OBJS = $(SOURCES:%.c=$(OUTPUT_DIR)/lib%.so)

$(OUTPUT_DIR)/$(TARGET): $(SO_OBJS) $(OUTPUT_DIR)/main.o $(OBJS)
	$(V)$(CC) -o $@ $(OUTPUT_DIR)/main.o -L$(OUTPUT_DIR) -lmod1 -lmod2 -ggdb

$(OUTPUT_DIR)/lib%.so: $(OUTPUT_DIR)/%.o
	@mkdir -p $(OUTPUT_DIR)
	$(V)$(CC) -o $@ -shared $< -ggdb

$(OUTPUT_DIR)/main.o: main.c
	@mkdir -p $(OUTPUT_DIR)
	$(V)$(CC) -o $@ -c $< -ggdb

$(OUTPUT_DIR)/%.o: %.c
	@mkdir -p $(@D)
	$(V)$(CC) -o $@ -c $< -fpic -ggdb

clean:
	rm -rf $(OBJS) $(OUTPUT_DIR)/$(TARGET) $(OUTPUT_DIR)/main.o $(SO_OBJS)
	rmdir $(OUTPUT_DIR)
