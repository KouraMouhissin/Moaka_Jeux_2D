#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <cstdio>

using namespace std;

#pragma region variables
sf::RenderWindow window;
//Texture
sf::Texture perso_menu_1;
sf::Texture perso_menu_2;
sf::Texture perso_menu_3;
sf::Texture perso_menu_4;
sf::Texture flech_menu_1;
sf::Texture click;
sf::Texture backgrnd;
//Fin Texture
//Sprite
sf::Sprite sprite_perso;
sf::Sprite sprite_flech;
sf::Sprite sprite_backgrnd;
//Fin Sprite
//Fond
sf::Font font1;
sf::Font font2;
sf::Font font3;
//Fin Font
//Text
sf::Text txt_level;
sf::Text txt_jouer;
sf::Text txt_aide;
sf::Text txt_niveau;
sf::Text txt_quitter;
sf::Text titr_jeu;
sf::Text chass_ouverte;
sf::Clock temp,temp_2;
sf::Clock horloge_1;

//Fin Text

sf::Texture background_play_1,background_play_2,image_1_d,img_2, img_5,img_3,img_4,lion_1,tire1,tire2,zombie_1,zombie_2,boul;
sf::Sprite play_sprite_1,play_sprite_2,sprite_image,sprite_lion,sprite_flech_facil,sprite_click,sprite_boul,sprite_zombie,sprite_zombie_1;

//Les Zombie dans le prêmier niveau

sf::Sprite spr_zomb_a, spr_zomb_b, spr_zomb_c, spr_zomb_d, spr_zomb_e, spr_zomb_f, spr_zomb_g, spr_zomb_h;


sf::Vector2i positionSouris;

sf::View view;

#pragma endregion variables
int speed = 2;
int sprite_persox = 0 , sprite_persoy = 189;
int sprite_flechx = 68 , sprite_flechy = 246;
int screenH = 1000, screenM = 700;
int temp_tir;
bool bl_tch_moaka = false;

void menu_principal();
void gestion_clavier();
void gestion_souris();
void moaka_tire();
void btnQuitter();
void btnLevel();
void btnLevel_txt();
void btnHelp();
void btnJouer();

void pause_game();
void btnFacile();
void btnMoyen();
void btnDifficile();

void scene_moaka_marche();
void scene_lion_marche();
void scene_lion_attaque();
void scene_moaka_mort();

void colision();

void ia_lion();


#include "include/gestion_du_souris.h"
#include "include/pause_game.h"
#include "include/bouton_facile.h"
#include "include/menu_principal.h"
#include "include/moaka_tir.h"
#include "include/bouton_quitter.h"
#include "include/bouton_niveau.h"
#include "include/bouton_apropos.h"
#include "include/bouton_aide.h"
#include "include/bouton_difficile.h"
#include "include/bouton_moyen.h"
#include "include/gestion_de_colision.h"
#include "include/moteur_de_jeu.h"
#include "include/intelligence_artificiel_lion.h"



int main()
{
    menu_principal();

    return 0;
}
void scene_moaka_marche(){
    // SCENE MARCHE MOAKA
            int tempActu = horloge_1.getElapsedTime().asSeconds()+1;
            if(tempActu&1)
                sprite_image.setTexture(image_1_d);
            else
                sprite_image.setTexture(img_2);
            cout<<"Le temps est : "<<tempActu<<endl;
}
void scene_lion_marche(){
                            //  SCENE LION MARCHE
            int tempActu_1 = horloge_1.getElapsedTime().asSeconds()+1;
            if(tempActu_1&1)
                sprite_lion.setTexture(lion_1);

            cout<<"Le temps est : "<<tempActu_1<<endl;
}
void scene_moaka_mort(){
                            //  SCENE MOAKA MORT
            int tempActu_3 = horloge_1.getElapsedTime().asSeconds()+1;
            if(tempActu_3&1)
                sprite_image.setTexture(img_3);
            else
                sprite_image.setTexture(img_4);
            cout<<"Le temps est : "<<tempActu_3<<endl;
}
void scene_lion_attaque(){
                         //   SCENE LION ATTAQUE
            int tempActu_2 = horloge_1.getElapsedTime().asSeconds()+1;
            if(tempActu_2&1)
            cout<<"Le temps est : "<<tempActu_2<<endl;
}












