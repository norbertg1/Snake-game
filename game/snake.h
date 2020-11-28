#pragma once
#include "position.h"


enum Direction {
  END,
  UP,
  LEFT,
  DOWN,
  RIGHT
};

typedef unsigned char uint8_t;


class Snake {
  public:
    Snake();
    ~Snake();
  
    Position nextHeadPosition();
    void turn(Direction direction);
    void advance();
    void grow();

    const bool isAlive();
    const uint8_t getPoints();
    const Position getHeadPosition();
    const uint8_t ** getBody();
    const static uint8_t BODY_WIDTH = 16;
    const static uint8_t BODY_HEIGHT = 8;
  private:
    bool alive = true;
    Direction direction;
    Direction turnDirection;
    Position head { Position(0, 0) };
    uint8_t bodyLength = 2;
    uint8_t ** body;
};