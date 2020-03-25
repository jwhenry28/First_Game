#include "Game.h"
#include "Utils.h"


Game::Game()
    : graph {nullptr}, choice {0}, playing {true}, fileName {"../save/save"} {
}


Game::~Game()
{
}


/* Modifiers */
void Game::movePlayer(std::string direction)
{
    Location curr = *currLoc;
    if (direction.compare("north") == 0)
    {
        if (curr.getNorth() == nullptr)
        {
            std::cout << "You can't go that way!" << std::endl;
        }
        else
        {
            this->currLoc = currLoc->getNorth();
        }
    }
    else if (direction.compare("south") == 0)
    {
        if (curr.getSouth() == nullptr)
        {
            std::cout << "You can't go that way!" << std::endl;
        }
        else
        {
            this->currLoc = currLoc->getSouth();
        }
    }
    else if (direction.compare("east") == 0)
    {
        if (curr.getEast() == nullptr)
        {
            std::cout << "You can't go that way!" << std::endl;
        }
        else
        {
            this->currLoc = currLoc->getEast();
        }
    }
    else if (direction.compare("west") == 0)
    {
        if (curr.getWest() == nullptr)
        {
            std::cout << "You can't go that way!" << std::endl;
        }
        else
        {
            this->currLoc = currLoc->getWest();
        }
    }
    else
    {
        std::cout << "I don't understand that direction..." << std::endl;
    }
}


/* Functions */
/* parseChoice - Parses a command from the command line
 */
std::vector<std::string> Game::parseChoice()
{
    std::cout << "> ";
    std::string input {};
    std::getline(std::cin, input);
    
    /* Make lowercase to account for capitalizations */
    string_tolower(input);
    
    /* Exit game */
    if (input.compare("quit") == 0)
    {
        std::string choice {};
        std::cout << "Would you like to save? (Y/N) ";
        std::getline(std::cin, choice);
        string_tolower(choice);
        
        if (choice.compare("y") == 0)
        {
            this->save();
        }
        
        this->playing = false;
        std::vector<std::string> args {};
        return args;
    }
    
    /* Parse the input */
    std::istringstream iss(input);
    std::vector<std::string> args((std::istream_iterator<std::string>(iss)),
                                      std::istream_iterator<std::string>());
                                      
                            
    /* Handle input */
    std::string cmd = args.at(0);
    if (cmd.compare("go") == 0 || cmd.compare("move") == 0)
    {
        this->movePlayer(args.at(1));
    }
    
    return args;
}


void Game::createNewCharacter()
{
    std::string name {};
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    player.initialize(name);
    std::cout << "Welcome " << player.getName() << std::endl;
}


void Game::save()
{
    std::string saveFile = fileName + "_" + player.getName() + ".txt";
    std::ofstream outFile(saveFile);
    
    if (outFile.is_open())
    {
        outFile << player.getName();
        std::cout << "Game saved for " << player.getName() << std::endl;
    }
    
    outFile.close();
}


void Game::load()
{
    std::string loadName {};
    std::cout << "Enter your name: ";
    std::getline(std::cin, loadName);
    std::string saveFile = this->fileName + "_" + loadName + ".txt";
    std::ifstream inFile(saveFile);
    
    if (inFile.is_open())
    {
        player.setName(loadName);
        std::cout << "Welcome " << player.getName() << std::endl;
        
        /* Set location graph based on what is in file */
    }
    else
    {
        std::cout << "No file exists for that name" << std::endl;
    }
}