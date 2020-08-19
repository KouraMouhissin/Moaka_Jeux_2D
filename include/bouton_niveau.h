// CLICK SUR NIVEAU

void btnLevel(){
     sf::RenderWindow windowLevel(sf::VideoMode(400, 300),"Choisissez un niveau SVP !",sf::Style::None);

        sf::Texture background_level;
        sf::Sprite level_sprite;

        if (!background_level.loadFromFile("src/fonds/fond_niveau_1.png"))
        {
            std::cout<< "Erreur chargement image fond_niveau.png !!"<< std::endl;
        }
        sf::Text titr_level,btnOk;
        sf::Text btnNiveau_1,btnNiveau_2,btnNiveau_3;

        level_sprite.setTexture(background_level);

        titr_level.setFont(font3);
        titr_level.setString("Veuillez choisir le niveau SVP !");
        titr_level.setCharacterSize(25);
        titr_level.setPosition(30,20);
        titr_level.setColor(sf::Color::White);

        btnOk.setFont(font2);
        btnOk.setString("OK");
        btnOk.setCharacterSize(25);
        btnOk.setPosition(184,245);
        btnOk.setColor(sf::Color::White);

        btnNiveau_1.setFont(font2);
        btnNiveau_1.setString("Facile");
        btnNiveau_1.setCharacterSize(25);
        btnNiveau_1.setPosition(135,67);
        btnNiveau_1.setColor(sf::Color::White);

        btnNiveau_2.setFont(font2);
        btnNiveau_2.setString("Moyen");
        btnNiveau_2.setCharacterSize(25);
        btnNiveau_2.setPosition(140,124);
        btnNiveau_2.setColor(sf::Color::White);

        btnNiveau_3.setFont(font2);
        btnNiveau_3.setString("Difficile");
        btnNiveau_3.setCharacterSize(25);
        btnNiveau_3.setPosition(120,174);
        btnNiveau_3.setColor(sf::Color::White);



        while (windowLevel.isOpen())
    {
        sf::Event event;
        while (windowLevel.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowLevel.close();
        }
                                    //////////BOUTON OK//////////
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(windowLevel);
            if (positionSouris.x>175 && positionSouris.x<240 && positionSouris.y>240 && positionSouris.y<280){
                windowLevel.close();
        }
                                    //////////BOUTON FACILE//////////
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(windowLevel);
            if (positionSouris.x>100 && positionSouris.x<310 && positionSouris.y>65 && positionSouris.y<94){
                    windowLevel.close();
                    btnFacile();
        }
        }

                                    //////////BOUTON MOYEN//////////
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(windowLevel);
            if (positionSouris.x>100 && positionSouris.x<310 && positionSouris.y>123 && positionSouris.y<150){
                    sf::Window::setMouseCursorVisible;
                    windowLevel.close();
                    btnMoyen();
        }
        }
                                    //////////BOUTON DIFFICILE//////////
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(windowLevel);
            if (positionSouris.x>100 && positionSouris.x<310 && positionSouris.y>174 && positionSouris.y<213){
                    windowLevel.close();
                    btnDifficile();
        }
        }



    }



        windowLevel.draw(level_sprite);
        windowLevel.draw(titr_level);
        windowLevel.draw(btnOk);
        windowLevel.draw(btnNiveau_1);
        windowLevel.draw(btnNiveau_2);
        windowLevel.draw(btnNiveau_3);

        windowLevel.display();
    }

}

