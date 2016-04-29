while (continuer)
    {



                    SDL_WaitEvent(&event);

                        switch(event.type)
                        {
                        case SDL_QUIT:
                                continuer = 0;
                                break;

                        case SDL_KEYDOWN:
                                switch(event.key.keysym.sym)
                                    {
                                    case SDLK_UP:
                                        if((l==8&&k>9)||(l==8&&k<6&&k>0)||(l==14&&k>6)||(l==7&&k>9))
                                        k--;
                                        if(k==9&&l==8)
                                        {k--;
                                        l++;}
                                        break;
                                    case SDLK_DOWN:
                                        if((l==6&&k>=9&&k<14)||(l==6&&k<5)||(l==0&&k<8))
                                        k++;
                                        if(k==5&&l==6)
                                        {k++;
                                        l--;}
                                        break;
                                    case SDLK_RIGHT:
                                        if((k==8&&l>8&&l<14)||(k==8&&l<5)||(k==14&&l<7))
                                        l++;
                                        if(k==8&&l==5)
                                        {k++;
                                        l++;}
                                        break;
                                    case SDLK_LEFT:
                                        if((k==6&&l>9&&l<=14)||(k==6&&l<=5&&l>0)||(k==0&&l>6))
                                        l--;
                                        if(k==6&&l==9)
                                        {k--;
                                        l--;}
                                        break;
                                    }break;

                        case SDL_MOUSEBUTTONUP:

                                for(i=0;i<15;i++)
                                {
                                    for(j=0;j<15;j++)
                                    {
                                        if((event.button.x>=xyPetitCarre[i][j].x)&&(event.button.x<=xyPetitCarre[i][j].x+45)&&(event.button.y>=xyPetitCarre[i][j].y)&&(event.button.y<=xyPetitCarre[i][j].y+45))
                                        {
                                            k=i;
                                            l=j;
                                        }
                                    }
                                }


                                break;


                        }


                                    SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));
                                    SDL_FillRect(CarreMilieu,NULL,SDL_MapRGB(ecran->format,0,136,141));
                                    SDL_BlitSurface(CarreMilieu,NULL,ecran,&xyCarreMilieu);
                                    #include "GrandCarre.h"
                                    #include "GAUCHE.h"
                                    #include "DROITE.h"
                                    #include "HAUT.h"
                                    #include "BAS.h"

         /**Gestion des lignes*/
    for(i=0; i<688;i++)/**les grandes lignes*/
    {
        xylignes.x=i+ (l_ecran-688)/2;
        xylignes.y=i+ (L_ecran-688)/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

        xylignes.x=688-i+ (l_ecran-688)/2;
        xylignes.y=i+ (L_ecran-688)/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

    }

    /**Les petites*/
    for(i=0; i<273;i++)
        {
        xylignes.x=(688-273)+i+ (l_ecran-688)/2;
        xylignes.y=i+ (L_ecran-688)/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

        xylignes.x=i+ (l_ecran-688)/2;
        xylignes.y= (688-273)+i + (L_ecran-688)/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);


        xylignes.x=273-i+ (l_ecran-688)/2;
        xylignes.y=i+ (L_ecran-688)/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

        xylignes.x=688-i+ (l_ecran-688)/2;
        xylignes.y=(688-273)+i+ (L_ecran-688)/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);


    }

        SDL_BlitSurface(piece[0],NULL,ecran,&xyPetitCarre[k][l]);
        SDL_BlitSurface(piece[1],NULL,ecran,&xyPetitCarre[m][n]);


                                    SDL_BlitSurface(piece[0],NULL,ecran,&xyPetitCarre[k][l]);
                                    SDL_BlitSurface(piece[1],NULL,ecran,&xyPetitCarre[m][n]);
                                    SDL_Flip(ecran);


    }


