void ia_lion(){

        //    FONCTION LION MARCHE

        sprite_lion.move(-0.5,0);
        scene_lion_marche();


        //Le Saut du lion
       /* if(sprite_lion.getPosition().x < sprite_image.getPosition().x + 260 && sprite_lion.getPosition().x >= sprite_image.getPosition().x ) {
                sprite_lion.move(-5,-2.5);
                sprite_lion.setTexture(lion_3);

        }*/

        if(sprite_lion.getPosition().y < sprite_image.getPosition().y) // La mort de MOAKA      // REFLECHIR SUR LA CONDITION DE LA MORT
        {
            //scene_moaka_mort();
            sprite_lion.setPosition(sprite_image.getPosition().x,sprite_image.getPosition().y+130);

        }

    //La fleche touche le LION
        if(sprite_flech_facil.getPosition().x == sprite_lion.getPosition().x && bl_tch_moaka == true ){
            sprite_lion.setPosition(sprite_lion.getPosition().x+15,sprite_lion.getPosition().y);
            sprite_flech.setPosition(-1000,0);
        }

        if(sprite_lion.getPosition().y==sprite_image.getPosition().y +130) //L'attaque du lion Niveau sommet descente
            sprite_image.setTexture(img_3);


}
