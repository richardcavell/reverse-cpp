# Makefile for reverse-cpp
# (c) 2017-2025 Richard Cavell

CXX    += -std=c++17
CFLAGS += -Wall -Wextra -Werror -pedantic

reverse: reverse.cpp
	$(CXX) $(CFLAGS) $^ $(OUTPUT_OPTION)
