
// CLICK SUR MOYEN

void btnMoyen(){
    sf::RenderWindow windowMoyen(sf::VideoMode(1350, 700),"MOAKA : la chasse est Ouverte",sf::Style::None);

        sf::Texture background_play;
        sf::Sprite play_sprite;

    if (!background_play.loadFromFile("src/fonds/fond_ade.png"))
        {
            std::cout<< "Erreur chargement image fond_niveau.png !!"<< std::endl;
        }

        play_sprite.setTexture(background_play);

        while (windowMoyen.isOpen())
    {
        sf::Event event;
        while (windowMoyen.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowMoyen.close();
        }




        windowMoyen.draw(play_sprite);

        windowMoyen.display();
    }
}
