# Makefile for reverse-cpp
# (c) 2017 Richard Cavell

CXX += -std=c++14
CFLAGS += -Wall -Wextra -Werror -pedantic

reverse: reverse.cpp
	$(CXX) $(CFLAGS) $^ $(OUTPUT_OPTION)
