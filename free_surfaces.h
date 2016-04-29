/**Liberation des surfaces chargees*/

    for(i=0; i<15; i++)
    {for(j=0; j<15; j++)
        {SDL_FreeSurface(PetitCarre[i][j]);}
    }

     for(i=0; i<16; i++)
    {
        SDL_FreeSurface(piece[i]);
        SDL_FreeSurface(cercle[i]);
    }

    for(i=0;i<24;i++)
    {
        SDL_FreeSurface(loading[i]);
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
          SDL_FreeSurface(GrandCarre[i][j]);
    }
    }

    for(i=0;i<3;i++)
    {
        SDL_FreeSurface(image_menu[i]);
    }

    for(i=0;i<39;i++)
    {
        SDL_FreeSurface(texte[i]);
    }

    for(i=0;i<22;i++)
    {
        SDL_FreeSurface(De[i]);
    }


    SDL_FreeSurface(carreblanc);
    SDL_FreeSurface(fond_ecran);
    SDL_FreeSurface(hint);
    SDL_FreeSurface(carrejaune);
    SDL_FreeSurface(GDe);

    for(i=0;i<32;i++)
    {
        SDL_FreeSurface(anim_fds[i]);
    }

    SDL_FreeSurface(case_lum);
    SDL_FreeSurface(case_pointmotion);
    SDL_FreeSurface(case_point);
    SDL_FreeSurface(menu);
    SDL_FreeSurface(rules);
    FMOD_Sound_Release(deplace);
    FMOD_Sound_Release(choose);
    FMOD_Sound_Release(eat);
    FMOD_Sound_Release(turn);

    FMOD_Sound_Release(info);
    FMOD_Sound_Release(diice);


        for(j=0;j<19;j++)
            SDL_FreeSurface(fireworks[j]);

        for(j=0;j<=20;j++)
            SDL_FreeSurface(fireworks2[j]);

        for(j=0;j<=16;j++)
            SDL_FreeSurface(fireworks1[j]);

    SDL_FreeSurface(CarreMilieu);
    SDL_FreeSurface(lignes);
    SDL_FreeSurface(rectangle_noir);
    SDL_FreeSurface(rectangle_quitter);
    SDL_FreeSurface(rectangle_np);
    SDL_FreeSurface(rectangle_jb);
    SDL_FreeSurface(encadre_de);
    SDL_FreeSurface(fond_jeu);
    SDL_FreeSurface(tablo);

     for(i=0;i<3;i++)
        for(j=0;j<10;j++)
        {
            SDL_FreeSurface(touche[i][j]);
            SDL_FreeSurface(boutton_clavier[i][j]);
        }



    for(i=0;i<11;i++)
    {TTF_CloseFont(police[i]);}

    TTF_Quit();
    fclose(fichier);
    fclose(fichier1);

    SDL_Quit();
