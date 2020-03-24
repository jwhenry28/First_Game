#include "Game.h"

int main() 
{
    Game *game = new Game;
    
    initialize_main_graph(game);
    
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

        if (choice.compare("0") == 0)
        {
            continue_loop = false;
            game->createNewCharacter();
        }
        else if (choice.compare("1") == 0) 
        {
            continue_loop = false;
            game->load();
        }
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
    
    while (game->getPlaying())
    {
        std::cout << ">";
        args = game->parseChoice();
        
        for (size_t i = 0; i < args.size(); i++)
        {
            std::cout << "Token " << i + 1 << ": " << args.at(i) << std::endl;
        }
    }
    
    return 0;
}

// ********** Notes ********** //