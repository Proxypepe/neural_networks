#include <iostream>
#include "Network.h"

Network::Network(size_type inputNeuronNumber, size_type outputNeuronNumber, size_type layersNumber, size_type layerNeuronNumber) :
	m_inputNeuronNumber(inputNeuronNumber), m_outputNeuronNumber(outputNeuronNumber), m_layersNumber(layersNumber), m_layerNeuronNumber(layerNeuronNumber)
{
	m_layers = std::vector<Layer>(m_layersNumber);
	m_inputLayer = Layer(m_inputNeuronNumber);
	m_outputLayer = Layer(m_outputNeuronNumber);
	for (size_t i = 0; i < layersNumber; i++)
		m_layers[i] = Layer(layerNeuronNumber);

}

void Network::culc(float first, float second)
{
	m_inputLayer[0] = first;
	m_inputLayer[1] = second;
	std::vector<float> weight = { -0.3, 0.3, -0.3, 0.3 };
	//std::vector<float> weight2 = { 0.3, 0.3 };

	//m_layers[0].culcValue(m_inputLayer, weight);
	//m_outputLayer.culcValue(m_layers[0], weight2);
	m_outputLayer.culcValue(m_inputLayer, weight);

	std::cout << m_outputLayer[0];
}
