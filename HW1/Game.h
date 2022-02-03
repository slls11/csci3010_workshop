#ifndef _GAME_H_
#define _GAME_H_

#include <vector>
#include "Player.h"

// you may change this enum as you need
enum class SquareType { Wall, Dots, Pacman, Treasure, Enemies, Empty, PowerfulPacman, Trap, EnemySpecialTreasure };

// TODO: implement
std::string SquareTypeStringify(SquareType sq);

class Board {
public:
	// TODO: implement
	Board();

	// already implemented in line
	int get_rows() const {return 10; }  // you should be able to change the size of your
	int get_cols() const {return 10; }  // board by changing these numbers and the numbers in the arr_ field

	// TODO: you MUST implement the following functions
	SquareType get_square_value(Position pos) const;

	// set the value of a square to the given SquareType
	void SetSquareValue(Position pos, SquareType value);

	// get the possible Positions that a Player/Enemy could move to
	// (not off the board or into a wall)
	std::vector<Position> GetMoves(Player *p);

	// Move a player to a new position on the board. Return
	// true if they moved successfully, false otherwise.
	bool MovePlayer(Player *p, Position pos, std::vector<Player*> enemylist);

  // Move an enemy to a new position on the board. Return
	// true if they moved successfully, false otherwise.
  bool MoveEnemy(Player *p, Position pos);

	// You probably want to implement this
	friend std::ostream& operator<<(std::ostream& os, const Board &b);

private:
	SquareType arr_[10][10];
	int rows_; // might be convenient but not necessary
	int cols_;
	// you may add more fields, as needed
};  // class Board

class Game {
public:
	// TODO: implement these functions
	Game(); // constructor

	// initialize a new game, given one human player and
	// a number of enemies to generate
	void NewGame(Player *human,std::vector<Player*> enemylist, const int enemies);

	// have the given Player take their turn
	void TakeTurn(Player *p,std::vector<Player*> enemylist);

	//have the enemy take turn
	void TakeTurnEnemy(Player *p);

	bool IsGameOver(Player *p);

	// return true if all pellets have been collected
	bool CheckifdotsOver();

	// You probably want to implement these functions as well
	// string info about the game's conditions after it is over
	std::string GenerateReport(Player *p);

	friend std::ostream& operator<<(std::ostream& os, const Game &m);

private:
	Board *board_;
	std::vector<Player *> players_;
	int turn_count_;
  int dots_count_;
  bool GameOver;

	// you may add more fields, as needed

};  // class Game

#endif  // _GAME_H_
