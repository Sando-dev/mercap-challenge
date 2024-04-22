# Definir el compilador
CXX := g++
# Opciones de compilación
CXXFLAGS := -std=c++11 -Wall -Wextra

# Lista de archivos fuente
SRCS := main.cpp phone_call.cpp local_call.cpp
# Lista de archivos objeto generados a partir de los archivos fuente
OBJS := $(SRCS:.cpp=.o)
# Nombre del ejecutable final
TARGET := programa

# Regla para construir el ejecutable final
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

# Regla para compilar cada archivo objeto (.o) a partir de su archivo fuente correspondiente (.cpp)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpiar los archivos objeto y el ejecutable
clean:
	rm -f $(OBJS) $(TARGET)
