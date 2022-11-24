#include <iostream>
#include <SFML/Graphics.hpp>
int main()
{
    sf::Clock clock;
    while(true)
    {
        // sf::FileInputStream stream;
        // stream.open("./main/image.png");
        // sf::Texture texture;
        // texture.loadFromStream(stream);
        // sf::Time timeelapsed = clock.getElapsedTime();
        // std::cout << timeelapsed.asSeconds();
        // int s = timeelapsed.asSeconds();
        // if( s > 5)
        //     std::cout <<"5 sec";
        // std::cin.get();
        sf::Window window(sf::VideoMode(800,600), "Timer",sf::Style::Default);
        while(window.isOpen())
        {
            sf::Event event;

            while(window.pollEvent(event))
            {
                sf::Vector2i gloabalpos = sf::Mouse::getPosition();
                sf::Vector2i localpos = sf::Mouse::getPosition(window);
                std::cout << "global:  " << gloabalpos << std::endl;
                std::cout << "local " << localpos << std::endl;  
                // if(event.type == sf::Event::Closed)
                //     window.close();

                // else if (event.type == sf::Event::MouseEntered)// switch 
                // {
                //     sf::Time timeelapsed = clock.getElapsedTime();
                //     std::cout << "time" << timeelapsed.asSeconds(); 
                //     window.setTitle("asd");
                //     window.setPosition(sf::Vector2i(10,50));
                // }
                    
                // else if(event.type == sf::Event::MouseLeft)
                
                //     window.setTitle("timer");
                
                // bool focus = window.hasFocus();
                // if(focus)
                //     window.setTitle("ggggg");
                    
            }
        }
    }
}