

c_regle=1;
SDL_BlitSurface(rectangle_np,NULL,ecran,&pos0);
fseek(fichier,0,SEEK_SET);
while(c_regle)
{
   /// SDL_FillRect(ecran,NULL,SDL_MapRGB(ecran->format,255,255,255));

    i=0;

    while(fgets(instructions,100,fichier)!=NULL)
    {rules=TTF_RenderText_Blended(police[9],instructions,white);
    if(i==0)
    {xyRules.x=l_ecran/2-35;
    xyRules.y=15+i*22;}
    else
    {xyRules.x=75;
    xyRules.y=15+i*22;}

    i++;

    SDL_BlitSurface(rules,NULL,ecran,&xyRules);
    }


    SDL_Flip(ecran);

    SDL_WaitEvent(&regle);

    switch(regle.type)
    {

    case SDL_QUIT:
        c_regle=0;
    break;

    case SDL_KEYDOWN:
        switch(regle.key.keysym.sym)
            {
                case SDLK_RETURN:
                    c_regle=0;

                break;

                case SDLK_ESCAPE:
                    c_regle=0;

                break;

                default:
                break;


            }
        break;

    }

}

