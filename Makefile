CXX = g++
CXXLAGS = -c -Wall
SOURCES = Main.cpp port.cpp vintage_port.cpp
OBJECTS = $(SOURCES:.cpp=.o)
EXECUTABLE = test

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $@

.cpp.o:
	$(CXX) $(CXXLAGS) $< -o $@

clean:
	\rm *.o $(EXECUTABLE)
