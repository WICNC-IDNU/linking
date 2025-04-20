V := # @

SOURCES = \
	main.c \
	mod1.c \
	mod2.c

TARGET := main
OUTPUT_DIR := ./target

.PHONY: clean

CC = cc

OBJS = $(SOURCES:%.c=$(OUTPUT_DIR)/%.o)

$(OUTPUT_DIR)/$(TARGET): $(OBJS)
	$(V)$(CC) -o $@ -static $^ -fno-pie -ggdb

$(OUTPUT_DIR)/%.o: %.c
	@mkdir -p $(@D)
	$(V)$(CC) -o $@ -c $< -fno-pie -ggdb

clean:
	rm -rf $(OBJS) $(OUTPUT_DIR)/$(TARGET)
	rmdir $(OUTPUT_DIR)
