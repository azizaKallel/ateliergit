#ifndef FONCTION_H
#define fonction_H
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
typedef struct
{
        SDL_Surface *mn;
        SDL_Rect mp;
        SDL_Rect bn;
}minimap;
void MAJMinimap(SDL_RECTposJoeur,minimap*m,SDL_Rect camera,int redimensionnement);
void afficher(minimap m,SDL_Surface*screen);
void Libere(minimap*m);
        
