#include <SFML/Graphics.hpp>

int main()
{
    unsigned int width = 800;
    unsigned int height = 600;

    sf::RenderWindow window(sf::VideoMode({ width, height }), "SFML works!");

    while (window.isOpen())
    {
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
                window.close();
        }

        window.clear();
        window.display();
    }
}