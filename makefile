CMP = g++ -std=c++11
CLASS = cards
MAIN = main
EXEC = carder

$(EXEC): $(CLASS).o $(MAIN).o
	$(CMP) $(CLASS).o $(MAIN).o -o $(EXEC)

$(CLASS).o: $(CLASS).cpp $(CLASS).h
	$(CMP) -c $(CLASS).cpp -o $(CLASS).o

$(MAIN).o: $(MAIN).cpp $(CLASS).h
	$(CMP) -c $(MAIN).cpp -o $(MAIN).o

clean:
	rm $(CLASS).o $(MAIN).o
rm $(EXEC)cards: main.cpp cards.h
	g++ main.cpp -o cards
