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

int Residence::get_min_bed_label()
{
	return this->min_bed_label;
}

int Residence::get_max_bed_label()
{
	return this->max_bed_label;
}

int Residence::label_to_index(int label)
{
	return label - this->get_min_bed_label();
}

int Residence::index_to_label(int index)
{
	return index + this->get_min_bed_label();
}

bool Residence::is_occupied(int bed_label)
{
	int index = this->label_to_index(bed_label);
	// return residence_beds[index] == 0 || residence_beds[index] == NULL;
	return (index == 0 || index == NULL);
}

std::vector<int> Residence::available_beds()
{
	std::vector<int> free_beds;
	return free_beds;
}