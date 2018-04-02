CXXFLAGS = -Wall -g    # Opções do compilador: todos warnings e debug info

PROG = house
FONTES = house.cpp createCanvas.cpp
OBJETOS = $(FONTES:.cpp=.o)
FLAGS = -lGL -lGLU -lglut

$(PROG): $(OBJETOS)
	g++ $(CXXFLAGS) $(OBJETOS) -o $@ $(FLAGS)

clean:
	-@ rm -f $(OBJETOS) $(PROG)