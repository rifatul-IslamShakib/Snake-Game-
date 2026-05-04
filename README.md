# Snake-Game-
This project is a classic Snake Game implemented in C++, designed to run in the console. It demonstrates fundamental programming concepts such as loops, conditionals, arrays, and real-time input handling through an interactive game.

## 🎮 Features

*   **Classic Gameplay**: Navigate the snake to consume food and grow your tail.
*   **Real-Time Movement**: Responsive controls for a smooth arcade feel.
*   **Dynamic Spawning**: Food (*) appears at random coordinates within the boundaries.
*   **Score Tracking**: Real-time score updates displayed directly below the game board.
*   **Collision Physics**:
    *   **Wall Collision**: Game over if you hit the boundary.
    *   **Self Collision**: Game over if the snake runs into its own body.

## 🕹️ How to Play

### Controls
Use your keyboard to guide the snake:
*   **W** → Move Up
*   **A** → Move Left
*   **S** → Move Down
*   **D** → Move Right
*   **X** → Exit Game (Optional)

### Objective
Eat the food (**\***) to grow longer. Each piece of food increases your score. The game ends if you hit the walls or your own tail (**O**).

## 📸 Gameplay Preview
```text
####################
#                  #
#        *         #
#      OOOO        #
#                  #
####################
Score: 10
# Future Improvements
Add levels and increasing difficulty
Implement high score saving system
Add sound effects
Create a graphical version using SDL/OpenGL
