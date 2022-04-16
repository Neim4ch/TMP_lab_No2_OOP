#pragma once
#include <iostream>
#include <fstream>
using namespace std;
class film {
public:
	string country;
	// èäåíèòôèêàöèÿ, ïîðîæäåíèå è ââîä ôèãóðû èç ïîòîêà
	static film* In(ifstream& ifst);
	virtual void InData(ifstream& ifst) = 0; // ââîä
	virtual void Out(ofstream& ofst) = 0; // âûâîä
};
class Node {
public:
	film* pic;
	Node* next;
	Node(film* newfigure);
	//~Node() {}
};
// èãðîâîé ôèëüì
class feature : public film {
	string director; // ðåæèñåð

public:
	// ïåðåîïðåäåëÿåì èíòåðôåéñ êëàññà
	void InData(ifstream& ifst); // ââîä
	void Out(ofstream& ofst); // âûâîä
	feature() {} // ñîçäàíèå áåç èíèöèàëèçàöèè.
};
// ìóëüòôèëüì
class animation : public film {
	enum way { DRAWN, DOLL, STOP_MOTION };// ñïîñîá ñîçäàíèÿ
	way woc;//ñïîñîá ñîçäàíèÿ
public:
	// ïåðåîïðåäåëÿåì èíòåðôåéñ êëàññà
	void InData(ifstream& ifst); // ââîä
	void Out(ofstream& ofst); // âûâîä
	animation() {} // ñîçäàíèå áåç èíèöèàëèçàöèè.
};
class container {
public:
	Node* head;
	Node* curr;
	int size;

	void In(ifstream& ifst); // ââîä
	void Out(ofstream& ofst); // âûâîä
	void Clear(); // î÷èñòêà êîíòåéíåðà îò ôèãóð
	container(); // èíèöèàëèçàöèÿ êîíòåéíåðà
	~container() { Clear(); } // óòèëèçàöèÿ êîíòåéíåðà
};