
// CLICK SUR FACILE
void btnFacile(){
    sf::RenderWindow windowFacile(sf::VideoMode(1024, 700),"MOAKA : la chasse est Ouverte");



    if (!background_play_1.loadFromFile("src/background_facile_1.png"))
        {
            std::cout<< "Erreur chargement image background_facile.png !!"<< std::endl;
        }
    if (!background_play_2.loadFromFile("src/background_facile_2.png"))
        {
            std::cout<< "Erreur chargement image background_facile.png !!"<< std::endl;
        }
    if (boul.loadFromFile("src/vague.png")){
         std::cout<< "Erreur chargement image boul_de_feu !!"<< std::endl;
    }

        //          IMAGE SCENE MOAKA MARCHE
    if (!image_1_d.loadFromFile("src/scene_marche_moaka/image_1_d.png"))
        {
            std::cout<< "Erreur chargement image image_1.png !!"<< std::endl;
        }

    if (!img_2.loadFromFile("src/scene_marche_moaka/facil_moaka_2_d.png"))
        {
            std::cout<< "Erreur chargement image image_facile_2.png !!"<< std::endl;
        }
    if (!img_3.loadFromFile("src/scene_mort/img_couche_saigne.png"))
        {
            std::cout<< "Erreur chargement image img_tombe.png !!"<< std::endl;
        }
    if (!img_4.loadFromFile("src/scene_mort/img_couche.png"))
        {
            std::cout<< "Erreur chargement image img_couche.png !!"<< std::endl;
        }

    if (!img_5.loadFromFile("src/saute.png"))
    {
            std::cout<< "Erreur chargement image saute.png !!"<< std::endl;
    }


    if (!tire1.loadFromFile("src/scene_tire_moaka/tire_1.png"))
        {
            std::cout<< "Erreur chargement image tire_1.png !!"<< std::endl;
        }
    if (!tire2.loadFromFile("src/scene_tire_moaka/tire_2.png"))
        {
            std::cout<< "Erreur chargement image tire_2.png !!"<< std::endl;
        }

    if (!zombie_1.loadFromFile("src/zombie/zombie_1.png"))
    {
        std::cout<< "Erreur chargement image zombie_1.png !!"<< std::endl;
    }

     if (!zombie_2.loadFromFile("src/zombie/zombie_2.png"))
    {
        std::cout<< "Erreur chargement image zombie_2.png !!"<< std::endl;
    }

        sf::Clock horloge_2;




        sf::Text lettr_spe;

        lettr_spe.setCharacterSize(70);
        lettr_spe.setPosition(250,10);
        lettr_spe.setFont(font3);
        lettr_spe.setColor(sf::Color::Black);



        play_sprite_1.setTexture(background_play_1);        // ARRIERE PLAN DU JEU ET LE SCROOLING
        play_sprite_2.setTexture(background_play_2);


        //play_sprite.scale(1,1);


        play_sprite_2.setPosition(1000,0);
        sprite_image.setPosition(0,330);
        sprite_lion.setPosition(800,435);

        //sprite_lion.scale(1,1.5);

        sprite_zombie.setPosition(700,330);
        spr_zomb_a.setPosition(300,330);
        //sprite_boul.setTexture(boul);

        while (windowFacile.isOpen())
    {
        sf::Event event;
        while (windowFacile.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowFacile.close();
        }




         //Sprite Zombies


         spr_zomb_b.setTexture(zombie_2);

         spr_zomb_c.setTexture(zombie_1);


         spr_zomb_d.setTexture(zombie_2);
         spr_zomb_e.setTexture(zombie_1);
         spr_zomb_f.setTexture(zombie_2);
         spr_zomb_g.setTexture(zombie_1);
         spr_zomb_h.setTexture(zombie_2);


        sprite_zombie.setTexture(zombie_2);
        spr_zomb_a.setTexture(zombie_2);

// MOUVEMENT DES SPRITES ZOMBIES

        int prec, p_zom1;
        int actu = sprite_zombie.getPosition().x;

        if((actu <= prec)&&(actu != sprite_image.getPosition().x + 230)){
            sprite_zombie.move(-0.05,0);
        }


        if(actu&7){
            sprite_zombie.setTexture(zombie_1);
        }
        prec = sprite_zombie.getPosition().x;

        p_zom1 = sprite_zombie_1.getPosition().x;


        int prec_1, p_zom2;
        int actu_1 = spr_zomb_a.getPosition().x;

        if((actu_1 <= prec_1)&&(actu_1 != sprite_image.getPosition().x + 230)){
            spr_zomb_a.move(-0.05,0);
        }
        if(actu_1&7){
            spr_zomb_a.setTexture(zombie_1);
        }
        prec_1 = spr_zomb_a.getPosition().x;

        p_zom2 = sprite_zombie_1.getPosition().x;

// FIN DES MOUVEMENT DE SPRITES


        srand(time(0)); //
        sprite_image.setTexture(image_1_d);

        // POSITION DE LA VAGUE
       /* int positionVagueX = sprite_image.getPosition().x + 275,
            positionVagueY = sprite_image.getPosition().y + 50;

        sprite_boul.setPosition(positionVagueX,positionVagueY);
        */

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
        {
            pause_game();
        }

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)&&(sprite_image.getPosition().x != sprite_image.getPosition().x + 230))
        {
            if(actu >= sprite_image.getPosition().x + 130){
                sprite_image.move(speed,0);
            }
            scene_moaka_marche();
        }
        if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            sprite_image.move(-speed,0);
            scene_moaka_marche();
        }
                sprite_image.setPosition(sprite_image.getPosition().x,330);


        /*if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up)&&(sprite_image.getPosition().x != sprite_image.getPosition().x + 230))
        {
            sprite_image.setTexture(img_5);
            sprite_image.setPosition(sprite_image.getPosition().x+3, sprite_image.getPosition().y-50);

        }*/

        if(sf::Keyboard::isKeyPressed(sf::Keyboard::T))
        {
        //Le TIRE de MOAKA
            sprite_image.setTexture(tire1);
            sprite_flech_facil.setPosition(sprite_image.getPosition().x + 20,sprite_image.getPosition().y + 90);
            bl_tch_moaka = true;


            //sprite_boul.setPosition(sprite_zombie.getPosition().x + 10,sprite_zombie.getPosition().y+80);
        /*                  A REFLECHIRE
            if(positionVagueX > sprite_image.getPosition().x + 270 && positionVagueX < sprite_zombie.getPosition().x + 200){
                sprite_boul.setTexture(boul);
                sprite_boul.move(20,0);
            }
        */

        }


            colision();
            ia_lion();



           // int tempActu_3 = horloge_2.getElapsedTime().asSeconds()+1;








                  //cout<< "Le nombre aleatoire genere est : "<<lettre<<endl;

                  /*if(lettre="a") lettr_spe.setString(lettre);
                  if(lettre="b") lettr_spe.setString(letre);
                  if(lettre="c") lettr_spe.setString(lettre);
                  if(lettre="d") lettr_spe.setString(letre);
                  if(lettre="e") lettr_spe.setString(lettre);
                  if(lettre="f") lettr_spe.setString(letre);
                  if(lettre="g") lettr_spe.setString(lettre);
                  if(lettre="h") lettr_spe.setString(letre);
                  if(lettre="g") lettr_spe.setString(lettre);
                  if(lettre="i") lettr_spe.setString(letre);
                  if(lettre="j") lettr_spe.setString(lettre);
                  if(lettre="k") lettr_spe.setString(letre);
                  if(lettre="l") lettr_spe.setString(lettre);
                  if(lettre="") lettr_spe.setString(letre);*/




                            //         SCROLLING EN TRAVAIL
        view.reset(sf::FloatRect(0,0,screenH,screenM));
        sf::Vector2f position(screenH/2,screenM/2);
        position.x = (sprite_image.getPosition().x + 100)- (screenH/2);
        position.y = (sprite_image.getPosition().y)- (screenM/2);

        if(position.x <0)
            position.x=0;
        view.reset(sf::FloatRect(position.x,0,screenH,screenM));

        if(sprite_image.getPosition().x >= 1400)
            {
            sprite_image.setPosition(1400,330);
        }


        windowFacile.setView(view);

        windowFacile.draw(play_sprite_1);
        windowFacile.draw(play_sprite_2);
        windowFacile.draw(spr_zomb_a);
        windowFacile.draw(sprite_image);
        windowFacile.draw(sprite_zombie);
        windowFacile.draw(sprite_zombie_1);
        windowFacile.draw(sprite_lion);
        windowFacile.draw(sprite_boul);
        windowFacile.draw(lettr_spe);


        windowFacile.display();
        windowFacile.clear();

    }


}


