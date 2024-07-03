# Nom de l'exécutable
TARGET = main

# Compilateur
CXX = gcc

# Options de compilation
CXXFLAGS = -Wall -lm

# Fichiers source
SRCS = main.c aes.c

# Fichiers objets
OBJS = main.o aes.o

# Règle par défaut
all: $(TARGET)

# Règle pour créer l'exécutable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Règle pour compiler les fichiers source en fichiers objets
main.o: main.c
	$(CXX) $(CXXFLAGS) -c main.c -o main.o
aes.o : aes.c
	$(CXX) $(CXXFLAGS) -c aes.c -o aes.o

# Règle pour nettoyer les fichiers générés
clean:
	rm -f $(OBJS) $(TARGET)