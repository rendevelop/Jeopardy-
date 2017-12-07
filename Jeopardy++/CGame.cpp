/**
 * Project Untitled
 */


#include "CGame.h"

CGame::CGame() {};

CGame::CGame(CQuiz * quiz, int gameType, int temptLimit) {
	this->quiz = quiz;
	this->gameType = gameType;
	this->temptLimit = temptLimit;
}

int CGame::getGameType() {
    return gameType;
}

void CGame::setGameType(int gameType) {
    this->gameType = gameType;
}

int CGame::getTemptLimit() {
    return temptLimit;
}

void CGame::setTemptLimit(int temptLimit) {
    this->temptLimit = temptLimit;
}

CQuiz * CGame::getQuiz() {
    return quiz;
}

void CGame::setQuiz(CQuiz * quiz) {
    this->quiz = quiz;
}