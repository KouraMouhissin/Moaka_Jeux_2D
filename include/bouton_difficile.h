// CLICK SUR DIFFICILE

void btnDifficile(){
    sf::RenderWindow windowDifficile(sf::VideoMode(1350, 700),"MOAKA : la chasse est Ouverte",sf::Style::None);

        sf::Texture background_play;
        sf::Sprite play_sprite;

    if (!background_play.loadFromFile("src/fonds/fond_ade.png"))
        {
            std::cout<< "Erreur chargement image fond_niveau.png !!"<< std::endl;
        }

        play_sprite.setTexture(background_play);

        while (windowDifficile.isOpen())
    {
        sf::Event event;
        while (windowDifficile.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                windowDifficile.close();
        }




        windowDifficile.draw(play_sprite);

        windowDifficile.display();
    }
}


/*
void gestion_clavier()
{

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
        {
            sprite_perso.move(0,-speed);

        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
        {
            sprite_perso.move(0,speed);
        }
        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            sprite_perso.move(-speed,0);

            std::cout<< "Touche Gauche !" << std::endl;

        else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            sprite_image.move(speed,0);
        }
}
}*/


