void gestion_souris(){
/*
            {
                positionSouris = sf::Mouse::getPosition(window);
                rect.setPosition(positionSouris.x,positionSouris.y);

            }
*/
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(window);
            if (positionSouris.x>320 && positionSouris.x<530 && positionSouris.y>140 && positionSouris.y<183){
            btnLevel();
        }
    }

    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(window);
            if (positionSouris.x>320 && positionSouris.x<530 && positionSouris.y>200 && positionSouris.y<243){

            btnHelp();

        }
    }

    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(window);
            if (positionSouris.x>320 && positionSouris.x<530 && positionSouris.y>260 && positionSouris.y<303){

            btnLevel_txt();

        }
    }

    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)){
        positionSouris = sf::Mouse::getPosition(window);
            if (positionSouris.x>320 && positionSouris.x<530 && positionSouris.y>322 && positionSouris.y<365){
            btnQuitter();
            //window.close();
        }
    }


}


