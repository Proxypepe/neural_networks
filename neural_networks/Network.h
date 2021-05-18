#pragma once
#include <vector>
#include "Layer.h"

class Network
{
	using size_type = std::size_t;
	friend Layer;
private:
	std::vector<Layer>	m_layers;
	Layer				m_inputLayer;
	Layer				m_outputLayer;
	size_type			m_layersNumber	     = 0;
	size_type			m_inputNeuronNumber  = 0;
	size_type			m_outputNeuronNumber = 0;
	size_type			m_layerNeuronNumber	 = 0;
public:
	Network(size_type, size_type, size_type, size_type);

	void culc(float, float);

};

