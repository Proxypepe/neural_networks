#pragma once

class Neuron
{
private:

	float m_value;

public:

	void setVelue(float value) { m_value = value; }
	float getValue() const { return m_value; }

public:
	Neuron(float value) : m_value(value) {}
};

