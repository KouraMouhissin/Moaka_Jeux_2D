// LORSQU ON CLICK SUR ESPACE C EST LA PAUSE
void pause_game(){
     sf::RenderWindow windowPause(sf::VideoMode(312, 380),"Pause MOAKA",sf::Style::None);
        sf::Texture backgrnd_pause;
        sf::Sprite pause_sprite;


            if (!backgrnd_pause.loadFromFile("src/fonds/fond_pause.png"))
        {
            std::cout<< "Erreur chargement image fond_quitter !!"<< std::endl;
        }

        sf::Text reprendr_txt, aide_txt, retour_menu, qiutter_le_jeux;

        reprendr_txt.setFont(font2);
        reprendr_txt.setCharacterSize(25);
        reprendr_txt.setPosition(56,50);
        reprendr_txt.setString("Reprendre");
        reprendr_txt.setColor(sf::Color::White);

        aide_txt.setFont(font2);
        aide_txt.setCharacterSize(30);
        aide_txt.setPosition(100,112);
        aide_txt.setString("Aide");
        aide_txt.setColor(sf::Color::White);

        retour_menu.setFont(font2);
        retour_menu.setCharacterSize(25);
        retour_menu.setPosition(108,190);
        retour_menu.setString("Menu");
        retour_menu.setColor(sf::Color::White);

        qiutter_le_jeux.setFont(font2);
        qiutter_le_jeux.setCharacterSize(25);
        qiutter_le_jeux.setPosition(85,337);
        qiutter_le_jeux.setString("Quitter");
        qiutter_le_jeux.setColor(sf::Color::White);

        while (windowPause.isOpen())
    {
        sf::Event event;
        while (windowPause.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowPause.close();
        }

        pause_sprite.setTexture(backgrnd_pause);




        windowPause.draw(pause_sprite);
        windowPause.draw(reprendr_txt);
        windowPause.draw(aide_txt);
        windowPause.draw(retour_menu);
        windowPause.draw(qiutter_le_jeux);

        windowPause.display();

    }


}
