#ifndef XMLOBJECT_H
#define XMLOBJECT_H

#include "gl_settings.h"

class XMLObject
{
public:
    XMLObject();
    ~XMLObject();

    void LoadFromFile(const char *);
    void AnalyzeMap();

    friend std::ostream& operator<< (std::ostream &, const XMLObject &);
    void DumpToFile();
private:
    Map *map;
    Algorithm *algorithm;
    Options *options;
    std::string fPath;
    MapAnalyzer *analyser;
};

#endif // XMLOBJECT_H