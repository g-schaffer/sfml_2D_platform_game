#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(900,600), "title");

	while (window.isOpen()) {
		sf::Event event;

		if (event.Closed) {
			window.close();
		}
	}
}