
void btnLevel_txt(){
     sf::RenderWindow windowLevel(sf::VideoMode(400, 300),"Choisissez un niveau SVP !",sf::Style::None);

        sf::Texture background_level;
        sf::Sprite level_sprite;

        if (!background_level.loadFromFile("src/fonds/fond_niveau.png"))
        {
            std::cout<< "Erreur chargement image fond_niveau.png !!"<< std::endl;
        }
        sf::Text titr_level,btnOk;

        level_sprite.setTexture(background_level);

        titr_level.setFont(font3);
        titr_level.setString("A propos");
        titr_level.setCharacterSize(25);
        titr_level.setPosition(30,20);
        titr_level.setColor(sf::Color::White);

        txt_level.setFont(font3);
        txt_level.setString("Ce jeu a été conçu \n dans le cadre d'un projet scolaire.");
        txt_level.setCharacterSize(20);
        txt_level.setPosition(30,60);
        txt_level.setColor(sf::Color::White);


        btnOk.setFont(font2);
        btnOk.setString("OK");
        btnOk.setCharacterSize(25);
        btnOk.setPosition(184,245);
        btnOk.setColor(sf::Color::White);



        while (windowLevel.isOpen())
    {
        sf::Event event;
        while (windowLevel.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowLevel.close();
        }



        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(windowLevel);
            if (positionSouris.x>175 && positionSouris.x<240 && positionSouris.y>240 && positionSouris.y<280){
                windowLevel.close();
        }

    }



        windowLevel.draw(level_sprite);
        windowLevel.draw(titr_level);
        windowLevel.draw(txt_level);
        windowLevel.draw(btnOk);

        windowLevel.display();
    }

}
