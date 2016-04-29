    for(i=0; i<(3*dimCarre+3);i++)/**les lignes du milieu*/
    {
        xylignes.x=i+ 6*dimCarre+5 + (l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X;
        xylignes.y=i+ 6*dimCarre+5+ (L_ecran-(LONGUEUR_TABLEAU-1))/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

        xylignes.x=(6*dimCarre+3*dimCarre+6)-i+1+ (l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X;
        xylignes.y=i+6*dimCarre+5+ (L_ecran-(LONGUEUR_TABLEAU-1))/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

    }

    /**Les grandes lignes*/
    for(i=0; i<(6*dimCarre+3);i++)
        {
        xylignes.x=(LONGUEUR_TABLEAU-(6*dimCarre+3))+i+ (l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X;/**HD*/
        xylignes.y=i+ (L_ecran-(LONGUEUR_TABLEAU-1))/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

        xylignes.x=i-2+(l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X;/**BG*/
        xylignes.y= (LONGUEUR_TABLEAU-(6*dimCarre+5))+i + (L_ecran-(LONGUEUR_TABLEAU-1))/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);


        xylignes.x=(6*dimCarre)-i+ (l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X;/**HG*/
        xylignes.y=i+ (L_ecran-(LONGUEUR_TABLEAU-1))/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);

        xylignes.x=LONGUEUR_TABLEAU-i-2+ (l_ecran-(LONGUEUR_TABLEAU-1))/COEFFICIENT_X;/**BD*/
        xylignes.y=(LONGUEUR_TABLEAU-(6*dimCarre+4))+i+ (L_ecran-(LONGUEUR_TABLEAU-1))/2;
        SDL_BlitSurface(lignes,NULL,ecran,&xylignes);


    }
