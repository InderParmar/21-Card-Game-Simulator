# 21 Card Game Simulator

## Overview
This project is a simulation of the popular card game "21", developed as part of the SEP200 course. The game is designed for two players and aims to simulate the experience of playing "21" without physical cards. The software introduces unique features not available in the traditional card game, including a high-definition mode with decimal values for cards and the concept of "dependent cards" to add complexity.

## Features
- **Two Game Modes**: Standard low-definition mode with integer card values and a high-definition mode with decimal values for a more nuanced gameplay experience.
- **Random Card Draws**: "Attack cards" and "dependent cards" are drawn at random, with values within specified ranges to ensure fair play.
- **Player Interaction**: The game supports two players, each with the ability to bet, draw cards, and make strategic decisions based on their hand.
- **Dynamic Game Flow**: Players can add "dependent cards" to reduce their total or "attack cards" to increase it, aiming to get as close to 21 as possible without going over.

## Technologies Used
- C++
- Object-Oriented Programming Principles
- Random Number Generation for Card Drawing

## How to Run the Game
1. **Clone the Repository**: `git clone https://github.com/yourusername/21-Card-Game-Simulator.git`
2. **Compile the Code**: Navigate to the project directory and compile the code using a C++ compiler, e.g., `g++ -o game GameMode.cpp PlayerMain.cpp -std=c++11`
3. **Start the Game**: Run the compiled executable, `./game`, and follow the on-screen instructions to play.

## Game Instructions
- Each player starts with $1000 and can bet an amount within a specified range for each game.
- Players decide on the number of "dependent cards" and "attack cards" they wish to draw.
- The game progresses with players either adding to their total with "attack cards" or reducing it with "dependent cards".
- The goal is to get as close to 21 as possible without exceeding it. The player with the total closest to 21 wins the round and the bet.

## Future Enhancements
- **Graphical User Interface (GUI)**: Implement a GUI for an immersive and interactive gaming experience.
- **Multiplayer Support**: Extend the game to support more than two players, either locally or over a network.
- **Additional Game Modes**: Introduce new modes with different rules or card values for varied gameplay.

---

For more information or contributions, please feel free to contact me or submit a pull request.

