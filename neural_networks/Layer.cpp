#include "Layer.h"

void Layer::culcValue(const Layer& layer, std::vector<float> wieghts)
{
	size_type offset = 0;
	size_type size = layer.size();
	for (size_type i = 0; i < m_neuronNumber; i++)
	{
		for (size_t j = 0; j < size; j++)
		{
			m_neurons[i] = m_neurons[i] + layer.m_neurons[j] * wieghts[j + offset];
			std::cout << m_neurons[i] << std::endl;
		}
		offset += layer.size();
	}
}

size_t Layer::size() const
{
	return m_neuronNumber;
}
