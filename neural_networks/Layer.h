#pragma once
#include <iostream>
#include <vector>
#include "Neuron.h"

class Layer
{
	using size_type = std::size_t;

private:
	std::vector<float>	 m_neurons;
	size_type			 m_neuronNumber = 0;

public:
	Layer(size_type neuronNubmer) : m_neuronNumber(neuronNubmer) { m_neurons = std::vector<float>(neuronNubmer); }
	Layer() {}

	void culcValue(const Layer&, std::vector<float>);
	size_type size() const;

	float& operator[] (const size_t& index) { return m_neurons[index]; }
};

