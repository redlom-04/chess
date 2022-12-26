#ifndef CHESS_H
#define CHESS_H

typedef struct Position {
  int x;
  int y;
} Pos;

typedef struct Move {
  char type;
  Pos *pos_start;
  Pos *pos_end;
  struct Move *next;
} Move;

#endif
