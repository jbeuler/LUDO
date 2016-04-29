for(i=0; i<6; i++)
{
for(j=6; j<9; j++)
        {


        xyPetitCarre[i][j].x  = (l_ecran-688)/2 + 276 +j*(45+1)-6*(45+1);
        xyPetitCarre[i][j].y    = (L_ecran-688)/2+ i + 45*i;



        PetitCarre[i][j] = SDL_CreateRGBSurface(SDL_HWSURFACE,45,45,32,0,0,0,0);

        if((j==7||j==6)&&(j==7||i==0))
            {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,1,61,63));}
        else
            {SDL_FillRect(PetitCarre[i][j],NULL,SDL_MapRGB(ecran->format,0,136,141));}

        SDL_BlitSurface(PetitCarre[i][j], NULL, ecran, &xyPetitCarre[i][j]);

        }
}
