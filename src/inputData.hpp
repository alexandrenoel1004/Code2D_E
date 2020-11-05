/* 
/Fichier inputData.hpp
/Date: 04 novembre 2020 - 21h34
/Projet: Projet Intégrateur 4
*/

#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <memory>

#include "./tools/stringTools.hpp"

using namespace std;

class InputData : public StringTools
{
private:
    string _pathInputFile;
    FILE *_inputFile;

    string _title;
    string _meshPath;

    double _Mach;
    double _AOA;

    double _density;
    double _pressure;
    double _ratioCpCv;
    double _soundSpeed;

    double _CFL;

    int _iterationMax;

    bool isFileValid();
    bool setIndice(string ligne, int &indice);
    void setParametres(string ligne, int indice);

public:
    InputData(string &path);
    ~InputData();

    void readFile();

    // Getters
    string getTitle() const;
    string getMeshPath() const;

    double getMachNumber() const;
    double getAOA() const;

    double getsoundSpeed() const;
    double getCFL() const;
};