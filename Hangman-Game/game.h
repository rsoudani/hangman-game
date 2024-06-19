#pragma once
#include <string>
#include <vector>

class Game {

	enum class GameState {
		START,
		UPDATE,
		FINISH,
	};
public:
	void OnInit();
	void OnInput();
	bool OnUpdate();
	void OnRender();
	void OnShutdown();
private:
	std::string m_word;
	std::vector<std::string> m_wordsPool = { "kolor", "kanapka", "pancernik", "silnia", "autobus" };
	int m_guessedMask;
	GameState m_gameState = GameState::START;
	char m_guessedLetter;
	int m_missedLetters;
	bool m_isWin;

};