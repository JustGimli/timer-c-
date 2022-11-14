#include <iostream>
#include <SFML/Graphics.hpp>
int main()
{
    sf::Clock clock;
    while(true)
    {
        sf::Time timeelapsed = clock.getElapsedTime();
        std::cout << timeelapsed.asSeconds();
        std::cin.get();
    }
}