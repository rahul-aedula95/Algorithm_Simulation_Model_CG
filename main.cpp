#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<GL/glut.h>
#define MAX 10

int k=0;
static int ele1;
int ele2;
 int ele3;
 int ele4;
 int ele5;
 int ele6;
 int ele7;
 int ele8;
 int ele9;          //{10,4,8,6,3,7,9,1,5,2}
int ele10;
int term1 = 10 ;// (int *)malloc(sizeof(int));

int term2 = 4;
int term3 = 8;
int term4 = 6;
int term5 = 3;
int term6 = 7;
int term7 = 9;
int term8 = 1;
int term9 = 5;
int term10 = 2;
static int mainmenu;
static int val=0;
void menu(int value);
void createmenu(void);
void createmenu(void)

{
    ele1=glutCreateMenu(menu);

    glutAddMenuEntry("1",1);
    glutAddMenuEntry("2",2);
    glutAddMenuEntry("3",3);
    glutAddMenuEntry("4",4);
    glutAddMenuEntry("5",5);
    glutAddMenuEntry("6",6);
    glutAddMenuEntry("7",7);
    glutAddMenuEntry("8",8);
    glutAddMenuEntry("9",9);
    glutAddMenuEntry("10",10);

    ele2=glutCreateMenu(menu);

    glutAddMenuEntry("1",11);
    glutAddMenuEntry("2",12);
    glutAddMenuEntry("3",13);
    glutAddMenuEntry("4",14);
    glutAddMenuEntry("5",15);
    glutAddMenuEntry("6",16);
    glutAddMenuEntry("7",17);
    glutAddMenuEntry("8",18);
    glutAddMenuEntry("9",19);
    glutAddMenuEntry("10",20);

    ele3=glutCreateMenu(menu);

    glutAddMenuEntry("1",21);
    glutAddMenuEntry("2",22);
    glutAddMenuEntry("3",23);
    glutAddMenuEntry("4",24);
    glutAddMenuEntry("5",25);
    glutAddMenuEntry("6",6);
    glutAddMenuEntry("7",27);
    glutAddMenuEntry("8",28);
    glutAddMenuEntry("9",29);
    glutAddMenuEntry("10",30);

    ele4=glutCreateMenu(menu);

    glutAddMenuEntry("1",31);
    glutAddMenuEntry("2",32);
    glutAddMenuEntry("3",33);
    glutAddMenuEntry("4",34);
    glutAddMenuEntry("5",35);
    glutAddMenuEntry("6",36);
    glutAddMenuEntry("7",37);
    glutAddMenuEntry("8",38);
    glutAddMenuEntry("9",39);
    glutAddMenuEntry("10",40);

    ele5=glutCreateMenu(menu);

    glutAddMenuEntry("1",41);
    glutAddMenuEntry("2",42);
    glutAddMenuEntry("3",43);
    glutAddMenuEntry("4",44);
    glutAddMenuEntry("5",45);
    glutAddMenuEntry("6",46);
    glutAddMenuEntry("7",47);
    glutAddMenuEntry("8",48);
    glutAddMenuEntry("9",49);
    glutAddMenuEntry("10",50);

    ele6=glutCreateMenu(menu);

    glutAddMenuEntry("1",51);
    glutAddMenuEntry("2",52);
    glutAddMenuEntry("3",53);
    glutAddMenuEntry("4",54);
    glutAddMenuEntry("5",55);
    glutAddMenuEntry("6",56);
    glutAddMenuEntry("7",57);
    glutAddMenuEntry("8",58);
    glutAddMenuEntry("9",59);
    glutAddMenuEntry("10",60);

    ele7=glutCreateMenu(menu);

    glutAddMenuEntry("1",61);
    glutAddMenuEntry("2",62);
    glutAddMenuEntry("3",63);
    glutAddMenuEntry("4",64);
    glutAddMenuEntry("5",65);
    glutAddMenuEntry("6",66);
    glutAddMenuEntry("7",67);
    glutAddMenuEntry("8",68);
    glutAddMenuEntry("9",69);
    glutAddMenuEntry("10",70);

    ele8=glutCreateMenu(menu);

    glutAddMenuEntry("1",71);
    glutAddMenuEntry("2",72);
    glutAddMenuEntry("3",73);
    glutAddMenuEntry("4",74);
    glutAddMenuEntry("5",75);
    glutAddMenuEntry("6",76);
    glutAddMenuEntry("7",77);
    glutAddMenuEntry("8",78);
    glutAddMenuEntry("9",79);
    glutAddMenuEntry("10",80);

    ele9=glutCreateMenu(menu);

    glutAddMenuEntry("1",81);
    glutAddMenuEntry("2",82);
    glutAddMenuEntry("3",83);
    glutAddMenuEntry("4",84);
    glutAddMenuEntry("5",85);
    glutAddMenuEntry("6",86);
    glutAddMenuEntry("7",87);
    glutAddMenuEntry("8",88);
    glutAddMenuEntry("9",89);
    glutAddMenuEntry("10",90);

    ele10=glutCreateMenu(menu);

    glutAddMenuEntry("1",91);
    glutAddMenuEntry("2",92);
    glutAddMenuEntry("3",93);
    glutAddMenuEntry("4",94);
    glutAddMenuEntry("5",95);
    glutAddMenuEntry("6",96);
    glutAddMenuEntry("7",97);
    glutAddMenuEntry("8",98);
    glutAddMenuEntry("9",99);
    glutAddMenuEntry("10",100);

   // lang=glutCreateMenu(menu);
   // glutAddMenuEntry("c",4);
   // glutAddMenuEntry("pyt",5);
   // glutAddMenuEntry("java",6);

    mainmenu =glutCreateMenu(menu);
    glutAddSubMenu("1st element",ele1);
    glutAddSubMenu("2nd element",ele2);
    glutAddSubMenu("3rd element",ele3);
    glutAddSubMenu("4th element",ele4);
    glutAddSubMenu("5th element",ele5);
    glutAddSubMenu("6th element",ele6);
    glutAddSubMenu("7th element",ele7);
    glutAddSubMenu("8th element",ele8);
    glutAddSubMenu("9th element",ele9);
    glutAddSubMenu("10th element",ele10);

glutAddMenuEntry("exit",0);
    glutAttachMenu(GLUT_RIGHT_BUTTON);



}
typedef struct square{
GLfloat x;
GLfloat y;
//y axis of center
GLfloat r;
// radius
}square;
square c[MAX];


//array of square to store the center and radius of each circle



void make()
{switch(val)
{
case 1 : term1=1; break;
case 2 : term1=2; break;
case 3 : term1=3; break;
case 4 : term1=4; break;
case 5 : term1=5; break;
case 6 : term1=6; break;
case 7 : term1=7; break;
case 8 : term1=8; break;
case 9 : term1=9; break;
case 10 : term1=10; break;

case 11 : term2=1; break;
case 12 : term2=2; break;
case 13 : term2=3; break;
case 14 : term2=4; break;
case 15 : term2=5; break;
case 16 : term2=6; break;
case 17 : term2=7; break;
case 18 : term2=8; break;
case 19 : term2=9; break;
case 20 : term2=10; break;

case 21 : term3=1; break;
case 22 : term3=2; break;
case 23 : term3=3; break;
case 24 : term3=4; break;
case 25 : term3=5; break;
case 26 : term3=6; break;
case 27 : term3=7; break;
case 28 : term3=8; break;
case 29 : term3=9; break;
case 30 : term3=10; break;


case 31 : term4=1; break;
case 32 : term4=2; break;
case 33 : term4=3; break;
case 34 : term4=4; break;
case 35 : term4=5; break;
case 36 : term4=6; break;
case 37 : term4=7; break;
case 38 : term4=8; break;
case 39 : term4=9; break;
case 40 : term4=10; break;


case 41 : term5=1; break;
case 42 : term5=2; break;
case 43 : term5=3; break;
case 44 : term5=4; break;
case 45 : term5=5; break;
case 46 : term5=6; break;
case 47 : term5=7; break;
case 48 : term5=8; break;
case 49 : term5=9; break;
case 50 : term5=10; break;

case 51 : term6=1; break;
case 52 : term6=2; break;
case 53 : term6=3; break;
case 54 : term6=4; break;
case 55 : term6=5; break;
case 56 : term6=6; break;
case 57 : term6=7; break;
case 58 : term6=8; break;
case 59 : term6=9; break;
case 60 : term6=10; break;

case 61 : term7=1; break;
case 62 : term7=2; break;
case 63 : term7=3; break;
case 64 : term7=4; break;
case 65 : term7=5; break;
case 66 : term7=6; break;
case 67 : term7=7; break;
case 68 : term7=8; break;
case 69 : term7=9; break;
case 70 : term7=10; break;

case 71 : term8=1; break;
case 72 : term8=2; break;
case 73 : term8=3; break;
case 74 : term8=4; break;
case 75 : term8=5; break;
case 76 : term8=6; break;
case 77 : term8=7; break;
case 78 : term8=8; break;
case 79 : term8=9; break;
case 80 : term8=10; break;

case 81 : term9=1; break;
case 82 : term9=2; break;
case 83 : term9=3; break;
case 84 : term9=4; break;
case 85 : term9=5; break;
case 86 : term9=6; break;
case 87 : term9=7; break;
case 88 : term9=8; break;
case 89 : term9=9; break;
case 90 : term9=10; break;

case 91 : term10=1; break;
case 92 : term10=2; break;
case 93 : term10=3; break;
case 94 : term10=4; break;
case 95 : term10=5; break;
case 96 : term10=6; break;
case 97 : term10=7; break;
case 98 : term10=8; break;
case 99 : term10=9; break;
case 100 : term10=10; break;

}


}





int a[MAX];
 // int array for sorting algo
// make();
//int initial[MAX] = {term1,term2,term3,term4,term5,term6,term7,term8,term9,term10};
//int array to restore random values after sorting
GLfloat initial_x1,initial_x2;
//to set the destiniation for swapping
int global_i = 0, global_j = 0; //i and j values for bubble-sort
int swapping = 0;
 //flag to check if square are being swapped
int sorting = 0;
//start sorting only after user input

void initialise(){


//if(val == 1)
//{
  //  term1=1;}
  make();
int initial[MAX] = {term1,term2,term3,term4,term5,term6,term7,term8,term9,term10};
global_i = global_j = swapping = 0; //reset all globals
for (int i=0;i<MAX;i++){
 a[i] = initial[i];
//if a[] is sorted restore from initial[]
 c[i].r = a[i]*6.0;
 //6 because to fit squares in screen
 c[i].y = 300.0;
//vertical center of window
 if (i == 0)
    c[i].x = 45.0;
// first circle starts from offset
 else
    c[i].x = c[i-1].x + 90.0;//(c[i-1].r+c[i].r+10.0); //distance between squares = sum of m ax readii
//printf("%f - %f - %f\n",c[i].x,c[i].y,c[i].r); //for testing purpose don worry



}

}

//func to display text on screen char by char
void bitmap_output(int x, int y, char *string, void *font)
{

int len, i;


glRasterPos2f(x, y);

len = (int) strlen(string);

for (i = 0; i < len; i++) {

 glutBitmapCharacter(font, string[i]);

}
}

//function to integer to string
void int_str(int rad,char r[])
{

switch(rad){
case 1: strcpy(r, "1"); break;
case 2: strcpy(r, "2"); break;
case 3: strcpy(r, "3"); break;
case 4: strcpy(r, "4"); break;
case 5: strcpy(r, "5"); break;
case 6: strcpy(r, "6"); break;
case 7: strcpy(r, "7"); break;
case 8: strcpy(r, "8"); break;
case 9: strcpy(r, "9"); break;
case 10: strcpy(r, "10"); break;
}

}

//draw circle by drawing consecutive triangle fans
void square_draw(square c)
{

//glColor3f(0.0,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(c.x-(c.r/2), c.y+(c.r/2));
glVertex2f(c.x+(c.r/2), c.y+(c.r/2));
glVertex2f(c.x+(c.r/2), c.y-(c.r/2));
glVertex2f(c.x-(c.r/2), c.y-(c.r/2));
glEnd();

/*
float i;



glBegin(GL_TRIANGLE_FAN);



glVertex2f(c.x, c.y);
//center of circle



for (i=0;i<360;i+=1)





 glVertex2f(c.x + sin(i) * c.r, c.y + cos(i) * c.r);



glEnd();
*/
//display the value of circle below
int x = c.x-2;
int y = c.y-(c.r+8);
int rad = c.r / 6;
char r[3] = "";



int_str(rad,r);



glColor3f(1.0,1.0,1.0);



bitmap_output(x, y, r, GLUT_BITMAP_HELVETICA_12);
}
 // swaps squares cc1 and cc2 by changing their centers
void swap_squares(square *cc1,square *cc2)
{

if (swapping == 0)

//if squares are not being swapped set destination for each circles
{
 initial_x1 = cc1->x; //center of square in left
 initial_x2 = cc2->x; //center of square in right
 swapping = 1; //means square are being swapp
 printf("%f - %f\n",cc1->r,cc2->r);
}
if (initial_x1 <= cc2->x)

//decrease the center of square in right till its > center of left square
cc2->x -= 3.0;
 //speed of animation
if (initial_x2 >= cc1->x)//increase the center of the squares < center of right square
cc1->x += 3.0;
//printf("one %f - %f\n",initial_x1,cc2->x);
//printf("two %f - %f\n",initial_x2,cc1->x);
// if difference between destination and center < 0.3 then squares are swapped
if (abs(initial_x1-cc2->x) < 0.3 && abs(initial_x2-cc1->x) < 0.3)
//set this to speed of animation
{
swapping = 0;
int temp = cc1->x;
cc1->x = cc2->x;
cc2->x = temp;
temp = cc1->y;
cc1->y = cc2->y;
cc2->y = temp;
temp = cc1->r;
cc1->r = cc2->r;
cc2->r = temp;
}
 }


void sort()

//bubble sort algo
{

if (!swapping) //if not in process of swappincircles only then get new square to swap
{
 while (global_i < 10){
    //global_i = global_j;

    while (global_j < 9){

        if (a[global_j] > a[global_j+1]){
            //printf("%d %d\n",global_j,a[global_j]);
            int temp = a[global_j];
            a[global_j] = a[global_j+1];
            a[global_j+1] = temp;
            goto SWAP;

            }
       global_j ++;

    }
    global_j=0;
    global_i ++;
    }
}
if(global_i<10 && global_i>=0)
{
SWAP:
//printf("swapping --> %d - %d\n",global_j,global_j+1);
glColor3f(0.65,0.65,0.65);
bitmap_output(10, 40, "Swapping ->",GLUT_BITMAP_9_BY_15);
char r[3]="";
int_str(a[global_j],r);
bitmap_output(150, 40, r,GLUT_BITMAP_9_BY_15);
int_str(a[global_j+1],r);
bitmap_output(175, 40, r,GLUT_BITMAP_9_BY_15);
swap_squares(&c[global_j],&c[global_j+1]);

}

}


void display_text(){
bitmap_output(220, 545, "ALGORITHM SIMULATION MODEL",GLUT_BITMAP_TIMES_ROMAN_24);//title larger font
//other text small font
bitmap_output(10, 525, "",GLUT_BITMAP_9_BY_15);
if (sorting == 0)//if not sorting display menu
{
//bitmap_output(10, 455, "MENU",GLUT_BITMAP_9_BY_15);
bitmap_output(10, 50, "X to SORT\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tR to RESET\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tQ to QUIT",GLUT_BITMAP_HELVETICA_18);
/*bitmap_output(10, 415, "R to RESET",GLUT_BITMAP_HELVETICA_18);
bitmap_output(10, 395, "ESC to QUIT",GLUT_BITMAP_HELVETICA_18); */
}
else if (sorting == 1)
{
glColor3f(1.0,0.0,0.0);
bitmap_output(10, 70, "Press Q to terminate simulation.",GLUT_BITMAP_9_BY_15);
//bitmap_output(10, 445, "Press ESC to quit anytime",GLUT_BITMAP_9_BY_15);
//bitmap_output(10, 435, "Please do not quit",GLUT_BITMAP_9_BY_15);
glColor3f(0.0,0.0,0.0);
}

}
 void front()
{



glColor3f(0.7,0.7,0.7);



bitmap_output(240, 330, "ALGORITHM SIMULATION MODEL",GLUT_BITMAP_TIMES_ROMAN_24);

glColor3f(0.7,0.9,0.9);

//for square


bitmap_output(600, 125, "Prateek 1PE13CS112",GLUT_BITMAP_9_BY_15);
bitmap_output(600, 95, "Rahul A 1PE13CS118",GLUT_BITMAP_9_BY_15);


}
void display(void)
{
glClear(GL_COLOR_BUFFER_BIT);
glColor3f(0.65,0.65,0.65);
glClearColor(0.0,0.0,0.0,1.0);


if (k==0) front();
else
{
display_text();
glPointSize(2.0);

for (int i=0;i<MAX;i++){
 glColor3f(0.0,0.5,0.5);
 square_draw(c[i]);
}

if (global_j+1 < MAX && sorting == 1) // call sort only on key press
sort();
else
sorting = 0;
}
glFlush();
glutSwapBuffers();
}
void keyboard (unsigned char key, int x, int y)
{
if(key==13) k=1;
if (k==1){
switch (key){
case 'q': exit (0); //27 is the ascii code for the ESC key
case 'x' : sorting = 1; break; //enter
case 'r' : initialise(); break;
}
}


}
void reshape(int w, int h){
glViewport(0, 0, w, h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
if(w<=h)
    glOrtho(-2.0, 2.0, -2.0 * (GLfloat) h/ (GLfloat) w, 2.0* (GLfloat) h / (GLfloat) w, -10.0, 10.0);
else
    glOrtho(-2.0 * (GLfloat) w/ (GLfloat) h, 2.0* (GLfloat) w / (GLfloat) h, -2.0, 2.0, -10.0, 10.0);
glMatrixMode(GL_MODELVIEW);
}


void init(void){
glClearColor(1.0,1.0,1.0,0.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(0.0,900.0,0.0,600.0);
}

void menu(int value)
{
  if(value==0)
  {
//     glutDestroyWindow(win);
          exit(0);


     }
else
val=value;


initialise();

glutPostRedisplay();

}




int main(int argc, char ** argv){
 glutInit(&argc,argv);
 glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA);
 glutInitWindowPosition(50,50);
 glutInitWindowSize(900,600);
 glutCreateWindow("Algorithm Simulation Model");


createmenu();
  //make();
 init();
//createmenu();
 initialise();
 //createmenu();

 glutDisplayFunc(display);
 glutIdleFunc (display);
 glutKeyboardFunc (keyboard);
 glutMainLoop();
 return 0;
}

