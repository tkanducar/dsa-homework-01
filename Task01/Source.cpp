#include <SFML/Graphics.hpp>
#include "Cvijet.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode({ 800, 600 }), "Hello, SFML world!");
	window.setFramerateLimit(60);
	Cvijet cvijet(window);

	while (window.isOpen())
	{
		while (const std::optional<sf::Event> event = window.pollEvent())
		{
			if (event->is<sf::Event::Closed>())
				window.close();
		}

		window.clear();
		cvijet.draw();
		window.display();
	}

	return 0;
}