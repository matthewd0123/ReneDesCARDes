// Authors: Matthew D'Alonzo,Grace Milton, and Roann Yanes
// Program: cards.h

class Cards {
	public:
		Cards();
		~Cards();
		void setSuit(char);
		void setKind(char);
		char getSuit();
		char getKind();
		void drawCard();

	private:
		char suit[];
		char kind[];

