// CLICK SUR QUITTER

void btnQuitter(){
     sf::RenderWindow windowExit(sf::VideoMode(400, 300),"Voulez vous vraiment quitter le jeu ?",sf::Style::None);
        sf::Texture backgrnd_exit;
        sf::Sprite exit_sprite;


            if (!backgrnd_exit.loadFromFile("src/fonds/fond_quitter.png"))
        {
            std::cout<< "Erreur chargement image fond_quitter !!"<< std::endl;
        }

        sf::Text titr_quitter_1,titr_quitter_2;
        sf::Text btnOui,btnNon;

        titr_quitter_1.setFont(font3);
        titr_quitter_2.setFont(font3);

        btnOui.setFont(font2);
        btnNon.setFont(font2);

        titr_quitter_1.setString("Voulez vous vraiment ");
        titr_quitter_2.setString("quitter le jeux ?");

        btnOui.setString("Oui");
        btnNon.setString("Non");

        titr_quitter_1.setPosition(40,50);
        titr_quitter_2.setPosition(80,80);

        btnOui.setPosition(57,242);
        btnNon.setPosition(315,243);

        titr_quitter_1.setCharacterSize(30);
        titr_quitter_2.setCharacterSize(30);

        btnOui.setCharacterSize(20);
        btnNon.setCharacterSize(20);

        titr_quitter_1.setColor(sf::Color::White);
        titr_quitter_2.setColor(sf::Color::White);

        btnOui.setColor(sf::Color::White);
        btnOui.setColor(sf::Color::White);

        exit_sprite.setTexture(backgrnd_exit);



        while (windowExit.isOpen())
    {
        sf::Event event;
        while (windowExit.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowExit.close();
        }


        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(windowExit);
            if (positionSouris.x>50 && positionSouris.x<110 && positionSouris.y>240 && positionSouris.y<280){
                windowExit.close();
                window.close();
        }
            if (positionSouris.x>310 && positionSouris.x<380 && positionSouris.y>240 && positionSouris.y<280){
                windowExit.close();
        }

    }


        windowExit.draw(exit_sprite);

        windowExit.draw(titr_quitter_1);
        windowExit.draw(titr_quitter_2);
        windowExit.draw(btnOui);
        windowExit.draw(btnNon);

        windowExit.display();
        window.clear();
    }

}
