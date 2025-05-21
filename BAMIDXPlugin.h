#ifndef BAMIDXLUGIN_H
#define BAMIDXPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include <string>
#include <vector>

class BAMIDXPlugin : public Plugin
{
public: 
 std::string toString() {return "BAMIDX";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
