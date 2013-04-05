
// Supports PDF d'Ateliers Arduino par www.mon-club-elec.fr
// http://www.mon-club-elec.fr/pmwiki_mon_club_elec/pmwiki.php?n=MAIN.ATELIERS
// par X. HINAULT - tous droits réservés - 2013 - GPLv3

// code : 22. Exemple I2C : Utiliser un afficheur LCD à communication I2C

//--- inclusion des librairies 
#include "Wire.h" // librairie I2C
#include <Deuligne.h> // librairie afficheur I2C by Snootlab

Deuligne lcd; // déclare objet représentant l'afficheur LCD I2C

void setup() {

  Wire.begin(); // initialisation de la librairie I2C
  lcd.init(); // initialisation de l'afficheur

  lcd.print("hello, world!"); // affiche message 
}

void loop() {

  lcd.setCursor(0, 1); // positionne le curseur en colonne 1, ligne 2

  lcd.print(millis()/1000); // affiche les secondes
}


