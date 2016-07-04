#pragma once
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_mixer.h>
#include <SDL_ttf.h>
#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>
#include <fstream>
#include <math.h>
#include <random>
#include <time.h>

class Window;
class Texture;
class Graphics;
class Game;
class Entity;
class StaticEntity;
class PhysicsEntity;
class Player;
class Level;
class Audio;

enum Direction {
	UP, DOWN, LEFT, RIGHT, TOTAL_DIRECTIONS
};

int invertDir(int);

/*
struct DirContainer {
	int up = -1;
	int down = -1;
	int left = -1;
	int right = -1;
};
*/