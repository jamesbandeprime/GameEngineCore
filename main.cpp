#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include </usr/include/tinyxml2.h>

class Tilemap
{
public:
    void load(const std::string& filename);
    void draw(sf::RenderWindow& window);

private:
    sf::Texture m_texture;
    sf::Sprite m_sprite;
    std::map<int, sf::Rect<float>> m_tiles;
    std::string m_filename;
};

class Player
{
public:
    Player(sf::Vector2f position, float speed);
    void move(sf::Vector2f direction);
    void draw(sf::RenderWindow& window);

private:
    sf::Sprite m_sprite;
    sf::Vector2f m_position;
    float m_speed;
};

class Enemy
{
public:
    Enemy(sf::Vector2f position, float speed);
    void move(sf::Vector2f direction);
    void draw(sf::RenderWindow& window);

private:
    sf::Sprite m_sprite;
    sf::Vector2f m_position;
    float m_speed;
};

void Tilemap::load(const std::string& filename)
{
    // Code pour charger la texture et les données du tilemap en utilisant l'API de chargement XML
}

void Tilemap::draw(sf::RenderWindow& window)
{
    // Code pour dessiner le tilemap sur la fenêtre
}

Player::Player(sf::Vector2f position, float speed)
{
    // Code pour charger l'image du joueur et initialiser sa position et sa vitesse
}

void Player::move(sf::Vector2f direction)
{
}