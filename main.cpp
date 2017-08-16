#include "SliderSFML.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(500, 500), "Slider!");
	window.setFramerateLimit(60);

	SliderSFML slider1(100, 100);
	SliderSFML slider2(100, 200);
	SliderSFML slider3(100, 300);

	slider1.create(20, 450);
	slider2.create(0, 200);
	slider3.create(0, 100);

	slider1.setSliderValue(235);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear(sf::Color(25,29,33));

		slider1.draw(window);
		slider2.draw(window);
		slider3.draw(window);

		window.display();
	}

	return 0;
}