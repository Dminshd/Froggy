GLFW_DIR = Deps/GLFW
GLFW_LIB = $(GLFW_DIR)Build/src/libglfw3.a

CC = clang

CFLAGS = -I./Src/
LDFLAGS = -lglfw -lm -lvulkan

OBJ = Build/Objs/
SRC = $(wildcard Src/*.c) $(wildcard Src/**/*.c)

debug :
	$(CC) $(CFLAGS) -o Build/froggy $(SRC) $(LDFLAGS)

glfw :
	cmake -S Deps/GLFW -B Deps/GLFW/Build && cd Deps/GLFW/Build && make

clean :
	rm -rf Build/
