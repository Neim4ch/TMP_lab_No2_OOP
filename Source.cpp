+ACM-include +ACI-Source.h+ACI-
using namespace std+ADs-
void feature::InData(ifstream+ACY- ifst) +AHs-
	ifst +AD4APg- director+ADs-
	ifst +AD4APg- country+ADs-
+AH0-
void feature::Out(ofstream+ACY- ofst) +AHs-
	ofst +ADwAPA- +ACI-It is feature film. Director is +ACI- +ADwAPA- director +ADwAPA- endl+ADs-
	ofst +ADwAPA- +ACI-This picture was filmed in +ACI- +ADwAPA- country +ADwAPA- endl+ADs-
+AH0-
void animation::InData(ifstream+ACY- ifst) +AHs-
	int t+ADs-
	ifst +AD4APg- t+ADs-
	switch (t)
	+AHs-
	case 1:
		woc +AD0- DRAWN+ADs-
		break+ADs-
	case 2:
		woc +AD0- DOLL+ADs-
		break+ADs-
	case 3:
		woc +AD0- STOP+AF8-MOTION+ADs-
		break+ADs-
	+AH0-
	ifst +AD4APg- country+ADs-
+AH0-
void animation::Out(ofstream+ACY- ofst) +AHs-
	switch (woc)
	+AHs-
	case 0:
		ofst +ADwAPA- +ACI-It is animation film. It's way of creation is drawing.+ACI- +ADwAPA- endl+ADs-
		break+ADs-
	case 1:
		ofst +ADwAPA- +ACI-It is animation film. It's way of creation is using dolls+ACI- +ADwAPA- endl+ADs-
		break+ADs-
	case 2:
		ofst +ADwAPA- +ACI-It is animation film. It's way of creation is stop motion+ACI- +ADwAPA- endl+ADs-
		break+ADs-
	+AH0-
	ofst +ADwAPA- +ACI-This picture was filmed in +ACI- +ADwAPA- country +ADwAPA- endl+ADs-
+AH0-
film+ACo- film::In(ifstream+ACY- ifst) +AHs-
	film+ACo- fl+ADs-
	int k+ADs-
	ifst +AD4APg- k+ADs-
	switch (k) +AHs-
	case 1:
		fl +AD0- new feature+ADs-
		break+ADs-
	case 2:
		fl +AD0- new animation+ADs-
		break+ADs-
	default:
		return 0+ADs-
	+AH0-
	fl-+AD4-InData(ifst)+ADs-
	return fl+ADs-
+AH0-
Node::Node(film+ACo- newpic)
+AHs-
	pic +AD0- newpic+ADs-
	next +AD0- NULL+ADs-
+AH0-
container::container()
+AHs-
	head +AD0- NULL+ADs-
	head +AD0- NULL+ADs-
	size +AD0- 0+ADs-
+AH0-
// +AM4A9wDoAPEA8gDqAOA- +AOoA7gDtAPIA5QDpAO0A5QDwAOA- +AO4A8g- +AP0A6wDlAOwA5QDtAPIA7gDi-
void container::Clear() +AHs-
	head +AD0- NULL+ADs-
	curr +AD0- NULL+ADs-
	size +AD0- 0+ADs-
+AH0-

void container::In(ifstream+ACY- ifst) +AHs-
	while (+ACE-ifst.eof()) +AHs-
		Node+ACo- newNode+ADs-
		newNode +AD0- new Node((film::In(ifst)))+ADs-
		if (head +AD0APQ- NULL)
		+AHs-
			head +AD0- newNode+ADs-
			size +AD0- 1+ADs-
		+AH0-
		else
		+AHs-
			curr +AD0- head+ADs-
			while (curr-+AD4-next +ACEAPQ- NULL)
			+AHs-
				curr +AD0- curr-+AD4-next+ADs-
			+AH0-
			curr-+AD4-next +AD0- newNode+ADs-
			size+-+-+ADs-
		+AH0-
	+AH0-
+AH0-
void container::Out(ofstream+ACY- ofst) +AHs-
	ofst +ADwAPA- +ACI-Container contents +ACI- +ADwAPA- size
		+ADwAPA- +ACI- elements.+ACI- +ADwAPA- endl+ADs-
	int i +AD0- 0+ADs-
	curr +AD0- head+ADs-
	while (curr +ACEAPQ- NULL)
	+AHs-
		ofst +ADwAPA- i +ADwAPA- +ACI-: +ACIAOw-
		curr-+AD4-pic-+AD4-Out(ofst)+ADs-
		curr +AD0- curr-+AD4-next+ADs-
		i+-+-+ADs-
	+AH0-
+AH0-