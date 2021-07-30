#! /bin/bash

# Para testar, faça export FT_USER='staff'
groups $FT_USER  | tr ' ' ', ' | tr -d "\n"
