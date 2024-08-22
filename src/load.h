#ifndef _loads_
#define _loads_
#include <stdio.h>
#include <stdlib.h>
#include "C:\raylib\raylib\src\raylib.h"
#include "combate.h"
#include "defines.h"
#include "explorando.h"
#include "personagens.h"
#include "salas.h"


void loadPrincipal( Capivara *capivara, Boss (*boss)[4], Animal (*animal)[4], 
                    Sala (*sala)[6], Arena *arena, 
                    float screenWidth, float screenHeight){
    
    loadCapivaraExplorando(capivara, screenWidth, screenHeight);

    loadBoss1((boss[0])); boss[0]->textura.width *= 9.0f; boss[0]->textura.height *= 9.0f;
    loadBoss2((boss[1])); boss[1]->textura.width *= 9.0f; boss[1]->textura.height *= 9.0f;
    loadBoss3((boss[2])); boss[2]->textura.width *= 9.0f; boss[2]->textura.height *= 9.0f;
    loadBoss4((boss[3])); boss[3]->textura.width *= 9.0f; boss[3]->textura.height *= 9.0f;

    loadAnimal1((animal[0])); animal[0]->textura.width *= 3.0f; animal[0]->textura.height *= 3.0f;
    loadAnimal2((animal[1])); animal[1]->textura.width *= 3.0f; animal[1]->textura.height *= 3.0f;
    loadAnimal3((animal[2])); animal[2]->textura.width *= 3.0f; animal[2]->textura.height *= 3.0f;
    loadAnimal4((animal[3])); animal[3]->textura.width *= 3.0f; animal[3]->textura.height *= 3.0f;

    for (int i = 0; i < 6; i++){ loadSalas((sala[i]), screenWidth, screenHeight); }
    
    loadSala1((sala[salaJardim]));
    if (sala[salaJardim]->objeto == NULL){
        for (int i = 0; i < 1; i++){ unloadSalas((sala[i])); printf("Erro de alocacao\n"); exit(1); }
    }
    loadSala2((sala[salaHub]));
    if (sala[salaHub]->objeto == NULL){
        for (int i = 0; i < 2; i++){ unloadSalas((sala[i])); printf("Erro de alocacao\n"); exit(1); }
    }
    loadSala3((sala[salaCagado]));
    if (sala[salaCagado]->objeto == NULL){
        for (int i = 0; i < 3; i++){ unloadSalas((sala[i])); printf("Erro de alocacao\n"); exit(1); }
    }
    loadSala4((sala[salaAranhas]));
    if (sala[salaAranhas]->objeto == NULL){
        for (int i = 0; i < 4; i++){ unloadSalas((sala[i])); printf("Erro de alocacao\n"); exit(1); }
    }
    loadSala5((sala[salaGalinha]));
    if (sala[salaGalinha]->objeto == NULL){
        for (int i = 0; i < 5; i++){ unloadSalas((sala[i])); printf("Erro de alocacao\n"); exit(1); }
    }
    loadSala6((sala[salaPeixe]));
    if (sala[salaPeixe]->objeto == NULL){
        for (int i = 0; i < 6; i++){ unloadSalas((sala[i])); printf("Erro de alocacao\n"); exit(1); }
    }
    
    loadArena(arena, screenWidth, screenHeight);
    loadCapivaraCombate(capivara, arena);
}

#endif