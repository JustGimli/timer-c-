#include <iostream>
#include <SFML/Graphics.hpp>
#include <sstream>
#include <string>


typedef std::string  str;

str timeToStr(const float & seconds);


int main()
{
    sf::Text text;
        //fronts
    sf::Font font;
    
    if(!font.loadFromFile("./font/OpenSans-Bold.ttf"))
    {
        //error
    }    
    text.setFont(font);
    sf::Clock clock;
    sf::RenderWindow window(sf::VideoMode(800,600), "Timer",sf::Style::Close); //render window
    window.setFramerateLimit(60);

    while(window.isOpen())
    {
        sf::Event event;

        while(window.pollEvent(event))
        {


            if (event.type == sf::Event::Closed)
            {
                window.close();
            }
            else if(event.type == sf::Event::LostFocus) {}


      
        }

       
        sf::Time elapsedTime = clock.getElapsedTime();
        
        text.setString(timeToStr(elapsedTime.asSeconds()));
        text.setCharacterSize(24);
        window.clear();
        window.draw(text);
        window.display();

   
    }

}


str timeToStr(const float & seconds)
{
    int seconds_int = seconds;
    return std::to_string(seconds_int) ;
}

