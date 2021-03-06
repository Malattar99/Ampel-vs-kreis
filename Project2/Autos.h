#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<iostream>
#include "CarProp.h"
#include <math.h>
#include "Ampel.h"

#ifndef AUTOS
#define AUTOS
using namespace std;
class Autos
{

private:

	sf::Texture texture;

	void initTexture(Color c);
	void initSprite();
	int rndValue = rand() % 10;
	bool abbiegen;

public:
	sf::Sprite sprite;
	Autos(Direction spawn, Color color, Direction direction);
	virtual ~Autos();
	Direction currentDirection;
	Direction originalDirection;
	
	//bool const stopWO;
	const sf::Vector2f getPos() const;
	const bool checkIfInFront() const;
	const Direction getOriginalDir() const;
	const Direction getCurrentDir() const;
	float speedp = 0.005;
	float speedm = -0.005;
	void bremsung();
	void beschleunigung();
	void AntiCrash();

	

	void update();
	void render(sf::RenderTarget& target);
};
#endif // AUTOS