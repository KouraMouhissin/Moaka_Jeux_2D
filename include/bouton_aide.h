// CLICK SUR AIDE
void btnHelp(){
     sf::RenderWindow windowHelp(sf::VideoMode(400, 500),"Besoin d'Aide !",sf::Style::None);

        sf::Texture background_help;
        sf::Sprite help_sprite;

        if (!background_help.loadFromFile("src/fonds/fond_aide.png"))
        {
            std::cout<< "Erreur chargement image fond_niveau.png !!"<< std::endl;
        }

        while (windowHelp.isOpen())
    {
        sf::Event event;
        while (windowHelp.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowHelp.close();
        }



        help_sprite.setTexture(background_help);

        sf::Text titr_aide, btn_merci;

        titr_aide.setFont(font3);
        titr_aide.setCharacterSize(25);
        titr_aide.setPosition(110,20);
        titr_aide.setString("Besoin d'aide ?");
        titr_aide.setColor(sf::Color::White);

        btn_merci.setFont(font2);
        btn_merci.setCharacterSize(25);
        btn_merci.setPosition(163,447);
        btn_merci.setString("Merci");
        btn_merci.setColor(sf::Color::White);

        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(windowHelp);
            if (positionSouris.x>143 && positionSouris.x<280 && positionSouris.y>442 && positionSouris.y<482){
                windowHelp.close();
        }

    }

        windowHelp.draw(help_sprite);
        windowHelp.draw(titr_aide);
        windowHelp.draw(btn_merci);

        windowHelp.display();
    }

}

