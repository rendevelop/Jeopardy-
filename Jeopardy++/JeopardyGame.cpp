#include "JeopardyGame.h"

JeopardyGame::JeopardyGame(CQuiz * quiz, int gameType, int temptLimit, int rows, int cols, string colHeadings) : CGame(quiz, gameType, temptLimit) {
	this->rows = rows;
	this->cols = cols;
	this->colHeadings = colHeadings;
}

int JeopardyGame::getRows() {
	return rows;
}


int JeopardyGame::getCols() {
	return cols;
}


void JeopardyGame::setRows(int rows) {
	this->rows = rows;
}


void JeopardyGame::setCols(int cols) {
	this->cols = cols;
}


string JeopardyGame::getColHeadings() {
	return colHeadings;
}


void JeopardyGame::setColHeadings(string colHeadings) {
	this->colHeadings = colHeadings;
}