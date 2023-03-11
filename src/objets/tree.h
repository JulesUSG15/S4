#ifndef TREE_H
#define TREE_H

#include <SDL2/SDL.h>
#include "../coords.h"

/// @brief classe Tree
class Tree {
public:
    /// @brief constructeur de la classe Tree, en paramètre les coordonnées du Tree, et sa largeur et sa hauteur
    Tree(int x, int y, int TILE_SIZE);
    /// @brief destructeur de la classe Tree
    ~Tree();
    /// @brief fonction qui permet de renvoyer le Tree
    void push_back(Tree* Tree);
    /// @brief fonction qui permet de récupérer les coordonnées du Tree
    SDL_Rect getRect();
    /// @brief fonction qui permet de déplacer le Tree
    void move(double delta);
    /// @brief fonction qui permet de récupérer les coordonnées du Tree
    Coords getCoords();

private:
    /// @brief coordonnées du Tree
    Coords m_coords;
    /// @brief rectangle du Tree
    SDL_Rect m_rect;
    
};

#endif // Tree_H