#include <iostream>
#include <SFML/Graphics.hpp>

int main() {
	sf::RenderWindow window(sf::VideoMode(900, 600), "My first Window");
	while (window.isOpen()) {
		sf::Event event;

		if (event.type == sf::Event::Closed)
			window.close();
	}
	window.display();
}