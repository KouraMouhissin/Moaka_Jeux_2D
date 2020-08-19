// MENU DU JEU

void menu_principal(){

    // Création de la fénêtre
    window.create(sf::VideoMode(792,590), "Koura Codes", sf::Style::None);

    window.setFramerateLimit(60);


    //Chargement des images
    if (!click.loadFromFile("src/click.png"))
    {
        std::cout<< "Erreur chargement image click !! "<< std::endl;
    }

    if (!perso_menu_1.loadFromFile("src/anim_menu/Creation_menu_1.png"))
    {
        std::cout<< "Erreur chargement image perso_menu_1 !!"<< std::endl;
    }
    if (!perso_menu_2.loadFromFile("src/anim_menu/Creation_menu_2.png"))
    {
        std::cout<< "Erreur chargement image perso_menu_2 !!"<< std::endl;
    }
    if (!perso_menu_3.loadFromFile("src/anim_menu/Creation_menu_3.png"))
    {
        std::cout<< "Erreur chargement image perso_menu_3 !!"<< std::endl;
    }
    if (!perso_menu_4.loadFromFile("src/anim_menu/Creation_menu_4.png"))
    {
        std::cout<< "Erreur chargement image perso_menu_4 !!"<< std::endl;
    }
    if (!flech_menu_1.loadFromFile("src/anim_menu/flech_menu.png"))
    {
        std::cout<< "Erreur chargement image flech_menu_1 !!"<< std::endl;
    }

    if (!backgrnd.loadFromFile("src/background3.png"))
    {
        std::cout<< "Erreur chargement image background3 !! "<< std::endl;
    }
    //Fin Chargement


    //Les setTexture
    sprite_click.setTexture(click);

    sprite_perso.setTexture(perso_menu_1);
    sprite_backgrnd.setTexture(backgrnd);
    //Fin setTexture


    //Les Position
    //sprite_click.setPosition();

    sprite_perso.setPosition(sprite_persox,sprite_persoy);
    sprite_flech.setPosition(sprite_flechx,sprite_flechy);
    sprite_flech.setRotation(-10);
    //Fin Position

    // Charchement Font
    if(!font1.loadFromFile("src/font/green fuz.ttf"))
    {
        std::cout<< "Erreur chargement Font 1 !! "<< std::endl;
    }
    if(!font2.loadFromFile("src/font/BEYONDCONTROL.ttf"))
    {
        std::cout<< "Erreur chargement Font 2 !! "<< std::endl;
    }
    if(!font3.loadFromFile("src/font/GoogleSansDisplay-Bold.ttf"))
    {
        std::cout<< "Erreur chargement Font 1 !! "<< std::endl;
    }
    //Fin Chargerment

        sf::Music music;
    if (!music.openFromFile("src/music/babal.ogg"))
        std::cout<<"Erreur de Chargement music babal.ogg"<<std::endl;
    // Play the music
    music.stop();
   music.setLoop(true);


    //Chargement Text
    txt_jouer.setFont(font2);
    txt_aide.setFont(font2);
    txt_niveau.setFont(font2);
    txt_quitter.setFont(font2);
    titr_jeu.setFont(font2);
    chass_ouverte.setFont(font1);

    txt_jouer.setString("JOUER");
    txt_aide.setString("AIDE");
    txt_niveau.setString("NIVEAU");
    txt_quitter.setString("QUITTER");
    titr_jeu.setString("MOAKA");
    chass_ouverte.setString("La CHASSE EST OUVERTE !!! ");

    txt_jouer.setCharacterSize(34);
    txt_aide.setCharacterSize(34);
    txt_niveau.setCharacterSize(34);
    txt_quitter.setCharacterSize(34);
    titr_jeu.setCharacterSize(100);
    chass_ouverte.setCharacterSize(40);

    txt_jouer.setColor(sf::Color::Black);
    txt_aide.setColor(sf::Color::Black);
    txt_niveau.setColor(sf::Color::Black);
    txt_quitter.setColor(sf::Color::Black);
    titr_jeu.setColor(sf::Color(154,102,58));
    chass_ouverte.setColor(sf::Color::Red);

    txt_jouer.setPosition(360,140);
    txt_aide.setPosition(380,200);
    txt_niveau.setPosition(352,260);
    txt_quitter.setPosition(338,322);
    titr_jeu.setPosition(210,4);
    chass_ouverte.setPosition(270,500);
    //Fin du Chargement Text


    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }


        moaka_tire();

        // Gestion du clavier

            //gestion_clavier();

        //Gestion de la Souris

            gestion_souris();

        // Dessin Pour l'affichage.
        window.draw(sprite_backgrnd);
        window.draw(sprite_perso);
        window.draw(sprite_flech);

        window.draw(txt_jouer);
        window.draw(txt_aide);
        window.draw(txt_niveau);
        window.draw(txt_quitter);
        window.draw(titr_jeu);
        window.draw(chass_ouverte);

        window.display();
        window.clear();

    }


}
