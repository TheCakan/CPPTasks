#include <iostream>
#include <memory>
#include <SFML/Graphics.hpp>
std::unique_ptr<sf::RenderWindow> window(
        new sf::RenderWindow(sf::VideoMode(600,400),"Graph")
        );

void collide(sf::CircleShape &snake,sf::RectangleShape&apple ){
    float centerX,centerY;
    centerX=snake.getPosition().x+snake.getRadius();
    centerY=snake.getPosition().y+snake.getRadius();
    if(centerX<=apple.getPosition().x+apple.getSize().x && centerX>=apple.getPosition().x){
        if(centerY<=apple.getPosition().y+apple.getSize().y && centerY>=apple.getPosition().y){
            apple.setPosition(rand()%window->getSize().x,rand()%window->getSize().y);
        }
    }
}

int main() {
    std::unique_ptr<int> a(new int(2));
    std::shared_ptr<int> b(new int(2));
    std::weak_ptr<int> c=b;
    sf::Event e{};
    sf::Texture tx,tx2;
    tx.loadFromFile("..\\pacman.png");
    tx2.loadFromFile("..\\floppy.png");
    sf::CircleShape snake=sf::CircleShape(30);
    sf::RectangleShape apple=sf::RectangleShape(sf::Vector2f(40,40));
    snake.setTexture(&tx);
    apple.setTexture(&tx2);
    float x=0,y=0;
    while (window->isOpen()){
        window->clear();
        window->draw(snake);
        window->draw(apple);
        snake.move(x,y);
        collide(snake,apple);
        sf::sleep(sf::milliseconds(10));
        window->display();
        while (window->pollEvent(e)){
            if(e.type==sf::Event::KeyPressed){
                if(e.key.code==sf::Keyboard::Up){
                    x=0; y=-2;
                }
                if(e.key.code==sf::Keyboard::Down){
                    x=0; y=2;
                }
                if(e.key.code==sf::Keyboard::Left){
                    x=-2; y=0;
                }
                if(e.key.code==sf::Keyboard::Right){
                    x=2; y=0;
                }

            }
        }
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
