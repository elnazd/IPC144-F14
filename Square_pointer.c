/*Write the following functions:
void area(struct Square mySquare);
This function is passed the address of a Square struct. It will calculate the area of the square.*/

struct Square{
	int side;
	int area; // The area of a square is calculated by area = side * side.
	int perimeter; // The perimeter calculated by perimeter = 4 * side.
};

void area(struct Square *mySquare);
void perimeter(struct Square *mySquare);

int main()
{
	struct Square mainSquare = {4,0,0};
	area(&mainSquare);
	perimeter(&mainSquare);
}
void area(struct Square *mySquare)
{
	mySquare->area = mySquare->side * mySquare->side;
	printf("Area:%d\n",mySquare->area);
}
void perimeter(struct Square *mySquare)
{
	mySquare->perimeter= mySquare->side * 4;
	printf("Perimeter:%d\n",mySquare->perimeter);
}
