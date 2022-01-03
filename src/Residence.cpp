#include <iostream>
#include <vector>
#include "./../include/Residence.h"

Residence::Residence()
{
	this->name = "";
	this->min_bed_label = 0;
	this->max_bed_label = 1;
}

Residence::Residence(std::string name, int min_bed_label, int max_bed_label)
{
	this->name = name;
	this->min_bed_label = min_bed_label;
	this->max_bed_label = max_bed_label;
}

std::string Residence::get_name()
{
	return this->name;
}