// TIRE DE FLECHE

void moaka_tire(){
    int tempActu = temp.getElapsedTime().asSeconds();
    std::cout<< "le temps actuel est : "<<tempActu<<std::endl;

        if (tempActu == 1){
                sprite_perso.setTexture(perso_menu_2);
                sprite_flech.setTexture(flech_menu_1);

        }

        if(tempActu > 2)
        sprite_flech.move(20,-15);

        if (tempActu == 3){
            sprite_perso.setTexture(perso_menu_3);
            sprite_flech.setTexture(flech_menu_1);
        }

         if (tempActu == 4){
            sprite_perso.setTexture(perso_menu_4);
        }


        sprite_perso.setPosition(sprite_persox,sprite_persoy);
}
