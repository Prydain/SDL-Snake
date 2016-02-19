#include "all.h"

int main(int argc, char** argv)
{
	initEngine();
	PlatformState* platformState = createPlatform("KMS Snake", CONST_SIZE_WINDOW_WIDTH, CONST_SIZE_WINDOW_HEIGHT, SDL_WINDOW_RESIZABLE);
	GameState* gameState = createGame();

	runMainLoop(gameState, platformState);

	freeGame(gameState);
	freePlatform(platformState);
	quitEngine();

    return 0;
}