#include "Game.h"

int main() 
{
    Game *game = new Game;
    
    std::string choice {};
    bool continue_loop = true;
    std::cout << "=== MAIN MENU ===" << std::endl;
    std::cout << "0: New Game" << std::endl;
    std::cout << "1: Load Save" << std::endl;
    std::cout << "Q: Quit" << std::endl;
    std::cout << "=================" << std::endl;

    while (continue_loop)
    {
        std::getline(std::cin, choice);
        string_tolower(choice);
        
        /* Start a new game */
        if (choice.compare("0") == 0)
        {
            continue_loop = false;
            initialize_main_graph(game);
            game->createNewCharacter();
        }
        /* Load up new graph */
        else if (choice.compare("1") == 0) 
        {
            continue_loop = false;
            game->load();
        }
        /* Exit */
        else if (choice.compare("q") == 0)
        {
            return 0;
        }
        else
        {
            /* Do nothing */
        }
    }   
    
    std::vector<std::string> args;
    
    /* Main game loop */
    while (game->getPlaying())
    {
        game->currLoc->printDescr();
        std::cout << ">";
        args = game->parseChoice();
    }
    
    return 0;
}