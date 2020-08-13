#ifndef RANDOM_HPP
#define RANDOM_HPP
#pragma once
#include <random>
#pragma once
#include <vector>
namespace Rand {
	class Random {
	private:
		std::random_device rand;
		std::mt19937 mt;
	public:
		Random();
		int RandInt(int min, int max);
		int RandInt(int max);
		double RandDouble(double min, double max);
		double RandDouble(double max);
		bool RandBool(double rate);
		bool RandBool();
		int RandDiscrete(std::vector<double> rateSequence);
	};
}

inline Rand::Random::Random() {
	mt.seed(rand());
}

inline int Rand::Random::RandInt(int min, int max) {
	std::uniform_int_distribution<int> dist(min, max);
	return dist(mt);
}

inline int Rand::Random::RandInt(int max) {
	std::uniform_int_distribution<int> dist(0, max);
	return dist(mt);
}

inline double Rand::Random::RandDouble(double min, double max){
	std::uniform_real_distribution<double> dist(min,max);
}

inline double Rand::Random::RandDouble(double max){
	std::uniform_real_distribution<double> dist(0, max);
}

inline bool Rand::Random::RandBool(double rate){
	std::bernoulli_distribution dist(rate);
	return dist(mt);
}

inline bool Rand::Random::RandBool(){
	std::bernoulli_distribution dist(0.5);
	return dist(mt);
}

inline int Rand::Random::RandDiscrete(std::vector<double> rateSequence) {
	std::discrete_distribution<std::size_t> dist(rateSequence.begin(), rateSequence.end());
	return dist(mt);
}

#endif