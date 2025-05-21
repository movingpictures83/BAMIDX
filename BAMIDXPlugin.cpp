#include "PluginManager.h"
#include <stdio.h>
#include <stdlib.h>
#include "BAMIDXPlugin.h"

void BAMIDXPlugin::input(std::string file) {
 inputfile = file;
}

void BAMIDXPlugin::run() {
   
}

void BAMIDXPlugin::output(std::string file) {
 // alpha_diversity.py -i filtered_otu_table.biom -m observed_species,chao1,shannon,PD_whole_tree -t rep_set.tre -o alpha.txt
   std::string command = "samtools index " + inputfile;
 std::cout << command << std::endl;

 system(command.c_str());
}

PluginProxy<BAMIDXPlugin> BAMIDXPluginProxy = PluginProxy<BAMIDXPlugin>("BAMIDX", PluginManager::getInstance());
