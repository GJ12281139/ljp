#include <stdio.h>  
#include <SDL/SDL.h>  
int main()  
{  
    //The images  
    SDL_Surface* hello = NULL;  
    SDL_Surface* screen = NULL;  
    SDL_Init( SDL_INIT_EVERYTHING );  
    //Set up screen  
    screen = SDL_SetVideoMode( 640, 480, 32, SDL_SWSURFACE );  
    //Load image  
    hello = SDL_LoadBMP( "1.bmp" );  
    //Apply image to screen  
    SDL_BlitSurface( hello, NULL, screen, NULL );  
    //Update Screen  
    SDL_Flip( screen );  
    //Pause  
    SDL_Delay( 5000 );      
    //Quit SDL
    SDL_Quit();  
    //Free memory  
    SDL_FreeSurface( hello );  
    //Quit SDL  
    SDL_Quit();  
    return 0;  
} 
