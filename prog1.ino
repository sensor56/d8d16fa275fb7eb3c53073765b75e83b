// Supports PDF d'Ateliers Arduino par www.mon-club-elec.fr
// http://www.mon-club-elec.fr/pmwiki_mon_club_elec/pmwiki.php?n=MAIN.ATELIERS
// par X. HINAULT - tous droits réservés - 2013 - GPLv3

// code : 19. Exemple I2C : Temps-réel avec un DS1307 

#include <Wire.h>
#include "RTClib.h"

RTC_DS1307 RTC; // déclare objet représentant le DS1307

void setup () {
    Serial.begin(115200); // initialise la communicatin série
    Wire.begin(); // initialise I2C
    RTC.begin(); // initialise le DS1307
}

void loop () {
    DateTime now = RTC.now(); // récupère l'heure courante
    
    Serial.print(now.year(), DEC); // affiche année
    Serial.print('/');
    Serial.print(now.month(), DEC); // affiche mois
    Serial.print('/');
    Serial.print(now.day(), DEC); // affiche jour
    Serial.print(' ');
   Serial.print(now.hour(), DEC); // affiche heure
    Serial.print(':');
    Serial.print(now.minute(), DEC); // affiche minutes
    Serial.print(':');
    Serial.print(now.second(), DEC); // affiche secondes 
    
    Serial.println();   
    delay(1000); // pause 
}
