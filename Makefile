# --- Configuration ---
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Werror -g
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system

# --- Dossiers ---
SRC_DIR = src
BUILD_DIR = build

# --- Fichiers ---
SRC_FILES = $(wildcard $(SRC_DIR)/*.cpp)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.cpp=$(BUILD_DIR)/%.o)
TARGET = Suikarap

# --- Cible principale ---
all: $(TARGET)

# --- Compilation du programme ---
$(TARGET): $(OBJ_FILES)
	$(CXX) $(OBJ_FILES) -o $(TARGET) $(LDFLAGS)

# --- Compilation des fichiers .cpp en .o ---
$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# --- Nettoyage ---
clean:
	rm -rf $(BUILD_DIR) $(TARGET)

# --- Rebuild complet ---
rebuild: clean all

# --- Lancer le programme ---
run: $(TARGET)
	./$(TARGET)
