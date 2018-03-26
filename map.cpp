#include "map.hpp"

double noise(int x, int y) {
  static double prevHeight = 0;
  std::mt19937 gen(x);
  std::uniform_int_distribution<int> dis(-9, 9);
  int a = dis(gen);
  std::mt19937 gen2(y);
  std::uniform_int_distribution<int> dis2(-9, 9);
  int b = dis2(gen2);
  int height = prevHeight + a + b;
  prevHeight = height;
  return height;
}

void generateMap(int longSize, int latSize) {
  for (int j = 0; j < 2*longSize; j++) {
    vector<double> toAppend;
    for (int k = 0; k < 2*latSize; j++) {
      toAppend.push_back(noise(j, k));
    }
    heights.push_back(toAppend);
  }
}

bool isTouching(int height, int long, int lat) {
  if (heights[long][lat] >= height) {
    return true;
  }
  return false;
}
