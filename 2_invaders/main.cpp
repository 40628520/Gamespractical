#include <SFML/Graphics.hpp>

using namespace sf;

const int gameWidth = 800;
const int gameHeight = 600;

// Function Prototypes
void Load();
void Update(RenderWindow& window);
void Render(RenderWindow& window);

int main() {
    // Initialize the window
    RenderWindow window(VideoMode(gameWidth, gameHeight), "SPACEINVADERS_GAME");

    // Load initial game state
    Load();

    // Main game loop
    while (window.isOpen()) {
        window.clear();


        Update(window);

        Render(window);

        window.display();
    }

    return 0;
}