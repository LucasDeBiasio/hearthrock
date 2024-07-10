# Variables
CXX = g++
CXXFLAGS = -std=c++11 -Wall -Iinclude

SRC_DIR = src
INC_DIR = include
BIN_DIR = bin
TARGET = $(BIN_DIR)/hearthrock

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp) main.cpp
# Object files
OBJS = $(SRCS:.cpp=.o)

# Create bin directory if it doesn't exist
$(shell mkdir -p $(BIN_DIR))

# Default target
all: $(TARGET)

# Link object files to create the binary
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile source files into object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build artifacts
clean:
	rm -f $(OBJS) $(TARGET)

# Run the program
run: $(TARGET)
	./$(TARGET)

.PHONY: all clean run

