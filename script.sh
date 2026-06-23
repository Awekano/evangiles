#!/bin/bash

echo "Installation de la commande et de l'éxecutable"
chmod +x evangiles
chmod +x lire_evangile

echo "Déplacement des scripts et fichiers"

sudo mv evangiles /usr/local/bin/evangiles
sudo mv lire_evangile /usr/local/bin/lire_evangile
sudo mv evangiles.txt /usr/local/bin/evangiles.txt

echo "Installation terminée"

