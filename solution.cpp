#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector <int> vector1 {};
	vector <int> vector2 {};

	// Add 10 and 20 to vector1
	cout << "Add 10 and 20 to vector1" << endl;
	vector1.push_back(10);
	vector1.push_back(20);

	// Display vector1 elements
	cout << "Display vector1 elements and size" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;
	cout << size(vector1) << endl;

	// Add 100 and 200 to vector2
	cout << "Add 100 and 200 to vector2" << endl;
	vector2.push_back(100);
	vector2.push_back(200);

	// Display vector2 elements
	cout << "Display vector2 elements and size" << endl;
	cout << vector2.at(0) << endl;
	cout << vector2.at(1) << endl;
	cout << size(vector2) << endl;

	// Create 2D vector
	cout << "Create 2D vector" << endl;
	vector <vector<int>> vector_2d {};

	// Add vector1 and vector2 to vector_2d
	cout << "Add vector1 and vector2 to vector_2d" << endl;
	vector_2d.push_back(vector1);
	vector_2d.push_back(vector2);

	// Display vector_2d elements
	cout << "Display vector_2d elements" << endl;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;

	// Change vector1.at(0) to 1000
	cout << "Change vector1.at(0) to 1000" << endl;
	vector1.at(0) = 1000;

	// Display vector_2d elements
	cout << "Display vector_2d elements" << endl;
	cout << vector_2d.at(0).at(0) << endl;
	cout << vector_2d.at(0).at(1) << endl;
	cout << vector_2d.at(1).at(0) << endl;
	cout << vector_2d.at(1).at(1) << endl;

	// Display the elements in vector1
	cout << "Display the elements in vector1" << endl;
	cout << vector1.at(0) << endl;
	cout << vector1.at(1) << endl;

}
