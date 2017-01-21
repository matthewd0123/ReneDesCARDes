// Authors: Matthew D'Alonzo,Grace Milton, and Roann Yanes
// Program: cards.h
// #DEFINE SIZE1 =

class Cards {
	public:
		Cards();
		~Cards();
		void setSuit();
		void setKind();
		char getSuit();
		char getKind();
		void drawCard();

	private:
		char suit[];
		char kind[];

