for(j=9; j<15; j++)
{
for(i=6; i<9; i++)
        {


        xyPetitCarre[i][j].y = (L_ecran-688)/2 +276 +i*(45+1) -6*(45+1);
        xyPetitCarre[i][j].x  = (l_ecran-688)/2 +414+ j*(45+1) -9*(45+1);





        PetitCarre[i][j] = SDL_CreateRGBSurface(SDL_HWSURFACE,45,45,32,0,0,0,0);
        if((i==7||i==6)&&(i==7||j==14))
            {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,1,61,63));}
        else
            {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,0,136,141));}

        SDL_BlitSurface(PetitCarre[i][j], NULL, ecran, &xyPetitCarre[i][j]);

        }
}
