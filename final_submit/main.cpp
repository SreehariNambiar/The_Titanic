//
//  main.cpp
//  final_submit
//
//  Created by Sreehari Nambiar on 14/05/21.
//

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include <GLUT/glut.h>
#include "SDL2SoundEffects.h"


#define GL_SILENCE_DEPRECATION

using namespace std;

void ship(int,int);
void water(void);
void sun(void);
void drawWalls();
void bridge();
void manWoman0();
void manWoman();
void humanDisplay(float,float,int,int,int,int,float);
void humanDisplay1(float,float,int,int,int,int,float);
void humanDisplay30(float,float,int,int,int,int,float);
void humanDisplay130(float,float,int,int,int,int,float);
void images();
void bed();
void table();
void chairs();
void sofa();
void lights();
void graphicsi();
void graphicsj();
void drawWalls2();
void table2();
void chair2();
void windows2();
void pilliars2();
void lights2();
void fan2();
void talks2(float,float,float,float,float);
float xc=0,xcc=0;
void humanDisplay2(float,float,int,int,int,int,float);
int ij=0,choice=0;
void myinit();
void displayx();
void display2();
void display3();
void display4();
void rock30();
void display30();
void displayy30();
void display130();
void display230();
void display330();
void ship30();
void water30();
void displayx30();
void displayxx30();
void windows3();
void myinit30();
void displayy30();
void keys(unsigned char key,int x,int y);

void displayx(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  
    water();
    manWoman0();

    ship(0,0);
    sun();
    graphicsi();
    bridge();
//    humanDisplay(0,-10);
    manWoman();
    glEnd();
    glutSwapBuffers();
   
}

void display()
{
 
 
//    glutKeyboardFunc(keys);
    glDisable(GL_DEPTH_TEST);
    myinit();
    glutTimerFunc(20, NULL, 0);
    glutDisplayFunc(displayx);
    glScaled(40,50,0);
    


}
void manWoman0(){
    //front side
    humanDisplay(5,-11,0,0,0,4,0);
    humanDisplay1(5.2,-11,0,1,1,4,0);
    humanDisplay(4.8,-11,0,0,0,4,0);
    humanDisplay1(4.6,-11,1,0,1,4,0);
    humanDisplay(4.4,-11,0,0,0,4,0);
    humanDisplay1(4.2,-11,0,0,1,4,0);
    humanDisplay(5.4,-11,1,0,1,4,0);
    humanDisplay(4,-10.8,0,0,0,4,0);
    humanDisplay1(3.8,-10.8,0,1,1,4,0);
    humanDisplay(3.6,-10.8,0,0,0,4,0);
    humanDisplay1(3.4,-10.8,1,0,1,4,0);
    humanDisplay(3.2,-10.8,0,0,0,4,0);
    humanDisplay1(2.8,-10.8,0,0,1,4,0);
    humanDisplay(3.0,-10.8,1,0,1,4,0);
    humanDisplay(2.6,-10.7,0,0,0,4,0);
    humanDisplay1(2.4,-10.7,0,1,1,4,0);
    humanDisplay(2.2,-10.7,0,0,0,4,0);
    humanDisplay1(2.0,-10.7,1,0,1,4,0);
    humanDisplay(1.8,-10.7,0,0,0,4,0);
    humanDisplay1(1.6,-10.7,0,0,1,4,0);
    humanDisplay(1.4,-10.7,1,0,1,4,0);
    
    //rear side
    //front side
    humanDisplay(21.8,-11,0,0,0,4,0);
    humanDisplay1(21.6,-11,0,1,1,4,0);
    humanDisplay(21.4,-11,0,0,0,4,0);
    humanDisplay1(21.2,-11,1,0,1,4,0);
    humanDisplay(21,-11,0,0,0,4,0);
    humanDisplay1(20.8,-11,0,0,1,4,0);
    humanDisplay(20.6,-11,1,0,1,4,0);
    humanDisplay(22,-11,0,0,0,4,0);
    humanDisplay1(22.2,-11,0,1,1,4,0);
    humanDisplay(22.4,-11,0,0,0,4,0);
    humanDisplay1(22.6,-11,1,0,1,4,0);
    
    
}
void manWoman(){
    
    //row2
    humanDisplay(-7,-13.25,0,0,0,1,0);
    humanDisplay1(-5,-13.25,0,1.5,1,1,0);
    humanDisplay1(-3,-13.25,0,0,0,1,0);
    humanDisplay(-1,-13.25,0,0,0.0,1,0);
    humanDisplay(1,-13.25,0,0,0,1,0);
    humanDisplay1(3,-13.25,0,1,1,1,0);
    humanDisplay(5,-13.25,1,1,1,1,0);
    humanDisplay(7,-13.25,0,1,0,1,0);
    humanDisplay1(9,-13.25,0,1,0,1,0);
    humanDisplay(11,-13.25,0,0,1,1,0);
    humanDisplay1(13,-13.25,0,0,0,1,0);
    humanDisplay(15,-13.25,0,0,1,1,0);
    humanDisplay1(17,-13.25,0,1,0,1,0);
    humanDisplay(19,-13.25,1,0,0,1,0);
    humanDisplay(21,-13.25,1,0,0,1,0);
    humanDisplay1(23,-13.25,0,1,0,1,0);
    humanDisplay(25,-13.25,0,0,1,1,0);
   
    
//    humanDisplay(21.25,-7,0,0,0,3,0);
    
    //row1
    
    humanDisplay(0,-14,0,0,0,2,0);
    humanDisplay1(2,-14,0,1.5,1,2,0);
    humanDisplay1(4,-14,0,0,0,2,0);
    humanDisplay(6,-14,0,0,0.0,2,0);
    humanDisplay(8,-14,0,1,0,2,0);
    humanDisplay1(10,-14,1,1,1,2,0);
    humanDisplay(12,-14,0,0,1,2,0);
    humanDisplay(14,-14,0,0,0,2,0);
    humanDisplay(16,-14,0,1.5,1,2,0);
    humanDisplay(18,-14,0,1,1,2,0);
    humanDisplay1(20,-14,0,1,0,2,0);
    humanDisplay(22,-14,0,1,0,2,0);
    humanDisplay(24,-14,0,1,0,2,0);
    humanDisplay(26,-14,0,0,1,2,0);
    humanDisplay1(28,-14,0,0,0,2,0);
    humanDisplay(30,-14,0,0,0,2,0);
    humanDisplay(-2,-14,0,1,0,2,0);
    humanDisplay1(-4,-14,0,0,0,2,0);
    humanDisplay1(-6,-14,0,0,0,2,0);
    humanDisplay(-8,-14,0,0,0,2,0);
    
   
    

    
   
    
    

}
void bridge(){
    
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex2f(25,1.5);
    glVertex2f(0,1.5);
    glVertex2f(0,0);
    glVertex2f(25,0);
    glEnd();
    
//    glColor3f(0.36,0.25,0.2);
//    glBegin(GL_POLYGON);
//    glVertex2f(11,1.5);
//    glVertex2f(12.25,2.5);
//    glVertex2f(12.75,2.5);
//    glVertex2f(14,1.5);
//    glEnd();
   
    //row2
    
    
}

void humanDisplay(float x,float y,int ir,int ib,int ig,int row,float wave){
    
    if(row==2){
    //hair
    
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(2+x,15+y);
    glVertex2f(2+x,15.5+y);
    glVertex2f(2.5+x,15.5+y);
    glVertex2f(2.75+x,15.75+y);
    glVertex2f(2.75+x,15+y);
    glEnd();
    
    //face
    glColor3f(0.858824,0.576471,0.439216);
      
    glBegin(GL_POLYGON);
    glVertex2f(2+x,14.45+y);
    glVertex2f(2+x,15+y);
    glVertex2f(2.75+x,15+y);
    glVertex2f(2.75+x,14.45+y);
    glEnd();
    
    //neck
    glColor3f(0.858824,0.576471,0.439216);
    glBegin(GL_POLYGON);
    glVertex2f(2.25+x,14.35+y);
    glVertex2f(2.25+x,14.45+y);
    glVertex2f(2.5+x,14.45+y);
    glVertex2f(2.5+x,14.35+y);
    glEnd();
    
    //BODY
    //  skin color  glColor3f(0.858824,0.576471,0.439216);
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,13+y);
    glVertex2f(1.75+x,14.35+y);
    glVertex2f(3+x,14.35+y);
    glVertex2f(3+x,13+y);
    glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.76+x,13.01+y);
        glVertex2f(1.76+x,14.36+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.76+x,13.01+y);
        glVertex2f(2.9+x,13.01+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.9+x,13.01+y);
        glVertex2f(2.9+x,14.36+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.76+x,14.36+y);
        glVertex2f(2.9+x,14.36+y);
        glEnd();
        
    
//    //coat lines right
//    glColor3f(1,1,1);
//    glBegin(GL_LINES);
//    glVertex2f(2.85+x, 14.35+y);
//    glVertex2f(2.95+x, 14.2+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.95+x, 14.2+y);
//    glVertex2f(2.6+x, 14.15+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.6+x,14.15+y);
//    glVertex2f(2.65+x,14+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.65+x,14+y);
//    glVertex2f(2.3+x,14+y);
//    glEnd();
//
//
//    ///coat line center
//    glBegin(GL_LINES);
//    glVertex2f(2.325+x,14+y);
//    glVertex2f(2.325+x,13+y);
//    glEnd();
//
//    //coat lines left
//    glColor3f(1,1,1);
//    glBegin(GL_LINES);
//    glVertex2f(1.9+x, 14.35+y);
//    glVertex2f(1.8+x, 14.2+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(1.8+x, 14.2+y);
//    glVertex2f(2.15+x, 14.15+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.15+x,14.15+y);
//    glVertex2f(2+x,14+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2+x,14+y);
//    glVertex2f(2.35+x,14+y);
//    glEnd();
//
//    //triangle
//    glColor3f(1,1,1);
//    glBegin(GL_POLYGON);
//    glVertex2f(2.35+x,14+y);
//    glVertex2f(2.15+x,14.35+y);
//    glVertex2f(2.6+x,14.35+y);
//    glVertex2f(2.35+x,14+y);
//    glEnd();
    
    //left hand
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(1.5+x,13+y);
    glVertex2f(1.5+x,14.35+y);
    glVertex2f(1.75+x,14.35+y);
    glVertex2f(1.75+x,13+y);
    glEnd();
    
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.76+x,13.01+y);
        glVertex2f(1.76+x,14.36+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.76+x,13.01+y);
        glVertex2f(1.51+x,13.01+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.51+x,13.01+y);
        glVertex2f(1.51+x,14.36+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.76+x,14.36+y);
        glVertex2f(1.51+x,14.36+y);
        glEnd();
        
    //left palm
    glColor3f(0.858824,0.576471,0.439216);
    glBegin(GL_POLYGON);
    glVertex2f(1.5+x,13+y);
    glVertex2f(1.5+x,12.75+y);
    glVertex2f(1.75+x,12.75+y);
    glVertex2f(1.75+x,13+y);
    glEnd();
    
        
    //right hand
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(3+x,13+y);
    glVertex2f(3+x,14.35+y);
    glVertex2f(3.25+x,14.35+y);
    glVertex2f(3.25+x,13+y);
    glEnd();
    
    //right palm
    glColor3f(0.858824,0.576471,0.439216);
    glBegin(GL_POLYGON);
    glVertex2f(3+x,13+y);
    glVertex2f(3+x,12.75+y);
    glVertex2f(3.25+x,12.75+y);
    glVertex2f(3.25+x,13+y);
    glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(3.24+x,13.01+y);
        glVertex2f(3.24+x,14.36+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(3.24+x,13.01+y);
        glVertex2f(2.9+x,13.01+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.9+x,13.01+y);
        glVertex2f(2.9+x,14.36+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(3.24+x,14.36+y);
        glVertex2f(2.9+x,14.36+y);
        glEnd();
     
   
    
    //right legs
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(2.3+x,11.5+y);
    glVertex2f(2.3+x,13+y);
    glVertex2f(3+x,13+y);
    glVertex2f(3+x,11.5+y);
    glEnd();
    
    //right shoe
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(3+x,11.5+y);
    glVertex2f(3.2+x,11.25+y);
    glVertex2f(2.3+x,11.25+y);
    glVertex2f(2.3+x,11.5+y);
    glEnd();
    //left leg
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,11.5+y);
    glVertex2f(1.75+x,13+y);
    glVertex2f(2.3+x,13+y);
    glVertex2f(2.3+x,11.5+y);
    glEnd();
    
    //left shoe
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,11.5+y);
    glVertex2f(1.55+x,11.25+y);
    glVertex2f(2.3+x,11.25+y);
    glVertex2f(2.3+x,11.5+y);
    glEnd();
    }
    
    if(row==4){

        //hair
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.2+x,15.5+y);
        glVertex2f(0.22+x,15.55+y);
        glVertex2f(0.225+x,15.55+y);
        glVertex2f(0.275+x,15.575+y);
        glVertex2f(0.275+x,15.5+y);
        glEnd();

        //face
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.2+x,15.445+y);
        glVertex2f(0.2+x,15.5+y);
        glVertex2f(0.275+x,15.5+y);
        glVertex2f(0.275+x,15.445+y);
        glEnd();

        //neck
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.225+x,15.435+y);
        glVertex2f(0.225+x,15.445+y);
        glVertex2f(0.25+x,15.445+y);
        glVertex2f(0.25+x,15.435+y);
        glEnd();

        //BODY
        //  skin color  glColor3f(0.858824,0.576471,0.439216);
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175+x,15.3+y);
        glVertex2f(0.175+x,15.435+y);
        glVertex2f(0.3+x,15.435+y);
        glVertex2f(0.3+x,15.3+y);
        glEnd();

        //coat lines right
        glColor3f(1,1,1);
        glBegin(GL_LINES);
        glVertex2f(0.285+x, 15.435+y);
        glVertex2f(0.295+x, 15.42+y);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.295+x, 15.42+y);
        glVertex2f(0.26+x, 15.415+y);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.26+x,15.415+y);
        glVertex2f(0.265+x,15.4+y);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.265+x,15.4+y);
        glVertex2f(0.23+x,15.4+y);
        glEnd();


        ///coat line center
        glBegin(GL_LINES);
        glVertex2f(0.2325+x,15.4+y);
        glVertex2f(0.2325+x,15.3+y);
        glEnd();

        //coat lines left
        glColor3f(1,1,1);
        glBegin(GL_LINES);
        glVertex2f(0.19+x, 15.435+y);
        glVertex2f(0.18+x, 15.42+y);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.18+x, 15.42+y);
        glVertex2f(0.215+x, 15.415+y);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.215+x,15.415+y);
        glVertex2f(0.2+x,15.4+y);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.2+x,15.4+y);
        glVertex2f(0.235+x,15.4+y);
        glEnd();

        //triangle
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex2f(0.235+x,15.4+y);
        glVertex2f(0.215+x,15.435+y);
        glVertex2f(0.26+x,15.435+y);
        glVertex2f(0.35+x,15.4+y);
        glEnd();

        //left hand
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.15+x,15.3+y);
        glVertex2f(0.15+x,15.435+y);
        glVertex2f(0.175+x,15.435+y);
        glVertex2f(0.175+x,15.3+y);
        glEnd();

        //left palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.15+x,15.3+y);
        glVertex2f(0.15+x,15.275+y);
        glVertex2f(0.175+x,15.275+y);
        glVertex2f(0.175+x,15.3+y);
        glEnd();

        //right hand
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.3+x,15.3+y);
        glVertex2f(0.3+x,15.435+y);
        glVertex2f(0.325+x,15.435+y);
        glVertex2f(0.325+x,15.3+y);
        glEnd();

        //right palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.3+x,15.3+y);
        glVertex2f(0.3+x,15.275+y);
        glVertex2f(0.325+x,15.275+y);
        glVertex2f(0.325+x,15.3+y);
        glEnd();

        //right legs
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.23+x,15.15+y);
        glVertex2f(0.23+x,15.3+y);
        glVertex2f(0.3+x,15.3+y);
        glVertex2f(0.3+x,15.15+y);
        glEnd();

        //right shoe
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.3+x,15.15+y);
        glVertex2f(0.32+x,15.125+y);
        glVertex2f(0.23+x,15.125+y);
        glVertex2f(0.23+x,15.15+y);
        glEnd();
        //left leg
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175+x,15.15+y);
        glVertex2f(0.175+x,15.3+y);
        glVertex2f(0.23+x,15.3+y);
        glVertex2f(0.23+x,15.15+y);
        glEnd();

        //left shoe
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.175+x,15.15+y);
        glVertex2f(0.155+x,15.125+y);
        glVertex2f(0.23+x,15.125+y);
        glVertex2f(0.23+x,15.15+y);
        glEnd();


    }
    if(row==3){
        //hair
        
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(2+x,15+y);
        glVertex2f(2+x,15.5+y);
        glVertex2f(2.5+x,15.5+y);
        glVertex2f(2.75+x,15.75+y);
        glVertex2f(2.75+x,15+y);
        glEnd();
        
       
        //face
        glColor3f(0.858824,0.576471,0.439216);
          
        glBegin(GL_POLYGON);
        glVertex2f(2+x,14.45+y);
        glVertex2f(2+x,15+y);
        glVertex2f(2.75+x,15+y);
        glVertex2f(2.75+x,14.45+y);
        glEnd();
        
        //mouth
        
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex2f(2.25+x,14.65+y);
        glVertex2f(2.4+x,14.65+y);
        glVertex2f(2.35+x,14.575+y);
        glVertex2f(2.3+x,14.575+y);
        glEnd();
        
        //eyebrows
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.1+x,14.95+y);
        glVertex2f(2.25+x,14.9+y);
        glEnd();
        
        //eyebrows
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.55+x,14.95+y);
        glVertex2f(2.4+x,14.9+y);
        glEnd();
        
        
        
        
        //eyes
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(2.16+x,14.75+y);
        glVertex2f(2.16+x,14.85+y);
        glVertex2f(2.25+x,14.85+y);
        glVertex2f(2.25+x,14.75+y);
        glEnd();
        
        //eyes
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(2.4+x,14.75+y);
        glVertex2f(2.4+x,14.85+y);
        glVertex2f(2.5+x,14.85+y);
        glVertex2f(2.5+x,14.75+y);
        glEnd();
        
        
        
//        //neck
//        glColor3f(0.858824,0.576471,0.439216);
//        glBegin(GL_POLYGON);
//        glVertex2f(2.25+x,14.35+y);
//        glVertex2f(2.25+x,14.45+y);
//        glVertex2f(2.5+x,14.45+y);
//        glVertex2f(2.5+x,14.35+y);
//        glEnd();
        
//        //BODY
//        //  skin color  glColor3f(0.858824,0.576471,0.439216);
//        glColor3f(0+ib,0+ir,0+ig);
//        glBegin(GL_POLYGON);
//        glVertex2f(1.75+x,13+y);
//        glVertex2f(1.75+x,14.35+y);
//        glVertex2f(3+x,14.35+y);
//        glVertex2f(3+x,13+y);
//        glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(1.76+x,13.01+y);
//            glVertex2f(1.76+x,14.36+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(1.76+x,13.01+y);
//            glVertex2f(2.9+x,13.01+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(2.9+x,13.01+y);
//            glVertex2f(2.9+x,14.36+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(1.76+x,14.36+y);
//            glVertex2f(2.9+x,14.36+y);
//            glEnd();
//
//
//    //    //coat lines right
//        glColor3f(1,1,1);
//        glBegin(GL_LINES);
//        glVertex2f(2.85+x, 14.35+y);
//        glVertex2f(2.95+x, 14.2+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(2.95+x, 14.2+y);
//        glVertex2f(2.6+x, 14.15+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(2.6+x,14.15+y);
//        glVertex2f(2.65+x,14+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(2.65+x,14+y);
//        glVertex2f(2.3+x,14+y);
//        glEnd();
//    //
//    //
//    //    ///coat line center
//        glBegin(GL_LINES);
//        glVertex2f(2.325+x,14+y);
//        glVertex2f(2.325+x,13+y);
//        glEnd();
//    //
//    //    //coat lines left
//        glColor3f(1,1,1);
//        glBegin(GL_LINES);
//        glVertex2f(1.9+x, 14.35+y);
//        glVertex2f(1.8+x, 14.2+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(1.8+x, 14.2+y);
//        glVertex2f(2.15+x, 14.15+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(2.15+x,14.15+y);
//        glVertex2f(2+x,14+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(2+x,14+y);
//        glVertex2f(2.35+x,14+y);
//        glEnd();
//    //
//    //    //triangle
//        glColor3f(1,1,1);
//        glBegin(GL_POLYGON);
//        glVertex2f(2.35+x,14+y);
//        glVertex2f(2.15+x,14.35+y);
//        glVertex2f(2.6+x,14.35+y);
//        glVertex2f(2.35+x,14+y);
//        glEnd();
//
//        //left hand
//        glColor3f(0+ib,0+ir,0+ig);
//        glBegin(GL_POLYGON);
//        glVertex2f(1.5+x,13+y);
//        glVertex2f(1.5+x,14.35+y);
//        glVertex2f(1.75+x,14.35+y);
//        glVertex2f(1.75+x,13+y);
//        glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(1.76+x,13.01+y);
//            glVertex2f(1.76+x,14.36+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(1.76+x,13.01+y);
//            glVertex2f(1.51+x,13.01+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(1.51+x,13.01+y);
//            glVertex2f(1.51+x,14.36+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(1.76+x,14.36+y);
//            glVertex2f(1.51+x,14.36+y);
//            glEnd();
//
//        //left palm
//        glColor3f(0.858824,0.576471,0.439216);
//        glBegin(GL_POLYGON);
//        glVertex2f(1.5+x,13+y);
//        glVertex2f(1.5+x,12.75+y);
//        glVertex2f(1.75+x,12.75+y);
//        glVertex2f(1.75+x,13+y);
//        glEnd();
//
//
//        //right hand
//        glColor3f(0+ib,0+ir,0+ig);
//        glBegin(GL_POLYGON);
//        glVertex2f(3+x,13+y);
//        glVertex2f(3+x,14.35+y);
//        glVertex2f(3.25+x,14.35+y);
//        glVertex2f(3.25+x,13+y);
//        glEnd();
//
//        //right palm
//        glColor3f(0.858824,0.576471,0.439216);
//        glBegin(GL_POLYGON);
//        glVertex2f(3+x,13+y);
//        glVertex2f(3+x,12.75+y);
//        glVertex2f(3.25+x,12.75+y);
//        glVertex2f(3.25+x,13+y);
//        glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(3.24+x,13.01+y);
//            glVertex2f(3.24+x,14.36+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(3.24+x,13.01+y);
//            glVertex2f(2.9+x,13.01+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(2.9+x,13.01+y);
//            glVertex2f(2.9+x,14.36+y);
//            glEnd();
//
//            glColor3f(0,0,0);
//            glBegin(GL_LINES);
//            glVertex2f(3.24+x,14.36+y);
//            glVertex2f(2.9+x,14.36+y);
//            glEnd();
//
//
//
//        //right legs
//        glColor3f(0+ib,0+ir,0+ig);
//        glBegin(GL_POLYGON);
//        glVertex2f(2.3+x,11.5+y);
//        glVertex2f(2.3+x,13+y);
//        glVertex2f(3+x,13+y);
//        glVertex2f(3+x,11.5+y);
//        glEnd();
//
//        //right shoe
//        glColor3f(0+ib,0+ir,0+ig);
//        glBegin(GL_POLYGON);
//        glVertex2f(3+x,11.5+y);
//        glVertex2f(3.2+x,11.25+y);
//        glVertex2f(2.3+x,11.25+y);
//        glVertex2f(2.3+x,11.5+y);
//        glEnd();
//        //left leg
//        glColor3f(0+ib,0+ir,0+ig);
//        glBegin(GL_POLYGON);
//        glVertex2f(1.75+x,11.5+y);
//        glVertex2f(1.75+x,13+y);
//        glVertex2f(2.3+x,13+y);
//        glVertex2f(2.3+x,11.5+y);
//        glEnd();
//
//        //left shoe
//        glColor3f(0+ib,0+ir,0+ig);
//        glBegin(GL_POLYGON);
//        glVertex2f(1.75+x,11.5+y);
//        glVertex2f(1.55+x,11.25+y);
//        glVertex2f(2.3+x,11.25+y);
//        glVertex2f(2.3+x,11.5+y);
//        glEnd();
    }
    
//    if(row==4){
//        //hair
//
//        glColor3f(0,0,0);
//        glBegin(GL_POLYGON);
//        glVertex2f(2+x,15+y);
//        glVertex2f(2+x,15.5+y);
//        glVertex2f(2.5+x,15.5+y);
//        glVertex2f(2.75+x,15.75+y);
//        glVertex2f(2.75+x,15+y);
//        glEnd();
//
//
//        //face
//        glColor3f(0.858824,0.576471,0.439216);
//
//        glBegin(GL_POLYGON);
//        glVertex2f(2+x,14.45+y);
//        glVertex2f(2+x,15+y);
//        glVertex2f(2.75+x,15+y);
//        glVertex2f(2.75+x,14.45+y);
//        glEnd();
//
//        //mouth
//
//        glColor3f(1,1,1);
//        glBegin(GL_POLYGON);
//        glVertex2f(2.25+x,14.65+y);
//        glVertex2f(2.4+x,14.65+y);
//        glVertex2f(2.35+x,14.575+y);
//        glVertex2f(2.3+x,14.575+y);
//        glEnd();
//
//        //eyebrows
//
//        glColor3f(0,0,0);
//        glBegin(GL_LINES);
//        glVertex2f(2.1+x,14.95+y);
//        glVertex2f(2.25+x,14.9+y);
//        glEnd();
//
//        //eyebrows
//
//        glColor3f(0,0,0);
//        glBegin(GL_LINES);
//        glVertex2f(2.55+x,14.95+y);
//        glVertex2f(2.4+x,14.9+y);
//        glEnd();
//
//
//
//
//        //eyes
//        glColor3f(0,0,0);
//        glBegin(GL_POLYGON);
//        glVertex2f(2.16+x,14.75+y);
//        glVertex2f(2.16+x,14.85+y);
//        glVertex2f(2.25+x,14.85+y);
//        glVertex2f(2.25+x,14.75+y);
//        glEnd();
//
//        //eyes
//        glColor3f(0,0,0);
//        glBegin(GL_POLYGON);
//        glVertex2f(2.4+x,14.75+y);
//        glVertex2f(2.4+x,14.85+y);
//        glVertex2f(2.5+x,14.85+y);
//        glVertex2f(2.5+x,14.75+y);
//        glEnd();
//
//
//
////        //neck
////        glColor3f(0.858824,0.576471,0.439216);
////        glBegin(GL_POLYGON);
////        glVertex2f(2.25+x,14.35+y);
////        glVertex2f(2.25+x,14.45+y);
////        glVertex2f(2.5+x,14.45+y);
////        glVertex2f(2.5+x,14.35+y);
////        glEnd();
//
////        //BODY
////        //  skin color  glColor3f(0.858824,0.576471,0.439216);
////        glColor3f(0+ib,0+ir,0+ig);
////        glBegin(GL_POLYGON);
////        glVertex2f(1.75+x,13+y);
////        glVertex2f(1.75+x,14.35+y);
////        glVertex2f(3+x,14.35+y);
////        glVertex2f(3+x,13+y);
////        glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(1.76+x,13.01+y);
////            glVertex2f(1.76+x,14.36+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(1.76+x,13.01+y);
////            glVertex2f(2.9+x,13.01+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(2.9+x,13.01+y);
////            glVertex2f(2.9+x,14.36+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(1.76+x,14.36+y);
////            glVertex2f(2.9+x,14.36+y);
////            glEnd();
////
////
////    //    //coat lines right
////        glColor3f(1,1,1);
////        glBegin(GL_LINES);
////        glVertex2f(2.85+x, 14.35+y);
////        glVertex2f(2.95+x, 14.2+y);
////        glEnd();
////        glBegin(GL_LINES);
////        glVertex2f(2.95+x, 14.2+y);
////        glVertex2f(2.6+x, 14.15+y);
////        glEnd();
////        glBegin(GL_LINES);
////        glVertex2f(2.6+x,14.15+y);
////        glVertex2f(2.65+x,14+y);
////        glEnd();
////        glBegin(GL_LINES);
////        glVertex2f(2.65+x,14+y);
////        glVertex2f(2.3+x,14+y);
////        glEnd();
////    //
////    //
////    //    ///coat line center
////        glBegin(GL_LINES);
////        glVertex2f(2.325+x,14+y);
////        glVertex2f(2.325+x,13+y);
////        glEnd();
////    //
////    //    //coat lines left
////        glColor3f(1,1,1);
////        glBegin(GL_LINES);
////        glVertex2f(1.9+x, 14.35+y);
////        glVertex2f(1.8+x, 14.2+y);
////        glEnd();
////        glBegin(GL_LINES);
////        glVertex2f(1.8+x, 14.2+y);
////        glVertex2f(2.15+x, 14.15+y);
////        glEnd();
////        glBegin(GL_LINES);
////        glVertex2f(2.15+x,14.15+y);
////        glVertex2f(2+x,14+y);
////        glEnd();
////        glBegin(GL_LINES);
////        glVertex2f(2+x,14+y);
////        glVertex2f(2.35+x,14+y);
////        glEnd();
////    //
////    //    //triangle
////        glColor3f(1,1,1);
////        glBegin(GL_POLYGON);
////        glVertex2f(2.35+x,14+y);
////        glVertex2f(2.15+x,14.35+y);
////        glVertex2f(2.6+x,14.35+y);
////        glVertex2f(2.35+x,14+y);
////        glEnd();
////
////        //left hand
////        glColor3f(0+ib,0+ir,0+ig);
////        glBegin(GL_POLYGON);
////        glVertex2f(1.5+x,13+y);
////        glVertex2f(1.5+x,14.35+y);
////        glVertex2f(1.75+x,14.35+y);
////        glVertex2f(1.75+x,13+y);
////        glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(1.76+x,13.01+y);
////            glVertex2f(1.76+x,14.36+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(1.76+x,13.01+y);
////            glVertex2f(1.51+x,13.01+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(1.51+x,13.01+y);
////            glVertex2f(1.51+x,14.36+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(1.76+x,14.36+y);
////            glVertex2f(1.51+x,14.36+y);
////            glEnd();
////
////        //left palm
////        glColor3f(0.858824,0.576471,0.439216);
////        glBegin(GL_POLYGON);
////        glVertex2f(1.5+x,13+y);
////        glVertex2f(1.5+x,12.75+y);
////        glVertex2f(1.75+x,12.75+y);
////        glVertex2f(1.75+x,13+y);
////        glEnd();
////
////
////        //right hand
////        glColor3f(0+ib,0+ir,0+ig);
////        glBegin(GL_POLYGON);
////        glVertex2f(3+x,13+y);
////        glVertex2f(3+x,14.35+y);
////        glVertex2f(3.25+x,14.35+y);
////        glVertex2f(3.25+x,13+y);
////        glEnd();
////
////        //right palm
////        glColor3f(0.858824,0.576471,0.439216);
////        glBegin(GL_POLYGON);
////        glVertex2f(3+x,13+y);
////        glVertex2f(3+x,12.75+y);
////        glVertex2f(3.25+x,12.75+y);
////        glVertex2f(3.25+x,13+y);
////        glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(3.24+x,13.01+y);
////            glVertex2f(3.24+x,14.36+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(3.24+x,13.01+y);
////            glVertex2f(2.9+x,13.01+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(2.9+x,13.01+y);
////            glVertex2f(2.9+x,14.36+y);
////            glEnd();
////
////            glColor3f(0,0,0);
////            glBegin(GL_LINES);
////            glVertex2f(3.24+x,14.36+y);
////            glVertex2f(2.9+x,14.36+y);
////            glEnd();
////
////
////
////        //right legs
////        glColor3f(0+ib,0+ir,0+ig);
////        glBegin(GL_POLYGON);
////        glVertex2f(2.3+x,11.5+y);
////        glVertex2f(2.3+x,13+y);
////        glVertex2f(3+x,13+y);
////        glVertex2f(3+x,11.5+y);
////        glEnd();
////
////        //right shoe
////        glColor3f(0+ib,0+ir,0+ig);
////        glBegin(GL_POLYGON);
////        glVertex2f(3+x,11.5+y);
////        glVertex2f(3.2+x,11.25+y);
////        glVertex2f(2.3+x,11.25+y);
////        glVertex2f(2.3+x,11.5+y);
////        glEnd();
////        //left leg
////        glColor3f(0+ib,0+ir,0+ig);
////        glBegin(GL_POLYGON);
////        glVertex2f(1.75+x,11.5+y);
////        glVertex2f(1.75+x,13+y);
////        glVertex2f(2.3+x,13+y);
////        glVertex2f(2.3+x,11.5+y);
////        glEnd();
////
////        //left shoe
////        glColor3f(0+ib,0+ir,0+ig);
////        glBegin(GL_POLYGON);
////        glVertex2f(1.75+x,11.5+y);
////        glVertex2f(1.55+x,11.25+y);
////        glVertex2f(2.3+x,11.25+y);
////        glVertex2f(2.3+x,11.5+y);
////        glEnd();
//    }
    
    if(row==1){
    //hair
    
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(2+x,15+y);
    glVertex2f(2+x,15.25+y);
    glVertex2f(2.25+x,15.25+y);
    glVertex2f(2.5+x,15.5+y);
    glVertex2f(2.5+x,15+y);
    glEnd();
    
    //face
    glColor3f(0.858824,0.576471,0.439216);
      
    glBegin(GL_POLYGON);
    glVertex2f(2+x,14.7+y);
    glVertex2f(2+x,15+y);
    glVertex2f(2.5+x,15+y);
    glVertex2f(2.5+x,14.7+y);
    glEnd();
    
    //neck
    glColor3f(0.858824,0.576471,0.439216);
    glBegin(GL_POLYGON);
    glVertex2f(2.15+x,14.6+y);
    glVertex2f(2.15+x,14.7+y);
    glVertex2f(2.35+x,14.7+y);
    glVertex2f(2.35+x,14.6+y);
    glEnd();
    
    //BODY
    //  skin color  glColor3f(0.858824,0.576471,0.439216);
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(2.65+x,13.5+y);
    glVertex2f(2.65+x,14.6+y);
    glVertex2f(1.8+x,14.6+y);
    glVertex2f(1.8+x,13.5+y);
    glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.81+x,13.51+y);
        glVertex2f(1.81+x,14.59+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.81+x,13.51+y);
        glVertex2f(2.64+x,13.51+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.64+x,13.51+y);
        glVertex2f(2.64+x,14.59+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.81+x,14.59+y);
        glVertex2f(2.64+x,14.59+y);
        glEnd();
    
//    //coat lines right
//    glColor3f(1,1,1);
//    glBegin(GL_LINES);
//    glVertex2f(2.85+x, 14.35+y);
//    glVertex2f(2.95+x, 14.2+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.95+x, 14.2+y);
//    glVertex2f(2.6+x, 14.15+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.6+x,14.15+y);
//    glVertex2f(2.65+x,14+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.65+x,14+y);
//    glVertex2f(2.3+x,14+y);
//    glEnd();
//
//
//    ///coat line center
//    glBegin(GL_LINES);
//    glVertex2f(2.325+x,14+y);
//    glVertex2f(2.325+x,13+y);
//    glEnd();
//
//    //coat lines left
//    glColor3f(1,1,1);
//    glBegin(GL_LINES);
//    glVertex2f(1.9+x, 14.35+y);
//    glVertex2f(1.8+x, 14.2+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(1.8+x, 14.2+y);
//    glVertex2f(2.15+x, 14.15+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2.15+x,14.15+y);
//    glVertex2f(2+x,14+y);
//    glEnd();
//    glBegin(GL_LINES);
//    glVertex2f(2+x,14+y);
//    glVertex2f(2.35+x,14+y);
//    glEnd();
//
//    //triangle
//    glColor3f(1,1,1);
//    glBegin(GL_POLYGON);
//    glVertex2f(2.35+x,14+y);
//    glVertex2f(2.15+x,14.35+y);
//    glVertex2f(2.6+x,14.35+y);
//    glVertex2f(2.35+x,14+y);
//    glEnd();
    
    //left hand
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(1.8+x,13.5+y);
    glVertex2f(1.8+x,14.6+y);
    glVertex2f(1.6+x,14.6+y);
    glVertex2f(1.6+x,13.5+y);
    glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.81+x,13.51+y);
        glVertex2f(1.81+x,14.59+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.81+x,13.51+y);
        glVertex2f(1.61+x,13.51+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.64+x,13.51+y);
        glVertex2f(1.61+x,14.59+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(1.81+x,14.59+y);
        glVertex2f(1.61+x,14.59+y);
        glEnd();
    
    //left palm
    glColor3f(0.858824,0.576471,0.439216);
    glBegin(GL_POLYGON);
    glVertex2f(1.6+x,13.5+y);
    glVertex2f(1.6+x,13.45+y);
    glVertex2f(1.8+x,13.45+y);
    glVertex2f(1.8+x,13.5+y);
    glEnd();
    
       
    //right hand
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(2.65+x,13.5+y);
    glVertex2f(2.65+x,14.6+y);
    glVertex2f(2.85+x,14.6+y);
    glVertex2f(2.85+x,13.5+y);
    glEnd();
           
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.84+x,13.51+y);
        glVertex2f(1284+x,14.59+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.84+x,13.51+y);
        glVertex2f(2.64+x,13.51+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.64+x,13.51+y);
        glVertex2f(2.64+x,14.59+y);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex2f(2.84+x,14.59+y);
        glVertex2f(2.64+x,14.59+y);
        glEnd();
            //right palm
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(2.65+x,13.65+y);
            glVertex2f(2.65+x,13.45+y);
            glVertex2f(2.85+x,13.45+y);
            glVertex2f(2.85+x,13.65+y);
            glEnd();
   
        
    
   
    
    //right legs
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(2.25+x,12.5+y);
    glVertex2f(2.25+x,13.5+y);
    glVertex2f(2.65+x,13.5+y);
    glVertex2f(2.65+x,12.5+y);
    glEnd();
    
    //right shoe
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(2.25+x,12.45+y);
    glVertex2f(2.85+x,12.45+y);
    glVertex2f(2.75+x,12.5+y);
    glVertex2f(2.25+x,12.5+y);
    glEnd();
    //left leg
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(1.8+x,12.5+y);
    glVertex2f(1.8+x,13.5+y);
    glVertex2f(2.25+x,13.5+y);
    glVertex2f(2.25+x,12.5+y);
    glEnd();
        
        
        //left palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(1.6+x,13.65+y);
        glVertex2f(1.6+x,13.45+y);
        glVertex2f(1.8+x,13.45+y);
        glVertex2f(1.8+x,13.65+y);
        glEnd();
        
        
        //right palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(2.7+x,13.5+y);
        glVertex2f(2.7+x,13.45+y);
        glVertex2f(2.85+x,13.45+y);
        glVertex2f(2.85+x,13.5+y);
        glEnd();
    
    //left shoe
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,12.5+y);
    glVertex2f(2.25+x,12.5+y);
    glVertex2f(2.25+x,12.45+y);
    glVertex2f(1.6+x,12.45+y);
    glEnd();
    }
   
}

    

void humanDisplay1(float x,float y,int ir,int ib,int ig,int row,float wave){
    //hair
    if(row==2){
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
   
    glVertex2f(2+x,14.45+y);
    glVertex2f(2+x,15+y);
    glVertex2f(1.6+x,15+y);
    glVertex2f(1.6+x,14.45+y);
    
  
    glEnd();
    
    glBegin(GL_POLYGON);
       
       glVertex2f(2.75+x,14.45+y);
       glVertex2f(2.75+x,15+y);
       glVertex2f(3.15+x,15+y);
       glVertex2f(3.15+x,14.45+y);
       glEnd();
   
    glBegin(GL_POLYGON);
    glVertex2f(1.7+x,15+y);
    glVertex2f(1.7+x,15.5+y);
    glVertex2f(3.05+x,15.5+y);
    glVertex2f(3.05+x,15+y);
    glEnd();
    
        //face
       
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(2+x,14.45+y);
        glVertex2f(2+x,15+y);
        glVertex2f(2.75+x,15+y);
        glVertex2f(2.75+x,14.45+y);
        glEnd();
        
     
        //neck
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(2.25+x,14.35+y);
        glVertex2f(2.25+x,14.45+y);
        glVertex2f(2.5+x,14.45+y);
        glVertex2f(2.5+x,14.35+y);
        glEnd();
        
        //BODY
        //  skin color  glColor3f(0.858824,0.576471,0.439216);
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(1.75+x,13+y);
        glVertex2f(1.75+x,14.35+y);
        glVertex2f(3+x,14.35+y);
        glVertex2f(3+x,13+y);
        glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.76+x,13.01+y);
            glVertex2f(1.76+x,14.36+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.76+x,13.01+y);
            glVertex2f(2.99+x,13.01+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(2.99+x,13.01+y);
            glVertex2f(2.99+x,14.36+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.76+x,14.36+y);
            glVertex2f(2.99+x,14.36+y);
            glEnd();
            
        
    //    //coat lines right
    //    glColor3f(1,1,1);
    //    glBegin(GL_LINES);
    //    glVertex2f(2.85+x, 14.35+y);
    //    glVertex2f(2.95+x, 14.2+y);
    //    glEnd();
    //    glBegin(GL_LINES);
    //    glVertex2f(2.95+x, 14.2+y);
    //    glVertex2f(2.6+x, 14.15+y);
    //    glEnd();
    //    glBegin(GL_LINES);
    //    glVertex2f(2.6+x,14.15+y);
    //    glVertex2f(2.65+x,14+y);
    //    glEnd();
    //    glBegin(GL_LINES);
    //    glVertex2f(2.65+x,14+y);
    //    glVertex2f(2.3+x,14+y);
    //    glEnd();
    //
    //
    //    ///coat line center
    //    glBegin(GL_LINES);
    //    glVertex2f(2.325+x,14+y);
    //    glVertex2f(2.325+x,13+y);
    //    glEnd();
    //
    //    //coat lines left
    //    glColor3f(1,1,1);
    //    glBegin(GL_LINES);
    //    glVertex2f(1.9+x, 14.35+y);
    //    glVertex2f(1.8+x, 14.2+y);
    //    glEnd();
    //    glBegin(GL_LINES);
    //    glVertex2f(1.8+x, 14.2+y);
    //    glVertex2f(2.15+x, 14.15+y);
    //    glEnd();
    //    glBegin(GL_LINES);
    //    glVertex2f(2.15+x,14.15+y);
    //    glVertex2f(2+x,14+y);
    //    glEnd();
    //    glBegin(GL_LINES);
    //    glVertex2f(2+x,14+y);
    //    glVertex2f(2.35+x,14+y);
    //    glEnd();
    //
    //    //triangle
    //    glColor3f(1,1,1);
    //    glBegin(GL_POLYGON);
    //    glVertex2f(2.35+x,14+y);
    //    glVertex2f(2.15+x,14.35+y);
    //    glVertex2f(2.6+x,14.35+y);
    //    glVertex2f(2.35+x,14+y);
    //    glEnd();
        
        //left hand
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(1.5+x,13+y);
        glVertex2f(1.5+x,14.35+y);
        glVertex2f(1.75+x,14.35+y);
        glVertex2f(1.75+x,13+y);
        glEnd();
        
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.76+x,13.01+y);
            glVertex2f(1.76+x,14.36+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.76+x,13.01+y);
            glVertex2f(1.51+x,13.01+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.51+x,13.01+y);
            glVertex2f(1.51+x,14.36+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.76+x,14.36+y);
            glVertex2f(1.51+x,14.36+y);
            glEnd();
            
        //left palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(1.5+x,13+y);
        glVertex2f(1.5+x,12.75+y);
        glVertex2f(1.75+x,12.75+y);
        glVertex2f(1.75+x,13+y);
        glEnd();
        
            
        //right hand
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(3+x,13+y);
        glVertex2f(3+x,14.35+y);
        glVertex2f(3.25+x,14.35+y);
        glVertex2f(3.25+x,13+y);
        glEnd();
        
        //right palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(3+x,13+y);
        glVertex2f(3+x,12.75+y);
        glVertex2f(3.25+x,12.75+y);
        glVertex2f(3.25+x,13+y);
        glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(3.24+x,13.01+y);
            glVertex2f(3.24+x,14.36+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(3.24+x,13.01+y);
            glVertex2f(2.99+x,13.01+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(2.99+x,13.01+y);
            glVertex2f(2.99+x,14.36+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(3.24+x,14.36+y);
            glVertex2f(2.99+x,14.36+y);
            glEnd();
         
       
        
        //right legs
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(2.3+x,11.5+y);
        glVertex2f(2.3+x,13+y);
        glVertex2f(3+x,13+y);
        glVertex2f(3+x,11.5+y);
        glEnd();
        
        //right shoe
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(3+x,11.5+y);
        glVertex2f(3.2+x,11.25+y);
        glVertex2f(2.3+x,11.25+y);
        glVertex2f(2.3+x,11.5+y);
        glEnd();
        //left leg
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(1.75+x,11.5+y);
        glVertex2f(1.75+x,13+y);
        glVertex2f(2.3+x,13+y);
        glVertex2f(2.3+x,11.5+y);
        glEnd();
        
        //left shoe
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(1.75+x,11.5+y);
        glVertex2f(1.55+x,11.25+y);
        glVertex2f(2.3+x,11.25+y);
        glVertex2f(2.3+x,11.5+y);
        glEnd();
        }
    
    if(row==4){

        //hair
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
       
        glVertex2f(0.2+x,15.445+y);
        glVertex2f(0.2+x,15.5+y);
        glVertex2f(0.16+x,15.5+y);
        glVertex2f(0.16+x,15.445+y);
        
      
        glEnd();
        
        glBegin(GL_POLYGON);
           
           glVertex2f(0.275+x,15.445+y);
           glVertex2f(0.275+x,15.5+y);
           glVertex2f(0.315+x,15.5+y);
           glVertex2f(0.315+x,15.445+y);
           glEnd();
       
        glBegin(GL_POLYGON);
        glVertex2f(0.17+x,15.5+y);
        glVertex2f(0.17+x,15.55+y);
        glVertex2f(0.305+x,15.55+y);
        glVertex2f(0.305+x,15.5+y);
        glEnd();

        //face
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.2+x,15.445+y);
        glVertex2f(0.2+x,15.5+y);
        glVertex2f(0.275+x,15.5+y);
        glVertex2f(0.275+x,15.445+y);
        glEnd();

        //neck
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.225+x,15.435+y);
        glVertex2f(0.225+x,15.445+y);
        glVertex2f(0.25+x,15.445+y);
        glVertex2f(0.25+x,15.435+y);
        glEnd();

        //BODY
        //  skin color  glColor3f(0.858824,0.576471,0.439216);
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175+x,15.3+y);
        glVertex2f(0.175+x,15.435+y);
        glVertex2f(0.3+x,15.435+y);
        glVertex2f(0.3+x,15.3+y);
        glEnd();

//        //coat lines right
//        glColor3f(1,1,1);
//        glBegin(GL_LINES);
//        glVertex2f(0.285+x, 15.435+y);
//        glVertex2f(0.295+x, 15.42+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.295+x, 15.42+y);
//        glVertex2f(0.26+x, 15.415+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.26+x,15.415+y);
//        glVertex2f(0.265+x,15.4+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.265+x,15.4+y);
//        glVertex2f(0.23+x,15.4+y);
//        glEnd();
//
//
//        ///coat line center
//        glBegin(GL_LINES);
//        glVertex2f(0.2325+x,15.4+y);
//        glVertex2f(0.2325+x,15.3+y);
//        glEnd();
//
//        //coat lines left
//        glColor3f(1,1,1);
//        glBegin(GL_LINES);
//        glVertex2f(0.19+x, 15.435+y);
//        glVertex2f(0.18+x, 15.42+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.18+x, 15.42+y);
//        glVertex2f(0.215+x, 15.415+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.215+x,15.415+y);
//        glVertex2f(0.2+x,15.4+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.2+x,15.4+y);
//        glVertex2f(0.235+x,15.4+y);
//        glEnd();
//
//        //triangle
//        glColor3f(1,1,1);
//        glBegin(GL_POLYGON);
//        glVertex2f(0.235+x,15.4+y);
//        glVertex2f(0.215+x,15.435+y);
//        glVertex2f(0.26+x,15.435+y);
//        glVertex2f(0.35+x,15.4+y);
//        glEnd();

        //left hand
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.15+x,15.3+y);
        glVertex2f(0.15+x,15.435+y);
        glVertex2f(0.175+x,15.435+y);
        glVertex2f(0.175+x,15.3+y);
        glEnd();

        //left palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.15+x,15.3+y);
        glVertex2f(0.15+x,15.275+y);
        glVertex2f(0.175+x,15.275+y);
        glVertex2f(0.175+x,15.3+y);
        glEnd();

        //right hand
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.3+x,15.3+y);
        glVertex2f(0.3+x,15.435+y);
        glVertex2f(0.325+x,15.435+y);
        glVertex2f(0.325+x,15.3+y);
        glEnd();

        //right palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.3+x,15.3+y);
        glVertex2f(0.3+x,15.275+y);
        glVertex2f(0.325+x,15.275+y);
        glVertex2f(0.325+x,15.3+y);
        glEnd();

        //right legs
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.23+x,15.15+y);
        glVertex2f(0.23+x,15.3+y);
        glVertex2f(0.3+x,15.3+y);
        glVertex2f(0.3+x,15.15+y);
        glEnd();

        //right shoe
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.3+x,15.15+y);
        glVertex2f(0.32+x,15.125+y);
        glVertex2f(0.23+x,15.125+y);
        glVertex2f(0.23+x,15.15+y);
        glEnd();
        //left leg
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175+x,15.15+y);
        glVertex2f(0.175+x,15.3+y);
        glVertex2f(0.23+x,15.3+y);
        glVertex2f(0.23+x,15.15+y);
        glEnd();

        //left shoe
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.175+x,15.15+y);
        glVertex2f(0.155+x,15.125+y);
        glVertex2f(0.23+x,15.125+y);
        glVertex2f(0.23+x,15.15+y);
        glEnd();


    }
    
    
        if (row==1){
            glColor3f(0,0,0);
           
            glBegin(GL_POLYGON);
           
            glVertex2f(2+x,14.45+y);
            glVertex2f(2+x,15+y);
            glVertex2f(1.6+x,15+y);
            glVertex2f(1.6+x,14.45+y);
            
          
            glEnd();
            
            
            glBegin(GL_POLYGON);
               
               glVertex2f(2.5+x,14.45+y);
               glVertex2f(2.5+x,15+y);
               glVertex2f(2.9+x,15+y);
               glVertex2f(2.9+x,14.45+y);
               glEnd();
           
            glBegin(GL_POLYGON);
            glVertex2f(1.65+x,15+y);
            glVertex2f(1.65+x,15.5+y);
            glVertex2f(2.85+x,15.5+y);
            glVertex2f(2.85+x,15+y);
            glEnd();
            
            //face
            glColor3f(0.858824,0.576471,0.439216);
            
            glBegin(GL_POLYGON);
            glVertex2f(2+x,14.7+y);
            glVertex2f(2+x,15+y);
            glVertex2f(2.5+x,15+y);
            glVertex2f(2.5+x,14.7+y);
            glEnd();
            
            //neck
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(2.15+x,14.6+y);
            glVertex2f(2.15+x,14.7+y);
            glVertex2f(2.35+x,14.7+y);
            glVertex2f(2.35+x,14.6+y);
            glEnd();
            
            //BODY
            //  skin color  glColor3f(0.858824,0.576471,0.439216);
            glColor3f(0+ib,0+ir,0+ig);
            glBegin(GL_POLYGON);
            glVertex2f(2.65+x,13.5+y);
            glVertex2f(2.65+x,14.6+y);
            glVertex2f(1.8+x,14.6+y);
            glVertex2f(1.8+x,13.5+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.81+x,13.51+y);
            glVertex2f(1.81+x,14.59+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.81+x,13.51+y);
            glVertex2f(2.64+x,13.51+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(2.64+x,13.51+y);
            glVertex2f(2.64+x,14.59+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.81+x,14.59+y);
            glVertex2f(2.64+x,14.59+y);
            glEnd();
            
        //    //coat lines right
        //    glColor3f(1,1,1);
        //    glBegin(GL_LINES);
        //    glVertex2f(2.85+x, 14.35+y);
        //    glVertex2f(2.95+x, 14.2+y);
        //    glEnd();
        //    glBegin(GL_LINES);
        //    glVertex2f(2.95+x, 14.2+y);
        //    glVertex2f(2.6+x, 14.15+y);
        //    glEnd();
        //    glBegin(GL_LINES);
        //    glVertex2f(2.6+x,14.15+y);
        //    glVertex2f(2.65+x,14+y);
        //    glEnd();
        //    glBegin(GL_LINES);
        //    glVertex2f(2.65+x,14+y);
        //    glVertex2f(2.3+x,14+y);
        //    glEnd();
        //
        //
        //    ///coat line center
        //    glBegin(GL_LINES);
        //    glVertex2f(2.325+x,14+y);
        //    glVertex2f(2.325+x,13+y);
        //    glEnd();
        //
        //    //coat lines left
        //    glColor3f(1,1,1);
        //    glBegin(GL_LINES);
        //    glVertex2f(1.9+x, 14.35+y);
        //    glVertex2f(1.8+x, 14.2+y);
        //    glEnd();
        //    glBegin(GL_LINES);
        //    glVertex2f(1.8+x, 14.2+y);
        //    glVertex2f(2.15+x, 14.15+y);
        //    glEnd();
        //    glBegin(GL_LINES);
        //    glVertex2f(2.15+x,14.15+y);
        //    glVertex2f(2+x,14+y);
        //    glEnd();
        //    glBegin(GL_LINES);
        //    glVertex2f(2+x,14+y);
        //    glVertex2f(2.35+x,14+y);
        //    glEnd();
        //
        //    //triangle
        //    glColor3f(1,1,1);
        //    glBegin(GL_POLYGON);
        //    glVertex2f(2.35+x,14+y);
        //    glVertex2f(2.15+x,14.35+y);
        //    glVertex2f(2.6+x,14.35+y);
        //    glVertex2f(2.35+x,14+y);
        //    glEnd();
            
            //left hand
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(1.8+x,13.5+y);
            glVertex2f(1.8+x,14.6+y);
            glVertex2f(1.6+x,14.6+y);
            glVertex2f(1.6+x,13.5+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.81+x,13.51+y);
            glVertex2f(1.81+x,14.59+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.81+x,13.51+y);
            glVertex2f(1.61+x,13.51+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.64+x,13.51+y);
            glVertex2f(1.61+x,14.59+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(1.81+x,14.59+y);
            glVertex2f(1.61+x,14.59+y);
            glEnd();
            
            
            
            //left palm
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(1.6+x,13.5+y);
            glVertex2f(1.6+x,13.45+y);
            glVertex2f(1.8+x,13.45+y);
            glVertex2f(1.8+x,13.5+y);
            glEnd();
            
            //right hand
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(2.65+x,13.5+y);
            glVertex2f(2.65+x,14.6+y);
            glVertex2f(2.85+x,14.6+y);
            glVertex2f(2.85+x,13.5+y);
            glEnd();
            
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(2.84+x,13.51+y);
            glVertex2f(1284+x,14.59+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(2.84+x,13.51+y);
            glVertex2f(2.64+x,13.51+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(2.64+x,13.51+y);
            glVertex2f(2.64+x,14.59+y);
            glEnd();
            
            glColor3f(0,0,0);
            glBegin(GL_LINES);
            glVertex2f(2.84+x,14.59+y);
            glVertex2f(2.64+x,14.59+y);
            glEnd();
                //right palm
                glColor3f(0.858824,0.576471,0.439216);
                glBegin(GL_POLYGON);
                glVertex2f(2.65+x,13.65+y);
                glVertex2f(2.65+x,13.45+y);
                glVertex2f(2.85+x,13.45+y);
                glVertex2f(2.85+x,13.65+y);
                glEnd();
       
            
        
            
            
            //right palm
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(2.65+x,13.65+y);
            glVertex2f(2.65+x,13.45+y);
            glVertex2f(2.85+x,13.45+y);
            glVertex2f(2.85+x,13.65+y);
            glEnd();
            
            //right legs
          glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(2.25+x,12.5+y);
            glVertex2f(2.25+x,13.5+y);
            glVertex2f(2.65+x,13.5+y);
            glVertex2f(2.65+x,12.5+y);
            glEnd();
            
            //right shoe
            glColor3f(0+ib,0+ir,0+ig);
            glBegin(GL_POLYGON);
            glVertex2f(2.25+x,12.45+y);
            glVertex2f(2.85+x,12.45+y);
            glVertex2f(2.75+x,12.5+y);
            glVertex2f(2.25+x,12.5+y);
            glEnd();
            //left leg
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex2f(1.8+x,12.5+y);
            glVertex2f(1.8+x,13.5+y);
            glVertex2f(2.25+x,13.5+y);
            glVertex2f(2.25+x,12.5+y);
            glEnd();
                
                
                //left palm
                glColor3f(0.858824,0.576471,0.439216);
                glBegin(GL_POLYGON);
                glVertex2f(1.6+x,13.65+y);
                glVertex2f(1.6+x,13.45+y);
                glVertex2f(1.8+x,13.45+y);
                glVertex2f(1.8+x,13.65+y);
                glEnd();
                
                
                //right palm
                glColor3f(0.858824,0.576471,0.439216);
                glBegin(GL_POLYGON);
                glVertex2f(2.7+x,13.5+y);
                glVertex2f(2.7+x,13.45+y);
                glVertex2f(2.85+x,13.45+y);
                glVertex2f(2.85+x,13.5+y);
                glEnd();
            
            //left shoe
            glColor3f(0+ib,0+ir,0+ig);
            glBegin(GL_POLYGON);
            glVertex2f(1.75+x,12.5+y);
            glVertex2f(2.25+x,12.5+y);
            glVertex2f(2.25+x,12.45+y);
            glVertex2f(1.6+x,12.45+y);
            glEnd();
            
            glColor3f(0+ib,0+ir,1+ig);
            glBegin(GL_POLYGON);
            glVertex2f(2.65+x,13.5+y);
            glVertex2f(2.8+x,13+y);
            glVertex2f(1.6+x,13+y);
            glVertex2f(1.8+x,13.5+y);
            glEnd();
            
            
        }

   
}



//windows od the ship
void window(float x1, float x2, float y1, float y2){
    glColor3f(0,0,0);
    //glColor3f(1,1,0); //night
    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    glVertex2f(x1,y2);
    glVertex2f(x2,y2);
    glVertex2f(x2,y1);
    glEnd();
    
}
void sun(){
    float theta;
    glColor3f(1,1,0);
    //glColor3f(1,1,1); //night
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++){
        theta = i*3.142/180;
        glVertex2f(15+cos(theta),14+sin(theta));
    }
    glEnd();
}

void ship(int x,int y)
{
    

//    glScaled(40,50,0);//scale of the ship
    
    glColor3f(1,0,0); //base red
    //glColor3f(0.5,0,0); //night
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,2+y);
    glVertex2f(1.8+x,1+y);
    glVertex2f(22+x,1+y);
    glVertex2f(23+x,1.25+y);
    glVertex2f(23.5+x,1.5+y);
    glVertex2f(22.0+x,3.0+y);
    glEnd();
    
    glColor3f(0,0,0); //base black
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,2.0+y);
    glVertex2f(1.5+x,4.0+y);
    glVertex2f(23+x,4.0+y);
    glVertex2f(22+x,2.5+y);
    glVertex2f(20+x,2.0+y);
    glEnd();
    
    glColor3f(1,1,1); //white piece
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(1.5+x,4+y);
    glVertex2f(1.4+x,4.75+y);
    glVertex2f(4.25+x,4.5+y);
    glVertex2f(4.5+x,4+y);
    glEnd();
    
    glColor3f(1,1,1); //white piece_2
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(4.25+x,4+y);
    glVertex2f(4.25+x,4.25+y);
    glVertex2f(21.75+x,4.25+y);
    glVertex2f(21.75+x,4+y);
    glEnd();
    
    glColor3f(1,1,1); //white piece_back
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(23+x,4+y);
    glVertex2f(23+x,4.35+y);
    glVertex2f(22+x,4.35+y);
    glVertex2f(21+x,4+y);
    glEnd();
    
    
    glColor3f(1,1,1); //main_white_piece_1
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(5.75+x,4+y);
    glVertex2f(5.75+x,4.25+y);
    glVertex2f(6+x,4.75+y);
    glVertex2f(20.5+x,4.75+y);
    glVertex2f(20.75+x,4+y);
    glEnd();
    
    glColor3f(1,1,1); //main_white_piece_1
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(6.5+x,4+y);
    glVertex2f(6.5+x,5.25+y);
    glVertex2f(20+x,5.25+y);
    glVertex2f(20+x,4+y);
    glEnd();
    
    glColor3f(1,1,1); //main_white_piece_2
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(6.75+x,4+y);
    glVertex2f(6.75+x,5.75+y);
    glVertex2f(19.75+x,5.75+y);
    glVertex2f(19.75+x,4+y);
    glEnd();
    
    glColor3f(1,1,1); //main_white_piece_2
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(6.75+x,4+y);
    glVertex2f(7.5+x,6+y);
    glVertex2f(11.5+x,6+y);
    glVertex2f(10.75+x,4+y);
    glEnd();
    
    glColor3f(1,1,1); //main_white_piece_3
    //glColor3f(0.658824,0.658824,0.658824); //night
    glBegin(GL_POLYGON);
    glVertex2f(15+x,4+y);
    glVertex2f(15.75+x,6+y);
    glVertex2f(18.5+x,6+y);
    glVertex2f(18.25+x,4+y);
    glEnd();
    
    glColor3f(1,0,0); //pipe_1
    //glColor3f(0.5,0,0); //night
    glBegin(GL_POLYGON);
    glVertex2f(8+x,6+y);
    glVertex2f(8.25+x,7.5+y);
    glVertex2f(8.8+x,7.45+y);
    glVertex2f(8.6+x,6+y);
    glEnd();
    
    glColor3f(0,0,0); //black_pipe_1
    glBegin(GL_POLYGON);
    glVertex2f(8.15+x,7+y);
    glVertex2f(8.25+x,7.5+y);
    glVertex2f(8.8+x,7.45+y);
    glVertex2f(8.75+x,6.95+y);
    glEnd();
    
    
    glColor3f(1,0,0); //pipe_2
    //glColor3f(0.5,0,0); //night
    glBegin(GL_POLYGON);
    glVertex2f(10.7+x,6+y);
    glVertex2f(10.95+x,7.5+y);
    glVertex2f(11.5+x,7.45+y);
    glVertex2f(11.3+x,6+y);
    glEnd();
    
    
    glColor3f(0,0,0); //black_pipe_2
    glBegin(GL_POLYGON);
    glVertex2f(10.85+x,7+y);
    glVertex2f(10.95+x,7.5+y);
    glVertex2f(11.5+x,7.45+y);
    glVertex2f(11.45+x,6.95+y);
    glEnd();
    
    
    glColor3f(1,0,0); //pipe_3
    //glColor3f(0.5,0,0); //night
    glBegin(GL_POLYGON);
    glVertex2f(13.4+x,5.75+y);
    glVertex2f(13.65+x,7.5+y);
    glVertex2f(14.2+x,7.45+y);
    glVertex2f(14.0+x,5.75+y);
    glEnd();
    
    glColor3f(0,0,0); //black_pipe_3
    glBegin(GL_POLYGON);
    glVertex2f(13.55+x,7+y);
    glVertex2f(13.65+x,7.5+y);
    glVertex2f(14.2+x,7.45+y);
    glVertex2f(14.15+x,6.95+y);
    glEnd();
    
    
    glColor3f(1,0,0); //pipe_4
    //glColor3f(0.5,0,0); //night
    glBegin(GL_POLYGON);
    glVertex2f(16.1+x,6+y);
    glVertex2f(16.35+x,7.5+y);
    glVertex2f(16.9+x,7.45+y);
    glVertex2f(16.7+x,6+y);
    glEnd();
    
    glColor3f(0,0,0); //black_pipe_4
    glBegin(GL_POLYGON);
    glVertex2f(16.25+x,7+y);
    glVertex2f(16.35+x,7.5+y);
    glVertex2f(16.9+x,7.45+y);
    glVertex2f(16.85+x,6.95+y);
    glEnd();
    
    //Windows//
    
    //window 1//
   
    window(6.7+x,6.75+x,4.35+y,4.45+y);
    window(6.9+x,6.95+x,4.35+y,4.45+y);
    window(7.4+x,7.45+x,4.35+y,4.45+y);
    window(7.6+x,7.65+x,4.35+y,4.45+y);
    window(7.8+x,7.85+x,4.35+y,4.45+y);
    window(8.3+x,8.35+x,4.35+y,4.45+y);
    window(8.5+x,8.55+x,4.35+y,4.45+y);
    window(8.7+x,8.75+x,4.35+y,4.45+y);
    window(9.2+x,9.25+x,4.35+y,4.45+y);
    window(9.4+x,9.45+x,4.35+y,4.45+y);
    window(9.6+x,9.65+x,4.35+y,4.45+y);
    window(10.1+x,10.15+x,4.35+y,4.45+y);
    window(10.3+x, 10.35+x, 4.35+y, 4.45+y);
    window(10.5+x,10.55+x,4.35+y,4.45+y);
    window(11+x,11.05+x,4.35+y,4.45+y);
    window(11.2+x,11.25+x,4.35+y,4.45+y);
    window(11.4+x,11.45+x,4.35+y,4.45+y);
    window(11.9+x,11.95+x,4.35+y,4.45+y);
    window(12.1+x,12.15+x,4.35+y,4.45+y);
    window(12.3+x,12.35+x,4.35+y,4.45+y);
    window(12.8+x,12.85+x,4.35+y,4.45+y);
    window(13+x,13.05+x,4.35+y,4.45+y);
    window(13.2+x,13.25+x,4.35+y,4.45+y);
    window(13.7+x,13.75+x,4.35+y,4.45+y);
    window(13.9+x,13.95+x,4.35+y,4.45+y);
    window(14.1+x,14.15+x,4.35+y,4.45+y);
    window(14.6+x,14.65+x,4.35+y,4.45+y);
    window(14.8+x,14.85+x,4.35+y,4.45+y);
    window(15.4+x,15.45+x,4.35+y,4.45+y);
    window(15.6+x,15.65+x,4.35+y,4.45+y);
    window(15.8+x,15.85+x,4.35+y,4.45+y);
    window(16+x,16.05+x,4.35+y,4.45+y);
    window(16.5+x,16.55+x,4.35+y,4.45+y);
    window(16.7+x,16.75+x,4.35+y,4.45+y);
    window(16.9+x,16.95+x,4.35+y,4.45+y);
    window(17.2+x,17.25+x,4.35+y,4.45+y);
    window(17.4+x,17.45+x,4.35+y,4.45+y);
    window(17.6+x,17.65+x,4.35+y,4.45+y);
    window(18.2+x,18.3+x,4.35+y,4.5+y);
    window(18.4+x,18.5+x,4.35+y,4.5+y);
    window(18.6+x,18.7,4.35+y,4.5+y);
    window(18.8+x,18.9+x,4.35+y,4.5+y);
    window(19.3+x,19.4+x,4.35+y,4.5+y);
    window(19.5+x,19.6+x,4.35+y,4.5+y);
    window(19.7+x,19.8+x,4.35+y,4.5+y);
    window(19.9+x,20+x,4.35+y,4.5+y);
    window(20.1+x,20.2+x,4.35+y,4.5+y);
    
    //window_2
    
    window(6.6+x,6.8+x,4.85+y,5.1+y);
    window(6.9+x,7.1+x,4.85+y,5.1+y);
    for(float i=7.7;i<=10.1;i+=0.2){
        window(i+x,i+0.1+x,4.85+y,5+y);
    }
    window(10.6+x,10.7+x,4.85+y,5+y);
    window(11.1+x,11.2+x,4.85+y,5+y);
    for(float i=11.6;i<=13;i+=0.2){
        window(i+x,i+0.1+x,4.85+y,5+y);
    }
    for(float i=13.5;i<=15.1;i+=0.2){
        window(i+x,i+0.1+x,4.85+y,5+y);
    }
    for(float i=15.6;i<=17.2;i+=0.2){
        window(i+x,i+0.1+x,4.85+y,5+y);
    }
    for(float i=17.7;i<=18.5;i+=0.2){
        window(i+x,i+0.1+x,4.85+y,5+y);
    }
    window(18.8+x,19+x,4.85+y,5.1+y);
    window(19.1+x,19.4+x,4.85+y,5.1+y);
    window(19.5+x,19.9+x,4.85+y,5.1+y);
   
    //Window3
    window(6.9+x,7.15+x,5.3+y,5.6+y);
    window(7.25+x,7.5+x,5.3+y,5.6+y);
    for(float i=7.75;i<=13.35;i+=0.2){
        window(i+x,i+0.1+x,5.3+y,5.45+y);
    }
    for(float i=13.55;i<19.5;i+=0.35){
        window(i+x,i+0.25+x,5.3+y,5.5+y);
        
    }
    
    glColor3f(1,1,1);
    glRasterPos3f(1.75+x,3.65+y,0);
    char msg7[] = "TITANIC";
    for(int i=0;i<strlen(msg7);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,msg7[i]);
    }
    
}





void water()
{

    glColor3f(0.196078,0.6,0.8);
    glBegin(GL_POLYGON);
    glVertex2f(0,0);
    glVertex2f(0,5);
    glVertex2f(1000,5);
    glVertex2f(1000,0);
    glEnd();
}

// **room1 bedroom **
// angle of rotation for the camera direction
float angle = 0.0f;
// actual vector representing the camera's direction
float lx=0.0f,lz=-1.0f;
// XZ position of the camera
float x=0.0f, z=10.0f;
// the key states. These variables will be zero
//when no key is being presses
float deltaAngle = 0.0f;
float deltaMove = 0;


void drawWalls();
void bed();
void table();
void chairs();
void sofa();
void lights();

void images();

void changeSize(int w, int h) {

    // Prevent a divide by zero, when window is too short
    // (you cant make a window of zero width).
    if (h == 0)
        h = 1;
    float ratio =  w * 1.0 / h;

    // Use the Projection Matrix
    glMatrixMode(GL_PROJECTION);

    // Reset Matrix
    glLoadIdentity();

    // Set the viewport to be the entire window
    glViewport(0, 0, w, h);

    // Set the correct perspective.
    gluPerspective(45.0f, ratio, 0.1f, 100.0f);

    // Get Back to the Modelview
    glMatrixMode(GL_MODELVIEW);
}


void computePos(float deltaMove) {

    x += deltaMove * lx * 0.1f;
    z += deltaMove * lz * 0.1f;
}

void computeDir(float deltaAngle) {

    angle += deltaAngle;
    lx = sin(angle);
    lz = -cos(angle);
}

void renderScene(void) {
    glEnable(GL_DEPTH_TEST);
   
    if (deltaMove)
        computePos(deltaMove);
    if (deltaAngle)
        computeDir(deltaAngle);

    // Clear Color and Depth Buffers
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Reset transformations
    glLoadIdentity();
    // Set the camera
    gluLookAt(    x, 3.0f, z,
                x+lx, 3.0f,  z+lz,
                0.0f, 3.0f,  0.0f);

// Draw ground

    
    drawWalls();

    images();
    bed();
    chairs();
    table();
    lights();
    sofa();
    humanDisplay2(-3,-12,0,0,0,0,-3);
    if(xc==0){
    talks2(-3.5,-9,-3,1.5,0);
    }
    glEnd();
    glutSwapBuffers();
    
}
void drawWalls(){
    //floor
    glBegin(GL_QUADS);
    glColor3f(0.72 ,0.45,0.2);
        glVertex3f(-5.0f, 0.0f, -7.0f);
        glVertex3f(-5.0f, 0.0f,  10.0f);
        glVertex3f( 5.0f, 0.0f,  10.0f);
        glVertex3f( 5.0f, 0.0f, -7.0f);
    glEnd();

    //left side
    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
        glVertex3f(-5.0f, 0.0f, -7.0f);
        glVertex3f(-5.0f, 0.0f,  10.0f);
        glVertex3f( 5.0f, 2500.0f,10.0f);
        glVertex3f( 5.0f, 2500.0f,-7.0f);
    glEnd();
    
    //right side
    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-5.0f, 2500.0f,-7.0f);
    glVertex3f(-5.0f, 2500.0f,10.0f);
    glVertex3f( 5.0f, 0.0f,10.0f);
    glVertex3f( 5.0f, 0.0f,-7.0f);
    glEnd();
    
    //above
    
    glColor3f(0.858824 ,0.576471,0.439216);
    glBegin(GL_QUADS);
    glVertex3f(-5.0f, 5.0,-7.0f);
    glVertex3f(-5.0f, 5.0,10.0f);
    glVertex3f( 5.0f, 5.0,10.0f);
    glVertex3f( 5.0f, 5.0f,-7.0f);
    glEnd();
    
    //SQUARE ABOVE
    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-4.5f, 4.9,-6.0f);
    glVertex3f(-4.5f, 4.9,-4.5f);
    glVertex3f( -2.5f, 4.9,-4.5f);
    glVertex3f( -2.5f, 4.9f,-6.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-2.0f, 4.9,-6.0f);
    glVertex3f(-2.0f, 4.9,-4.5f);
    glVertex3f( 0.0f, 4.9,-4.5f);
    glVertex3f( 0.0f, 4.9f,-6.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.5f, 4.9,-6.0f);
    glVertex3f(0.5f, 4.9,-4.5f);
    glVertex3f(2.5f, 4.9,-4.5f);
    glVertex3f(2.5f, 4.9f,-6.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(3.0f, 4.9,-6.0f);
    glVertex3f(3.0f, 4.9,-4.5f);
    glVertex3f(4.5f, 4.9,-4.5f);
    glVertex3f(4.5f, 4.9f,-6.0f);
    glEnd();
    
    ///SECOND ROW
    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-4.5f, 4.9,-3.0f);
    glVertex3f(-4.5f, 4.9,-0.5f);
    glVertex3f( -2.5f, 4.9,-0.5f);
    glVertex3f( -2.5f, 4.9f,-3.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-2.0f, 4.9,-3.0f);
    glVertex3f(-2.0f, 4.9,-0.5f);
    glVertex3f( 0.0f, 4.9,-0.5f);
    glVertex3f( 0.0f, 4.9f,-3.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.5f, 4.9,-3.0f);
    glVertex3f(0.5f, 4.9,-0.5f);
    glVertex3f(2.5f, 4.9,-0.5f);
    glVertex3f(2.5f, 4.9f,-3.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(3.0f, 4.9,-3.0f);
    glVertex3f(3.0f, 4.9,-0.5f);
    glVertex3f(4.5f, 4.9,-0.5f);
    glVertex3f(4.5f, 4.9f,-3.0f);
    glEnd();
    
    ///SECOND ROW
    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-4.5f, 4.9,1.0f);
    glVertex3f(-4.5f, 4.9,2.5f);
    glVertex3f( -2.5f, 4.9,2.5f);
    glVertex3f( -2.5f, 4.9f,1.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-2.0f, 4.9,1.0f);
    glVertex3f(-2.0f, 4.9,2.5f);
    glVertex3f( 0.0f, 4.9,2.5f);
    glVertex3f( 0.0f, 4.9f,1.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.5f, 4.9,1.0f);
    glVertex3f(0.5f, 4.9,2.5f);
    glVertex3f(2.5f, 4.9,2.5f);
    glVertex3f(2.5f, 4.9f,1.0f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(3.0f, 4.9,1.0f);
    glVertex3f(3.0f, 4.9,2.5f);
    glVertex3f(4.5f, 4.9,2.5f);
    glVertex3f(4.5f, 4.9f,1.0f);
    glEnd();
    
    ///SECOND ROW
    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-4.5f, 4.9,3.5f);
    glVertex3f(-4.5f, 4.9,5.0f);
    glVertex3f( -2.5f, 4.9,5.0f);
    glVertex3f( -2.5f, 4.9f,3.5f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-2.0f, 4.9,3.5f);
    glVertex3f(-2.0f, 4.9,5.0f);
    glVertex3f( 0.0f, 4.9,5.0f);
    glVertex3f( 0.0f, 4.9f,3.5f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.5f, 4.9,3.5f);
    glVertex3f(0.5f, 4.9,5.0f);
    glVertex3f(2.5f, 4.9,5.0f);
    glVertex3f(2.5f, 4.9f,3.5f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(3.0f, 4.9,3.5f);
    glVertex3f(3.0f, 4.9,5.0f);
    glVertex3f(4.5f, 4.9,5.0f);
    glVertex3f(4.5f, 4.9f,3.5f);
    glEnd();
    
    ///SECOND ROW
    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-4.5f, 4.9,6.5f);
    glVertex3f(-4.5f, 4.9,8.0f);
    glVertex3f( -2.5f, 4.9,8.0f);
    glVertex3f( -2.5f, 4.9f,6.5f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-2.0f, 4.9,6.5f);
    glVertex3f(-2.0f, 4.9,8.0f);
    glVertex3f( 0.0f, 4.9,8.0f);
    glVertex3f( 0.0f, 4.9f,6.5f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.5f, 4.9,6.5f);
    glVertex3f(0.5f, 4.9,8.0f);
    glVertex3f(2.5f, 4.9,8.0f);
    glVertex3f(2.5f, 4.9f,6.5f);
    glEnd();

    glColor3f(0.45 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(3.0f, 4.9,6.5f);
    glVertex3f(3.0f, 4.9,8.0f);
    glVertex3f(4.5f, 4.9,8.0f);
    glVertex3f(4.5f, 4.9f,6.5f);
    glEnd();
    
    
    
    

//    for(float i=-6;i>=9;i+3){
//        for(float j=-4.5;j>=4.5;j+2.5){
//            glPushMatrix();
//            glColor3f(0,0,0);
//            glBegin(GL_POLYGON);
//            glVertex3f(j, 4.9,i);
//            glVertex3f(j, 4.9,i+1.5);
//            glVertex3f( j+2.0f, 4.9,i+1.5);
//            glVertex3f( j+2.0f, 4.9f,i);
//            glEnd();
//            glPopMatrix();
//        }
//
//    }
    //center
    glColor3f(0.35 ,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-5.0f, 0.0,-7.0f);
    glVertex3f(-5.0f, 5.0,-7.0f);
    glVertex3f(5.0f, 5.00,-7.0f);
    glVertex3f(5.0f, 0.0,-7.0f);
    glEnd();
    
   
}
void images(){
    //left frame
    glColor3f(0.85,0.53,0.10);
    glBegin(GL_QUADS);
    glVertex3f(-4.9,1,-4.0);
    glVertex3f(-4.9,4,-4.0);
    glVertex3f(-4.9,4,-1.0);
    glVertex3f(-4.9,1,-1.0);
    glEnd();

    //left image
    glColor3f(0.556863, 0.137255,0.137255);
    glBegin(GL_POLYGON);
//    glVertex2f(1.35,6.5);
//    glVertex2f(1.35,12.4);
//    glVertex2f(3.45,12);
//    glVertex2f(3.45,7.25);
    glVertex3f(-4.8,1.4,-3.4);
    glVertex3f(-4.8,3.6,-3.4);
    glVertex3f(-4.8,3.8,-3.2);
    glVertex3f(-4.8,3.8,-1.4);
    glVertex3f(-4.8,3.6,-1.2);
    glVertex3f(-4.8,1.4,-1.2);
    glVertex3f(-4.8,1.2,-1.4);
    glVertex3f(-4.8,1.2,-3.2);
    
    glEnd();
    
    //right frame
    glColor3f(0.85,0.53,0.10);
    glBegin(GL_QUADS);
    glVertex3f(4.9,1,-4.0);
    glVertex3f(4.9,4,-4.0);
    glVertex3f(4.9,4,-1.0);
    glVertex3f(4.9,1,-1.0);
    glEnd();

    //right image
    glColor3f(0.556863, 0.137255,0.137255);
    glBegin(GL_POLYGON);
//    glVertex2f(1.35,6.5);
//    glVertex2f(1.35,12.4);
//    glVertex2f(3.45,12);
//    glVertex2f(3.45,7.25);
    glVertex3f(4.8,1.4,-3.4);
    glVertex3f(4.8,3.6,-3.4);
    glVertex3f(4.8,3.8,-3.2);
    glVertex3f(4.8,3.8,-1.4);
    glVertex3f(4.8,3.6,-1.2);
    glVertex3f(4.8,1.4,-1.2);
    glVertex3f(4.8,1.2,-1.4);
    glVertex3f(4.8,1.2,-3.2);
    glEnd();
    
    //center left frame
    
    glColor3f(0.85,0.53,0.10);
    glBegin(GL_POLYGON);
    glVertex3f(-4.5, 1.0,-6.9f);
    glVertex3f(-4.5f, 4,-6.9f);
    glVertex3f(-1.5f, 4.0,-6.9f);
    glVertex3f(-1.5f, 1.0,-6.9f);
    glEnd();
    
    //canter left image
       glColor3f(0.556863, 0.137255,0.137255);
    glBegin(GL_POLYGON);
    glVertex3f(-4.25, 1.5,-6.8f);
    glVertex3f(-4.25f, 3.5,-6.8f);
    glVertex3f(-4.0f, 3.75,-6.8f);
    glVertex3f(-2.0f, 3.75,-6.8f);
    glVertex3f(-1.75f, 3.5,-6.8f);
    glVertex3f(-1.75f, 1.5,-6.8f);
    glVertex3f(-2.0f, 1.25,-6.8f);
    glVertex3f(-4.0f, 1.25,-6.8f);
    glEnd();
    
    //center right frame
    glColor3f(0.85,0.53,0.10);
    glBegin(GL_POLYGON);
    glVertex3f(4.5, 1.0,-6.9f);
    glVertex3f(4.5f, 4,-6.9f);
    glVertex3f(1.5f, 4.0,-6.9f);
    glVertex3f(1.5f, 1.0,-6.9f);
    glEnd();
    //canter left image
       glColor3f(0.556863, 0.137255,0.137255);
    glBegin(GL_POLYGON);
    glVertex3f(4.25, 1.5,-6.8f);
    glVertex3f(4.25f, 3.5,-6.8f);
    glVertex3f(4.0f, 3.75,-6.8f);
    glVertex3f(2.0f, 3.75,-6.8f);
    glVertex3f(1.75f, 3.5,-6.8f);
    glVertex3f(1.75f, 1.5,-6.8f);
    glVertex3f(2.0f, 1.25,-6.8f);
    glVertex3f(4.0f, 1.25,-6.8f);
    glEnd();
    
    //door
    glColor3f(0.52 ,0.37,0.26);
 glBegin(GL_POLYGON);
 glVertex3f(-1, 0,-6.9f);
 glVertex3f(-1.0f,4,-6.9f);
 glVertex3f(1.0f,4,-6.9f);
 glVertex3f(1.0f,0,-6.9f);
 glEnd();
    
    
}
void bed(){
    //front view
    //front view
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0.25,2);
    glVertex3f(-1.65,0.4,2);
    glVertex3f(-1.7,1.25,2);
    glVertex3f(-1.8,1.5,2);
    glVertex3f(-2.45,1.5,2);
    glVertex3f(-2.45,1.55,2);
    glVertex3f(-2.7,1.7,2);
    glVertex3f(-3.7,1.7,2);
    glVertex3f(-3.95,1.55,2);
    glVertex3f(-3.95,1.5,2);
    glVertex3f(-4.6,1.5,2);
    glVertex3f(-4.7,1.25,2);
    glVertex3f(-4.7,0.25,2);
    glEnd();
    //front legs
    //left leg
    glColor3f(0.52,0.37,0.26);
    glBegin(GL_POLYGON);
    glVertex3f(-4.7,0,2);
    glVertex3f(-4.7,0.25,2);
    glVertex3f(-4.5,0.25,2);
    glVertex3f(-4.5,0,2);

    glEnd();
    
    //right leg
    glColor3f(0.52,0.37,0.26);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0,2);
    glVertex3f(-1.7,0.25,2);
    glVertex3f(-1.9,0.25,2);
    glVertex3f(-1.9,0,2);
    glEnd();
    //side right support
    glColor3f(0.52,0.37,0.26);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0.4,2);
    glVertex3f(-1.7,0.6,2);
    glVertex3f(-1.7,0.6,-3);
    glVertex3f(-1.7,0.4,-3);
    glEnd();
    
    //side left support
    glColor3f(0.52,0.37,0.26);
    glBegin(GL_POLYGON);
    glVertex3f(-4.7,0.4,2);
    glVertex3f(-4.7,0.6,2);
    glVertex3f(-4.7,0.6,-3);
    glVertex3f(-4.7,0.4,-3);
    glEnd();
    //back legs
    //left leg
    glColor3f(0.52,0.37,0.26);
    glBegin(GL_POLYGON);
    glVertex3f(-4.7,0,-3);
    glVertex3f(-4.7,0.25,-3);
    glVertex3f(-4.5,0.25,-3);
    glVertex3f(-4.5,0,-3);

    glEnd();
    
    //right leg
    glColor3f(0.52,0.37,0.26);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0,-3);
    glVertex3f(-1.7,0.25,-3);
    glVertex3f(-1.9,0.25,-3);
    glVertex3f(-1.9,0,-3);
    glEnd();
    //backView
    //front view
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0.25,-3);
    glVertex3f(-1.65,0.4,-3);
    glVertex3f(-1.7,1.25,-3);
    glVertex3f(-1.8,1.5,-3);
    glVertex3f(-2.45,1.5,-3);
    glVertex3f(-2.45,1.55,-3);
    glVertex3f(-2.7,1.7,-3);
    glVertex3f(-3.7,1.7,-3);
    glVertex3f(-3.95,1.55,-3);
    glVertex3f(-3.95,1.5,-3);
    glVertex3f(-4.6,1.5,-3);
    glVertex3f(-4.7,1.25,-3);
    glVertex3f(-4.7,0.25,-3);
    glEnd();
    //bed sheet
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0.6,2);
    glVertex3f(-4.7,0.6,2);
    glVertex3f(-4.7,0.6,-3);
    glVertex3f(-1.7,0.6,-3);
    glEnd();
    //pillow
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0.6,-2.5);
    glVertex3f(-1.7,1.3,-2.9);
    glVertex3f(-4.7,1.3,-2.9);
    glVertex3f(-4.7,0.6,-2.5);
    glEnd();
    
    glColor3f(1.0,1.0,1.0);
    glBegin(GL_POLYGON);
    glVertex3f(-1.7,0.6,-2.9);
    glVertex3f(-1.7,1.3,-2.9);
    glVertex3f(-4.7,1.3,-2.9);
    glVertex3f(-4.7,0.6,-2.9);
    glEnd();
    
}
void table(){
    //side
    //LEFT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0,1.35,2.5);
    glVertex3f(0.5,1.35,3);
    glVertex3f(0.5,1.45,3);
    glVertex3f(0,1.45,2.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(1,1.35,2.5);
    glVertex3f(0.5,1.35,3);
    glVertex3f(0.5,1.45,3);
    glVertex3f(1,1.45,2.5);
    glEnd();
    //RIGHT BEHIND
    glBegin(GL_QUADS);
    glVertex3f(1,1.35,2.5);
    glVertex3f(0.5,1.35,2);
    glVertex3f(0.5,1.45,2);
    glVertex3f(1,1.45,2.5);
    glEnd();
    //LRFT BEHIND
    glBegin(GL_QUADS);
    glVertex3f(0,1.35,2.5);
    glVertex3f(0.5,1.45,2);
    glVertex3f(0.5,1.45,2);
    glVertex3f(0,1.35,2.5);
    glEnd();
    //TOP
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0,1.45,2.5);
    glVertex3f(0.5,1.45,3);
    glVertex3f(1,1.45,2.5);
    glVertex3f(0.5,1.45,2);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0,1.35,2.5);
    glVertex3f(0,0,2);
    glVertex3f(0.08,0,2);
    glVertex3f(0.08,1.35,2.5);
    glEnd();
    
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.45,1.45,3);
    glVertex3f(0.45,0,3);
    glVertex3f(0.55,0,3);
    glVertex3f(0.55,1.45,3);
    glEnd();
    
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1,1.45,2.5);
    glVertex3f(1,0,2);
    glVertex3f(0.92,0,2);
    glVertex3f(0.92,1.45,2.5);
    glEnd();
    
    
}

void chairs(){
    //side
    //LEFT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-0.7,1,2.5);
    glVertex3f(-0.2,1,3);
    glVertex3f(-0.2,1.1,3);
    glVertex3f(-0.7,1.1,2.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.3,1,2.5);
    glVertex3f(-0.2,1,3);
    glVertex3f(-0.2,1.1,3);
    glVertex3f(0.3,1.1,2.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.3,1,2.5);
    glVertex3f(-0.2,1,2);
    glVertex3f(-0.2,1.1,2);
    glVertex3f(0.3,1.1,2.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(-0.7,1,2.5);
    glVertex3f(-0.7,1.1,2.5);
    glVertex3f(-0.2,1.1,2);
    glVertex3f(-0.2,1,2);
    glEnd();
    //TOP
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(-0.7,1.1,2.5);
    glVertex3f(-0.2,1.1,3);
    glVertex3f(0.3,1.1,2.5);
    glVertex3f(-0.2,1.1,2);
    glEnd();
    //LEG LEFT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(-0.7,1,2.5);
    glVertex3f(-0.7,0,2);
    glVertex3f(-0.62,0,2);
    glVertex3f(-0.62,1,2.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(-0.25,1.1,3);
    glVertex3f(-0.25,0,3);
    glVertex3f(-0.15,0,3);
    glVertex3f(-0.15,1.1,3);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(0.3,1,2.5);
    glVertex3f(0.3,0,2);
    glVertex3f(0.22,0,2);
    glVertex3f(0.22,1,2.5);
    glEnd();
    
    //upper part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(-0.7,1.1,2.5);
    glVertex3f(-0.2,1.1,2);
    glVertex3f(-0.2,1.5,2);
    glVertex3f(-0.7,1.5,2.5);
    glEnd();
    
    //upper part of tHe upper prt
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(-0.75,1.5,2.75);
    glVertex3f(-0.15,1.5,2);
    glVertex3f(-0.15,1.6,2);
    glVertex3f(-0.75,1.6,2.75);
    glEnd();
    
    //CHAIR 2
    //LEFT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.65,1,2.5);
    glVertex3f(1.1,1,3);
    glVertex3f(1.1,1.1,3);
    glVertex3f(0.65,1.1,2.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(1.65,1,2.5);
    glVertex3f(1.1,1,3);
    glVertex3f(1.1,1.1,3);
    glVertex3f(1.65,1.1,2.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(1.65,1,2.5);
    glVertex3f(1.1,1,2);
    glVertex3f(1.1,1.1,2);
    glVertex3f(1.65,1.1,2.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0.65,1,2.5);
    glVertex3f(0.65,1.1,2.5);
    glVertex3f(1.1,1.1,2);
    glVertex3f(1.1,1,2);
    glEnd();
    //TOP
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.65,1.1,2.5);
    glVertex3f(1.1,1.1,3);
    glVertex3f(1.65,1.1,2.5);
    glVertex3f(1.1,1.1,2);
    glEnd();
    //LEG LEFT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(0.65,1,2.5);
    glVertex3f(0.65,0,2);
    glVertex3f(0.74,0,2);
    glVertex3f(0.74,1,2.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(1.05,1.1,3);
    glVertex3f(1.05,0,3);
    glVertex3f(1.15,0,3);
    glVertex3f(1.15,1.1,3);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,1,2.5);
    glVertex3f(1.65,0,2);
    glVertex3f(1.57,0,2);
    glVertex3f(1.57,1,2.5);
    glEnd();
    
    //upper part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.65,1.1,2.5);
    glVertex3f(1.1,1.1,2);
    glVertex3f(1.1,1.5,2);
    glVertex3f(1.65,1.5,2.5);
    glEnd();
    
    //upper part of tHe upper prt
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(1.7,1.5,2.75);
    glVertex3f(1.05,1.5,2);
    glVertex3f(1.05,1.6,2);
    glVertex3f(1.7,1.6,2.75);
    glEnd();
    
}

void lights(){
    //center left stand
    
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(-3.1, 2.0,-6.7f);
    glVertex3f(-3.1f, 2.25,-6.7f);
    glVertex3f(-2.95f, 2.25,-6.7f);
    glVertex3f(-2.95f, 2.0,-6.7f);
    glEnd();
    
    //center left light
    glColor3f(0.85,0.85,0.1);
    glBegin(GL_POLYGON);
    glVertex3f(-3.1, 2.25,-6.7f);
    glVertex3f(-3.25f, 2.6,-6.7f);
    glVertex3f(-3.1f, 2.75,-6.7f);
    glVertex3f(-2.95f, 2.75,-6.7f);
    glVertex3f(-2.8f, 2.6,-6.7f);
    glVertex3f(-2.95f, 2.25,-6.7f);
    glEnd();
    
    //center right stand
    
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.1, 2.0,-6.7f);
    glVertex3f(3.1f, 2.25,-6.7f);
    glVertex3f(2.95f, 2.25,-6.7f);
    glVertex3f(2.95f, 2.0,-6.7f);
    glEnd();
    
    //center right light
    glColor3f(0.85,0.85,0.1);
    glBegin(GL_POLYGON);
    glVertex3f(3.1, 2.25,-6.7f);
    glVertex3f(3.25f, 2.6,-6.7f);
    glVertex3f(3.1f, 2.75,-6.7f);
    glVertex3f(2.95f, 2.75,-6.7f);
    glVertex3f(2.8f, 2.6,-6.7f);
    glVertex3f(2.95f, 2.25,-6.7f);
    glEnd();
}

void sofa(){
    //head
    glColor3f(0.52,0.37,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.2,0.75,-6.5);
    glVertex3f(3.3,1.75,-6.5);
    glVertex3f(3.45,2,-6.5);
    glVertex3f(4.3,2,-5.5);
    glVertex3f(4.45,1.75,-5.5);
    glVertex3f(4.55,0.75,-5.5);
    glEnd();
    
    //handle left
    glColor3f(0.65,0.5,0.39);
    glBegin(GL_POLYGON);
    glVertex3f(3.2,0.75,-6.4);
    glVertex3f(2.1,0.75,-5.5);
    glVertex3f(2.1,0.95,-5.5);
    glVertex3f(3.2,0.95,-6.4);
    glEnd();
    
    //handle right
    
    glColor3f(0.65,0.5,0.39);
    glBegin(GL_POLYGON);
    glVertex3f(4.55,0.75,-5.4);
    glVertex3f(3.65,0.75,-4.5);
    glVertex3f(3.65,0.95,-4.5);
    glVertex3f(4.55,0.95,-5.4);
    glEnd();
    
    //seat
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.2,0.75,-6.4);
    glVertex3f(1.9,0.75,-5.5);
    glVertex3f(3.45,0.75,-4.5);
    glVertex3f(4.55,0.75,-5.4);
    glEnd();
    
    //left side part
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(3.2,0.75,-6.4);
    glVertex3f(1.9,0.75,-5.5);
    glVertex3f(1.9,0.1,-5.5);
    glVertex3f(3.2,0.1,-6.4);
    glEnd();
    
    //center part
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,0.75,-5.5);
    glVertex3f(3.45,0.75,-4.5);
    glVertex3f(3.45,0.1,-4.5);
    glVertex3f(1.9,0.1,-5.5);
    glEnd();
    
    //right side part
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_POLYGON);
    glVertex3f(3.45,0.75,-4.5);
    glVertex3f(4.45,0.75,-5.4);
    glVertex3f(4.45,0.1,-5.4);
    glVertex3f(3.45,0.1,-4.5);
    glEnd();
    
    //front left leg
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(1.9,0.1,-5.5);
    glVertex3f(1.9,0.0,-5.5);
    glVertex3f(2.1,0.0,-5.5);
    glVertex3f(2.1,0.1,-5.5);
    
    glEnd();
    
    //front left leg
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(3.25,0.1,-4.7);
    glVertex3f(3.25,0.0,-4.7);
    glVertex3f(3.45,0.0,-4.5);
    glVertex3f(3.45,0.1,-4.5);
    
    glEnd();
    
    //back right leg
   
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,0.1,-5.4);
    glVertex3f(4.25,0.0,-5.4);
    glVertex3f(4.45,0.0,-5.4);
    glVertex3f(4.45,0.1,-5.4);
    
    glEnd();
    
   
}
//************room 2 dining room *****************
// angle of rotation for the camera direction
float angle2 = 0.0f;
// actual vector representing the camera's direction
float lx2=0.0f,lz2=-1.0f;
// XZ position of the camera
float x2=0.0f, z2=10.0f;
// the key states. These variables will be zero
//when no key is being presses
float deltaAngle2 = 0.0f;
float deltaMove2 = 0;

void computePos2(float deltaMove2) {

    x2 += deltaMove2 * lx2 * 0.1f;
    z2 += deltaMove2 * lz2 * 0.1f;
}

void computeDir2(float deltaAngle2) {

    angle2 += deltaAngle2;
    lx2 = sin(angle2);
    lz2 = -cos(angle2);
}

void renderScene2(void) {
    glEnable(GL_DEPTH_TEST);
    if (deltaMove2)
        computePos2(deltaMove2);
    if (deltaAngle2)
        computeDir2(deltaAngle2);

    // Clear Color and Depth Buffers
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    // Reset transformations
    glLoadIdentity();
    // Set the camera
    gluLookAt(    x2, 3.0f, z2,
                x2+lx2, 3.0f,  z2+lz2,
                0.0f, 3.0f,  0.0f);


    drawWalls2();
    windows2();
    pilliars2();
    humanDisplay2(-5,-12,0,0,0,0,0);
    if(xc==0){
    talks2(-5.5,-9,0,0,0);
    }
    table2();
    chair2();
    fan2();

   

    glutSwapBuffers();
}
float angleff = 0.0;
void fan2(){
    float theta;
    glPushMatrix();
    glColor3f(0,0,0);
    glRotatef(angleff,0,7,-7);
    glBegin(GL_POLYGON);
    glVertex3f(0.0,7,-8);
    glVertex3f(0.25,7.0,-8);
    glVertex3f(0.25,8,-8);
    glVertex3f(0,8,-8);
    glEnd();
    glPopMatrix();
    glBegin(GL_POLYGON);
    glVertex3f(0.0,7,-8);
    glVertex3f(0.15,7.0,-8);
    glVertex3f(0.15,8,-8);
    glVertex3f(0,8,-8);
    glEnd();
    
    angleff += 1000.1;
    
//    glBegin(GL_POLYGON);
//    glColor3f(1,1,0);
//    for(int i=0;i<360;i++){
//        theta = i*3.142/180;
//        glVertex3f(0+cos(theta),8+sin(theta),-8);
//    }
//    glEnd();
    
}
void drawWalls2(){
    //draw left Side walls
    //left side
//    glColor3f(0.45 ,0.16,0.14);
//    glBegin(GL_QUADS);
//        glVertex3f(-4.0f, 0.0f, -20.0f);
//        glVertex3f(-4.0f, 0.0f,  10.0f);
//        glVertex3f( 4.0f, 2500.0f,10.0f);
//        glVertex3f( 4.0f, 2500.0f,-20.0f);
//    glEnd();
    
    // Draw ground

    //floor
    glBegin(GL_QUADS);
    glColor3f(0.556863 ,0.137255,0.137255);
        glVertex3f(0.0f, 0.0f, -10.0f);
        glVertex3f(-70.0f, 0.0f,  100.0f);
        glVertex3f( 70.0f, 0.0f,  10.0f);
        glVertex3f( 0.0f, 0.0f, -100.0f);
    glEnd();
    //left side
    glColor3f(0.958824 ,0.958824,0.958824);
    glBegin(GL_QUADS);
        glVertex3f(-0.0f, 0.0f, -10.0f);
        glVertex3f(-30.0f, 0.0f,  10.0f);
        glVertex3f( 30.0f, 2500.0f,10.0f);
        glVertex3f( 30.0f, 2500.0f,-10.0f);
    glEnd();
    
    //left grey bottom
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(0.0f, 0.5f, -9.9f);
        glVertex3f(-30.0f, 0.5f,  10.1f);
        glVertex3f(-30.0f, 1.0f,10.1f);
        glVertex3f(0.0f, 1.0f,-9.9f);
    glEnd();
    
    //left grey above
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(0.0f, 8.75f, -9.9f);
        glVertex3f(-30.0f, 8.75f,  10.1f);
        glVertex3f(-30.0f, 9.25f,10.1f);
        glVertex3f(0.0f, 9.25f,-9.9f);
    glEnd();
    //right side
    
    glColor3f(1 ,1,1);
    glBegin(GL_QUADS);
        glVertex3f(0.0f, 0.0f, -10.0f);
        glVertex3f(30.0f, 0.0f,  10.0f);
        glVertex3f(-30.0f, 2500.0f,10.0f);
        glVertex3f(-30.0f, 2500.0f,-10.0f);
    glEnd();
    
    //right grey bottom
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(0.0f, 0.5f, -9.9f);
        glVertex3f(30.0f, 0.5f,  10.1f);
        glVertex3f(30.0f, 1.0f,10.1f);
        glVertex3f(0.0f, 1.0f,-9.9f);
    glEnd();
    
    //right grey above
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(-0.1f, 8.75f, -9.9f);
        glVertex3f(30.0f, 8.75f,  10.1f);
        glVertex3f(30.0f, 9.25f,10.1f);
        glVertex3f(-0.1f, 9.25f,-9.9f);
    glEnd();
    //top
    glBegin(GL_QUADS);
    glColor3f(0.858824 ,0.858824,0.858824);
        glVertex3f(0.0f, 10.0f, -10.0f);
        glVertex3f(-30.0f, 10.0f,  10.0f);
        glVertex3f( 30.0f, 10.0f,  10.0f);
        glVertex3f( 0.0f, 10.0f, -10.0f);
    glEnd();
}
void windows2(){
    //right side
    //right frame 1
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(3.0f, 2.0f, -7.75f);
        glVertex3f(5.0f, 2.0f,  -6.0f);
        glVertex3f(5.0f, 8.0f, -6.0f);
        glVertex3f(3.0f, 8.0f,-7.75f);
    glEnd();
    //right image 1
    glColor3f(0.678431f,0.917647f,0.917647f);
    glBegin(GL_QUADS);
        glVertex3f(3.25f, 2.5f, -6.75f);
        glVertex3f(4.5f, 2.5f,  -6.0f);
        glVertex3f(4.5f, 7.5f, -6.0f);
        glVertex3f(3.25f, 7.5f,-6.75f);
    glEnd();
    //right frame 2
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(5.75f, 2.0f, -5.75f);
        glVertex3f(7.75f, 2.0f,  -4.0f);
        glVertex3f(7.75f, 8.0f, -4.0f);
        glVertex3f(5.75f, 8.0f,-5.75f);
    glEnd();
    
    //right image 2
    glColor3f(0.678431f,0.917647f,0.917647f);
    glBegin(GL_QUADS);
        glVertex3f(5.75f, 2.5f, -4.75f);
        glVertex3f(7.25f, 2.5f,  -4.0f);
        glVertex3f(7.25f, 7.5f, -4.0f);
        glVertex3f(5.75f, 7.5f,-4.75f);
    glEnd();
    
    //left side
    //left frame 1
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(-3.0f, 2.0f, -7.75f);
        glVertex3f(-5.0f, 2.0f,  -6.0f);
        glVertex3f(-5.0f, 8.0f, -6.0f);
        glVertex3f(-3.0f, 8.0f,-7.75f);
    glEnd();
    //left image 1
    glColor3f(0.678431f,0.917647f,0.917647f);
    glBegin(GL_QUADS);
        glVertex3f(-3.25f, 2.5f, -6.75f);
        glVertex3f(-4.5f, 2.5f,  -6.0f);
        glVertex3f(-4.5f, 7.5f, -6.0f);
        glVertex3f(-3.25f, 7.5f,-6.75f);
    glEnd();
    //left frame 2
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
        glVertex3f(-5.75f, 2.0f, -5.75f);
        glVertex3f(-7.75f, 2.0f,  -4.0f);
        glVertex3f(-7.75f, 8.0f, -4.0f);
        glVertex3f(-5.75f, 8.0f,-5.75f);
    glEnd();
    
    //left image 2
    glColor3f(0.678431f,0.917647f,0.917647f);
    glBegin(GL_QUADS);
        glVertex3f(-5.75f, 2.5f, -4.75f);
        glVertex3f(-7.25f, 2.5f,  -4.0f);
        glVertex3f(-7.25f, 7.5f, -4.0f);
        glVertex3f(-5.75f, 7.5f,-4.75f);
    glEnd();
}

void pilliars2(){
    
    //right pilliar1
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(0.5f, 1.0f, -7.75f);
    glVertex3f(2.5f, 1.0f,-7.0f);
    glVertex3f(2.0f, 1.5f,-7.0f);
    glVertex3f(1.0f, 1.5f,-7.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(1.0f, 1.5f, -7.75f);
    glVertex3f(2.0f, 1.5f,-7.0f);
    glVertex3f(2.0f, 8.0f,-7.0f);
    glVertex3f(1.0f, 8.0f,-7.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(1.0f, 8.0f, -7.75f);
    glVertex3f(0.5f, 8.5f,-7.75f);
    glVertex3f(2.5f, 8.5f,-7.0f);
    glVertex3f(2.0f, 8.0f,-7.0f);
    glEnd();
    
    //right pilliar2
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(8.0f, 1.0f, -3.75f);
    glVertex3f(10.0f, 1.0f,-3.0f);
    glVertex3f(9.5f, 1.5f,-3.0f);
    glVertex3f(8.5f, 1.5f,-3.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(8.5f, 1.5f, -3.75f);
    glVertex3f(9.5f, 1.5f,-3.0f);
    glVertex3f(9.5f, 8.0f,-3.0f);
    glVertex3f(8.5f, 8.0f,-3.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(8.0f, 8.75f, -3.75f);
    glVertex3f(10.0f, 8.75f,-3.0f);
    glVertex3f(9.5f, 8.0f,-3.0f);
    glVertex3f(8.5f, 8.0f,-3.75f);
    glEnd();
    
    //left pilliar1
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(-0.5f, 1.0f, -7.75f);
    glVertex3f(-2.5f, 1.0f,-7.0f);
    glVertex3f(-2.0f, 1.5f,-7.0f);
    glVertex3f(-1.0f, 1.5f,-7.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(-1.0f, 1.5f, -7.75f);
    glVertex3f(-2.0f, 1.5f,-7.0f);
    glVertex3f(-2.0f, 8.0f,-7.0f);
    glVertex3f(-1.0f, 8.0f,-7.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(-1.0f, 8.0f, -7.75f);
    glVertex3f(-0.5f, 8.5f,-7.75f);
    glVertex3f(-2.5f, 8.5f,-7.0f);
    glVertex3f(-2.0f, 8.0f,-7.0f);
    glEnd();
    
    //left pilliar2
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(-8.0f, 1.0f, -3.75f);
    glVertex3f(-10.0f, 1.0f,-3.0f);
    glVertex3f(-9.5f, 1.5f,-3.0f);
    glVertex3f(-8.5f, 1.5f,-3.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(-8.5f, 1.5f, -3.75f);
    glVertex3f(-9.5f, 1.5f,-3.0f);
    glVertex3f(-9.5f, 8.0f,-3.0f);
    glVertex3f(-8.5f, 8.0f,-3.75f);
    glEnd();
    
    glColor3f(0.858824 ,0.858824,0.858824);
    glBegin(GL_QUADS);
    glVertex3f(-8.0f, 8.75f, -3.75f);
    glVertex3f(-10.0f, 8.75f,-3.0f);
    glVertex3f(-9.5f, 8.0f,-3.0f);
    glVertex3f(-8.5f, 8.0f,-3.75f);
    glEnd();
    
    
}

void table2(){
        //table 2
        //side
        //LEFT FRONT
        glColor3f(0.35,0.16,0.14);
        glBegin(GL_QUADS);
        glVertex3f(4,1.05,3.5);
        glVertex3f(6.5,1.05,6.5);
        glVertex3f(6.5,1.45,6.5);
        glVertex3f(4,1.45,3.5);
        glEnd();
        //RIGHT FRONT
        glColor3f(0.35,0.16,0.14);
        glBegin(GL_QUADS);
        glVertex3f(9,1.05,3.5);
        glVertex3f(6.5,1.05,6.5);
        glVertex3f(6.5,1.45,6.5);
        glVertex3f(9,1.45,3.5);
        glEnd();
        //RIGHT BEHIND
        glBegin(GL_QUADS);
        glVertex3f(9,1.05,3.5);
        glVertex3f(6.5,1.05,0.5);
        glVertex3f(6.5,1.45,0.5);
        glVertex3f(9,1.45,3.5);
        glEnd();
        //LRFT BEHIND
        glBegin(GL_QUADS);
        glVertex3f(4.0,1.05,3.5);
        glVertex3f(6.5,1.05,0.5);
        glVertex3f(6.5,1.45,0.5);
        glVertex3f(4.0,1.45,3.5);
        glEnd();
        //TOP
        glColor3f(0.36,0.25,0.2);
        glBegin(GL_POLYGON);
        glVertex3f(4,1.45,3.5);
        glVertex3f(6.5,1.45,6.5);
        glVertex3f(9,1.45,3.5);
        glVertex3f(6.5,1.45,0.5);
        glEnd();
        //LEG LEFT
        glColor3f(0.36,0.25,0.2);
        glBegin(GL_POLYGON);
        glVertex3f(4,1.35,3.5);
        glVertex3f(4,0,3.5);
        glVertex3f(4.28,0,3.5);
        glVertex3f(4.28,1.35,3.5);
        glEnd();
        
        //LEG center
        glColor3f(0.36,0.25,0.2);
        glBegin(GL_POLYGON);
        glVertex3f(6.35,1.45,6.5);
        glVertex3f(6.35,0,6.5);
        glVertex3f(6.65,0,6.5);
        glVertex3f(6.65,1.45,6.5);
        glEnd();
        
        //LEG right
        glColor3f(0.36,0.25,0.2);
        glBegin(GL_POLYGON);
        glVertex3f(9,1.45,3.5);
        glVertex3f(9,0,3.5);
        glVertex3f(8.72,0,3.5);
        glVertex3f(8.72,1.45,3.5);
        glEnd();
    
    //LEG center
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(6.35,1.45,0.5);
    glVertex3f(6.35,0,0.5);
    glVertex3f(6.65,0,0.5);
    glVertex3f(6.65,1.45,0.5);
    glEnd();
        
    //table 1
    //side
    //LEFT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(0,1.05,-2.5);
    glVertex3f(2.5,1.05,0.5);
    glVertex3f(2.5,1.45,0.5);
    glVertex3f(0,1.45,-2.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.35,0.16,0.14);
    glBegin(GL_QUADS);
    glVertex3f(5,1.05,-2.5);
    glVertex3f(2.5,1.05,0.5);
    glVertex3f(2.5,1.45,0.5);
    glVertex3f(5,1.45,-2.5);
    glEnd();
    //RIGHT BEHIND
    glBegin(GL_QUADS);
    glVertex3f(5,1.05,-2.5);
    glVertex3f(2.5,1.05,-4.5);
    glVertex3f(2.5,1.45,-4.5);
    glVertex3f(5,1.45,-2.5);
    glEnd();
    //LRFT BEHIND
    glBegin(GL_QUADS);
    glVertex3f(0,1.05,-2.5);
    glVertex3f(2.5,1.05,-4.5);
    glVertex3f(2.5,1.45,-4.5);
    glVertex3f(0,1.45,-2.5);
    glEnd();
    //TOP
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0,1.45,-2.5);
    glVertex3f(2.5,1.45,0.5);
    glVertex3f(5,1.45,-2.5);
    glVertex3f(2.5,1.45,-4.5);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0,1.35,-2.5);
    glVertex3f(0,0,-2.5);
    glVertex3f(0.28,0,-2.5);
    glVertex3f(0.28,1.35,-2.5);
    glEnd();
    
    //LEG center
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(2.35,1.45,0.5);
    glVertex3f(2.35,0,0.5);
    glVertex3f(2.65,0,0.5);
    glVertex3f(2.65,1.45,0.5);
    glEnd();
    
    //LEG right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5,1.45,-2.5);
    glVertex3f(5,0,-2.5);
    glVertex3f(4.72,0,-2.5);
    glVertex3f(4.72,1.45,-2.5);
    glEnd();
    
    //LEG center
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(2.35,1.45,-4.5);
    glVertex3f(2.35,0,-4.5);
    glVertex3f(2.65,0,-4.5);
    glVertex3f(2.65,1.45,-4.5);
    glEnd();
    
    
    
        
    
}

void chair2(){
    //chair1
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(0.4,0.9,0.5);
    glVertex3f(1.3,0.9,1);
    glVertex3f(1.3,1.1,1);
    glVertex3f(0.4,1.1,0.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(2,0.9,0.5);
    glVertex3f(1.3,0.9,1);
    glVertex3f(1.3,1.1,1);
    glVertex3f(2,1.1,0.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(2,0.9,0.5);
    glVertex3f(1.3,0.9,0);
    glVertex3f(1.3,1.1,0);
    glVertex3f(2,1.1,0.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(0.4,0.9,0.5);
    glVertex3f(0.4,1.1,0.5);
    glVertex3f(1.3,1.1,0);
    glVertex3f(1.3,0.9,0);
    glEnd();
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.1,0.5);
    glVertex3f(1.3,1.1,1);
    glVertex3f(2,1.1,0.5);
    glVertex3f(1.3,1.1,0);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1,0.5);
    glVertex3f(0.4,0,0.5);
    glVertex3f(0.48,0,0.5);
    glVertex3f(0.48,1,0.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,1);
    glVertex3f(1.25,0,1);
    glVertex3f(1.35,0,1);
    glVertex3f(1.35,1.1,1);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(2,1,0.5);
    glVertex3f(2,0,0.5);
    glVertex3f(1.92,0,0.5);
    glVertex3f(1.92,1,0.5);
    glEnd();
    
    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,0);
    glVertex3f(1.25,0,0);
    glVertex3f(1.35,0,0);
    glVertex3f(1.35,1.1,0);
    glEnd();
    
    
    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,1);
    glVertex3f(1.35,1.1,1);
    glVertex3f(1.35,1.5,1);
    glVertex3f(1.25,1.5,1);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.5,1);
    glVertex3f(1.35,1.5,1);
    glVertex3f(2,1.5,0.5);
    glVertex3f(1.92,1.5,0.5);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(2,1.1,0.5);
    glVertex3f(1.92,1.1,0.5);
    glVertex3f(1.92,1.5,0.5);
    glVertex3f(2,1.5,0.5);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.1,0.5);
    glVertex3f(0.48,1.1,0.5);
    glVertex3f(0.48,1.5,0.5);
    glVertex3f(0.4,1.5,0.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.5,0.5);
    glVertex3f(0.48,1.5,0.5);
    glVertex3f(1.25,1.5,0);
    glVertex3f(1.35,1.5,0);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,0);
    glVertex3f(1.35,1.1,0);
    glVertex3f(1.35,1.5,0);
    glVertex3f(1.25,1.5,0);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.5,0.5);
    glVertex3f(1.35,1.5,1);
    glVertex3f(1.35,2,1);
    glVertex3f(1.325,2.05,1);
    glVertex3f(0.375,2.05,0.5);
    glVertex3f(0.4,2,0.5);
    glEnd();
    
    //chair 2
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(-0.4,0.9,-3.5);
    glVertex3f(0.5,0.9,-3);
    glVertex3f(0.5,1.1,-3);
    glVertex3f(-0.4,1.1,-3.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(1.2,0.9,-3.5);
    glVertex3f(0.5,0.9,-3);
    glVertex3f(0.5,1.1,-3);
    glVertex3f(1.2,1.1,-3.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(1.2,0.9,-3.5);
    glVertex3f(0.5,0.9,-4);
    glVertex3f(0.5,1.1,-4);
    glVertex3f(1.2,1.1,-3.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(-0.4,0.9,-3.5);
    glVertex3f(-0.4,1.1,-3.5);
    glVertex3f(0.5,1.1,-4);
    glVertex3f(0.5,0.9,-4);
    glEnd();
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4,1.1,-3.5);
    glVertex3f(0.5,1.1,-3);
    glVertex3f(1.2,1.1,-3.5);
    glVertex3f(0.5,1.1,-4);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4,1,-3.5);
    glVertex3f(-0.4,0,-3.5);
    glVertex3f(-0.32,0,-3.5);
    glVertex3f(-0.32,1,-3.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.45,1.1,-3);
    glVertex3f(0.45,0,-3);
    glVertex3f(0.55,0,-3);
    glVertex3f(0.55,1.1,-3);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.2,1,-3.5);
    glVertex3f(1.2,0,-3.5);
    glVertex3f(1.22,0,-3.5);
    glVertex3f(1.22,1,-3.5);
    glEnd();
    
    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.45,1.1,-4);
    glVertex3f(0.45,0,-4);
    glVertex3f(0.55,0,-4);
    glVertex3f(0.55,1.1,-4);
    glEnd();
    
    
    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4,1.1,-3.5);
    glVertex3f(-0.3,1.1,-3.5);
    glVertex3f(-0.3,1.5,-3.5);
    glVertex3f(-0.4,1.5,-3.5);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4,1.5,-3.5);
    glVertex3f(-0.3,1.5,-3.5);
    glVertex3f(0.45,1.5,-3);
    glVertex3f(0.55,1.5,-3);
    glEnd();
    
    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.55,1.1,-3);
    glVertex3f(0.45,1.1,-3);
    glVertex3f(0.45,1.5,-3);
    glVertex3f(0.55,1.5,-3);
    glEnd();
    
    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.45,1.1,-4);
    glVertex3f(0.55,1.1,-4);
    glVertex3f(0.55,1.5,-4);
    glVertex3f(0.45,1.5,-4);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.45,1.5,-4);
    glVertex3f(0.55,1.5,-4);
    glVertex3f(1.2,1.5,-3.5);
    glVertex3f(1.22,1.5,-3.5);
    glEnd();
    
    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.22,1.1,-3.5);
    glVertex3f(1.2,1.1,-3.5);
    glVertex3f(1.2,1.5,-3.5);
    glVertex3f(1.22,1.5,-3.5);
    glEnd();
    
    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(-0.4,1.5,-3.5);
    glVertex3f(0.5,1.5,-4);
    glVertex3f(0.5,2,-4);
    glVertex3f(0.525,2.05,-4);
    glVertex3f(-0.375,2.05,-3.5);
    glVertex3f(-0.4,2,-3.5);
    glEnd();
    
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(0.4,0.9,0.5);
    glVertex3f(1.3,0.9,1);
    glVertex3f(1.3,1.1,1);
    glVertex3f(0.4,1.1,0.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(2,0.9,0.5);
    glVertex3f(1.3,0.9,1);
    glVertex3f(1.3,1.1,1);
    glVertex3f(2,1.1,0.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(2,0.9,0.5);
    glVertex3f(1.3,0.9,0);
    glVertex3f(1.3,1.1,0);
    glVertex3f(2,1.1,0.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(0.4,0.9,0.5);
    glVertex3f(0.4,1.1,0.5);
    glVertex3f(1.3,1.1,0);
    glVertex3f(1.3,0.9,0);
    glEnd();
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.1,0.5);
    glVertex3f(1.3,1.1,1);
    glVertex3f(2,1.1,0.5);
    glVertex3f(1.3,1.1,0);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1,0.5);
    glVertex3f(0.4,0,0.5);
    glVertex3f(0.48,0,0.5);
    glVertex3f(0.48,1,0.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,1);
    glVertex3f(1.25,0,1);
    glVertex3f(1.35,0,1);
    glVertex3f(1.35,1.1,1);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(2,1,0.5);
    glVertex3f(2,0,0.5);
    glVertex3f(1.92,0,0.5);
    glVertex3f(1.92,1,0.5);
    glEnd();
    
    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,0);
    glVertex3f(1.25,0,0);
    glVertex3f(1.35,0,0);
    glVertex3f(1.35,1.1,0);
    glEnd();
    
    
    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,1);
    glVertex3f(1.35,1.1,1);
    glVertex3f(1.35,1.5,1);
    glVertex3f(1.25,1.5,1);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.5,1);
    glVertex3f(1.35,1.5,1);
    glVertex3f(2,1.5,0.5);
    glVertex3f(1.92,1.5,0.5);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(2,1.1,0.5);
    glVertex3f(1.92,1.1,0.5);
    glVertex3f(1.92,1.5,0.5);
    glVertex3f(2,1.5,0.5);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.1,0.5);
    glVertex3f(0.48,1.1,0.5);
    glVertex3f(0.48,1.5,0.5);
    glVertex3f(0.4,1.5,0.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.5,0.5);
    glVertex3f(0.48,1.5,0.5);
    glVertex3f(1.25,1.5,0);
    glVertex3f(1.35,1.5,0);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(1.25,1.1,0);
    glVertex3f(1.35,1.1,0);
    glVertex3f(1.35,1.5,0);
    glVertex3f(1.25,1.5,0);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(0.4,1.5,0.5);
    glVertex3f(1.35,1.5,1);
    glVertex3f(1.35,2,1);
    glVertex3f(1.325,2.05,1);
    glVertex3f(0.375,2.05,0.5);
    glVertex3f(0.4,2,0.5);
    glEnd();
    
    //chair3
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(3.4,0.9,-5.5);
    glVertex3f(4.3,0.9,-5);
    glVertex3f(4.3,1.1,-5);
    glVertex3f(3.4,1.1,-5.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(5,0.9,-5.5);
    glVertex3f(4.3,0.9,-5);
    glVertex3f(4.3,1.1,-5);
    glVertex3f(5,1.1,-5.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(5,0.9,-5.5);
    glVertex3f(4.3,0.9,-6);
    glVertex3f(4.3,1.1,-6);
    glVertex3f(5,1.1,-5.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(3.4,0.9,-5.5);
    glVertex3f(3.4,1.1,-5.5);
    glVertex3f(4.3,1.1,-6);
    glVertex3f(4.3,0.9,-6);
    glEnd();
   
    
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1,-5.5);
    glVertex3f(3.4,0,-5.5);
    glVertex3f(3.48,0,-5.5);
    glVertex3f(3.48,1,-5.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,-5);
    glVertex3f(4.25,0,-5);
    glVertex3f(4.35,0,-5);
    glVertex3f(4.35,1.1,-5);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5,1,-5.5);
    glVertex3f(5,0,-5.5);
    glVertex3f(4.92,0,-5.5);
    glVertex3f(4.92,1,-5.5);
    glEnd();
    
    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,-6);
    glVertex3f(4.25,0,-6);
    glVertex3f(4.35,0,-6);
    glVertex3f(4.35,1.1,-6);
    glEnd();
    
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1.1,-5.5);
    glVertex3f(4.3,1.1,-5);
    glVertex3f(5,1.1,-5.5);
    glVertex3f(4.3,1.1,-6);
    glEnd();
    
    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,-5);
    glVertex3f(4.35,1.1,-5);
    glVertex3f(4.35,1.5,-5);
    glVertex3f(4.25,1.5,-5);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.5,-5);
    glVertex3f(4.35,1.5,-5);
    glVertex3f(5,1.5,-5.5);
    glVertex3f(4.92,1.5,-5.5);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5,1.1,-5.5);
    glVertex3f(4.92,1.1,-5.5);
    glVertex3f(4.92,1.5,-5.5);
    glVertex3f(5,1.5,-5.5);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1.1,-5.5);
    glVertex3f(3.48,1.1,-5.5);
    glVertex3f(3.48,1.5,-5.5);
    glVertex3f(3.4,1.5,-5.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1.5,-5.5);
    glVertex3f(3.48,1.5,-5.5);
    glVertex3f(4.25,1.5,-6);
    glVertex3f(4.35,1.5,-6);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,-6);
    glVertex3f(4.35,1.1,-6);
    glVertex3f(4.35,1.5,-6);
    glVertex3f(4.25,1.5,-6);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(5,1.5,-5.5);
    glVertex3f(4.35,1.5,-6);
    glVertex3f(4.35,2,-6);
    glVertex3f(4.325,2.05,-6);
    glVertex3f(4.975,2.05,-5.5);
    glVertex3f(5,2,-5.5);
    glEnd();
    
    //chair 4
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(4,0.9,-0.5);
    glVertex3f(4.7,0.9,-0);
    glVertex3f(4.7,1.1,-0);
    glVertex3f(4,1.1,-0.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(5.4,0.9,-0.5);
    glVertex3f(4.7,0.9,0);
    glVertex3f(4.7,1.1,0);
    glVertex3f(5.4,1.1,-0.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(5.4,0.9,-0.5);
    glVertex3f(4.7,0.9,-1);
    glVertex3f(4.7,1.1,-1);
    glVertex3f(5.4,1.1,-0.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(4,0.9,-0.5);
    glVertex3f(4,1.1,-0.5);
    glVertex3f(4.7,1.1,-1);
    glVertex3f(4.7,0.9,-1);
    glEnd();
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(4,1.1,-0.5);
    glVertex3f(4.7,1.1,0);
    glVertex3f(5.4,1.1,-0.5);
    glVertex3f(4.7,1.1,-1);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4,1,-0.5);
    glVertex3f(4,0,-0.5);
    glVertex3f(4.12,0,-0.5);
    glVertex3f(4.12,1,-0.5);
    glEnd();

    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.65,1.1,0);
    glVertex3f(4.65,0,0);
    glVertex3f(4.75,0,0);
    glVertex3f(4.75,1.1,0);
    glEnd();

    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5.4,1,-0.5);
    glVertex3f(5.4,0,-0.5);
    glVertex3f(5.38,0,-0.5);
    glVertex3f(5.38,1,-0.5);
    glEnd();

    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.65,1.1,-1);
    glVertex3f(4.65,0,-1);
    glVertex3f(4.75,0,-1);
    glVertex3f(4.75,1.1,-1);
    glEnd();


    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4,1.1,-0.5);
    glVertex3f(4.12,1.1,-0.5);
    glVertex3f(4.12,1.5,-0.5);
    glVertex3f(4,1.5,-0.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4,1.5,-0.5);
    glVertex3f(4.12,1.5,-0.5);
    glVertex3f(4.65,1.5,0);
    glVertex3f(4.75,1.5,0);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.65,1.1,0);
    glVertex3f(4.75,1.1,0);
    glVertex3f(4.75,1.5,0);
    glVertex3f(4.65,1.5,0);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.65,1.1,-1);
    glVertex3f(4.75,1.1,-1);
    glVertex3f(4.75,1.5,-1);
    glVertex3f(4.65,1.5,-1);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.65,1.5,-1);
    glVertex3f(4.75,1.5,-1);
    glVertex3f(5.38,1.5,-0.5);
    glVertex3f(5.4,1.5,-0.5);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5.38,1.1,-0.5);
    glVertex3f(5.4,1.1,-0.5);
    glVertex3f(5.4,1.5,-0.5);
    glVertex3f(5.38,1.5,-0.5);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(4.7,1.5,-0);
    glVertex3f(5.4,1.5,-0.5);
    glVertex3f(5.4,2,-0.5);
    glVertex3f(5.425,2.05,-0.5);
    glVertex3f(4.875,2.05,0);
    glVertex3f(4.7,2,0);
    glEnd();
    
    
    //table 2
    
    
    //chair1
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(3.4,0.9,2.5);
    glVertex3f(4.3,0.9,3);
    glVertex3f(4.3,1.1,3);
    glVertex3f(3.4,1.1,2.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(5,0.9,2.5);
    glVertex3f(4.3,0.9,3);
    glVertex3f(4.3,1.1,3);
    glVertex3f(5,1.1,2.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(5,0.9,2.5);
    glVertex3f(4.3,0.9,2);
    glVertex3f(4.3,1.1,2);
    glVertex3f(5,1.1,2.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(3.4,0.9,2.5);
    glVertex3f(3.4,1.1,2.5);
    glVertex3f(4.3,1.1,2);
    glVertex3f(4.3,0.9,2);
    glEnd();
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1.1,2.5);
    glVertex3f(4.3,1.1,3);
    glVertex3f(5,1.1,2.5);
    glVertex3f(4.3,1.1,2);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1,2.5);
    glVertex3f(3.4,0,2.5);
    glVertex3f(3.48,0,2.5);
    glVertex3f(3.48,1,2.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,3);
    glVertex3f(4.25,0,3);
    glVertex3f(4.35,0,3);
    glVertex3f(4.35,1.1,3);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5,1,2.5);
    glVertex3f(5,0,2.5);
    glVertex3f(4.92,0,2.5);
    glVertex3f(4.92,1,2.5);
    glEnd();
    
    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,3);
    glVertex3f(4.25,0,3);
    glVertex3f(4.35,0,3);
    glVertex3f(4.35,1.1,3);
    glEnd();
    
    
    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,3);
    glVertex3f(4.35,1.1,3);
    glVertex3f(4.35,1.5,3);
    glVertex3f(4.25,1.5,3);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.5,2);
    glVertex3f(4.35,1.5,2);
    glVertex3f(5,1.5,2.5);
    glVertex3f(4.92,1.5,2.5);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5,1.1,2.5);
    glVertex3f(4.92,1.1,2.5);
    glVertex3f(4.92,1.5,2.5);
    glVertex3f(5,1.5,2.5);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1.1,2.5);
    glVertex3f(3.48,1.1,2.5);
    glVertex3f(3.48,1.5,2.5);
    glVertex3f(3.4,1.5,2.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1.5,2.5);
    glVertex3f(3.48,1.5,2.5);
    glVertex3f(4.25,1.5,3);
    glVertex3f(4.35,1.5,3);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.25,1.1,3);
    glVertex3f(4.35,1.1,3);
    glVertex3f(4.35,1.5,3);
    glVertex3f(4.25,1.5,3);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(3.4,1.5,2.5);
    glVertex3f(4.35,1.5,2);
    glVertex3f(4.35,2,2);
    glVertex3f(4.325,2.05,2);
    glVertex3f(3.375,2.05,2.5);
    glVertex3f(3.4,2,2.5);
    glEnd();
    
    //chair2
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(4.4,0.9,6.5);
    glVertex3f(5.3,0.9,7);
    glVertex3f(5.3,1.1,7);
    glVertex3f(4.4,1.1,6.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(6,0.9,6.5);
    glVertex3f(5.3,0.9,7);
    glVertex3f(5.3,1.1,7);
    glVertex3f(6,1.1,6.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(6,0.9,6.5);
    glVertex3f(5.3,0.9,6);
    glVertex3f(5.3,1.1,6);
    glVertex3f(6,1.1,6.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(4.4,0.9,6.5);
    glVertex3f(4.4,1.1,6.5);
    glVertex3f(5.3,1.1,6);
    glVertex3f(5.3,0.9,6);
    glEnd();
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(4.4,1.1,6.5);
    glVertex3f(5.3,1.1,7);
    glVertex3f(6,1.1,6.5);
    glVertex3f(5.3,1.1,6);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.4,1,6.5);
    glVertex3f(4.4,0,6.5);
    glVertex3f(4.48,0,6.5);
    glVertex3f(4.48,1,6.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5.25,1.1,7);
    glVertex3f(5.25,0,7);
    glVertex3f(5.35,0,7);
    glVertex3f(5.35,1.1,7);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(6,1,6.5);
    glVertex3f(6,0,6.5);
    glVertex3f(5.92,0,6.5);
    glVertex3f(5.92,1,6.5);
    glEnd();
    
    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5.25,1.1,6);
    glVertex3f(5.25,0,6);
    glVertex3f(5.35,0,6);
    glVertex3f(5.35,1.1,6);
    glEnd();
    
    
    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5.25,1.1,7);
    glVertex3f(5.35,1.1,7);
    glVertex3f(5.35,1.5,7);
    glVertex3f(5.25,1.5,7);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5.25,1.5,7);
    glVertex3f(5.35,1.5,7);
    glVertex3f(6,1.5,6.5);
    glVertex3f(5.92,1.5,6.5);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(6,1.1,6.5);
    glVertex3f(5.92,1.1,6.5);
    glVertex3f(5.92,1.5,6.5);
    glVertex3f(6,1.5,6.5);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.4,1.1,6.5);
    glVertex3f(4.48,1.1,6.5);
    glVertex3f(4.48,1.5,6.5);
    glVertex3f(4.4,1.5,6.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(4.4,1.5,6.5);
    glVertex3f(4.48,1.5,6.5);
    glVertex3f(5.25,1.5,6);
    glVertex3f(5.35,1.5,6);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(5.25,1.1,6);
    glVertex3f(5.35,1.1,6);
    glVertex3f(5.35,1.5,6);
    glVertex3f(5.25,1.5,6);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(4.4,1.5,6.5);
    glVertex3f(5.35,1.5,7);
    glVertex3f(5.35,2,7);
    glVertex3f(5.325,2.05,7);
    glVertex3f(4.375,2.05,6.5);
    glVertex3f(4.4,2,6.5);
    glEnd();
    
    //chair3
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(6.4,0.9,0.5);
    glVertex3f(7.3,0.9,1);
    glVertex3f(7.3,1.1,1);
    glVertex3f(6.4,1.1,0.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(8,0.9,0.5);
    glVertex3f(7.3,0.9,1);
    glVertex3f(7.3,1.1,1);
    glVertex3f(8,1.1,0.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(8,0.9,0.5);
    glVertex3f(7.3,0.9,-0);
    glVertex3f(7.3,1.1,-0);
    glVertex3f(8,1.1,0.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(6.4,0.9,0.5);
    glVertex3f(6.4,1.1,0.5);
    glVertex3f(7.3,1.1,-0);
    glVertex3f(7.3,0.9,-0);
    glEnd();
   
    
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(6.4,1,0.5);
    glVertex3f(6.4,0,0.5);
    glVertex3f(6.48,0,0.5);
    glVertex3f(6.48,1,0.5);
    glEnd();
    
    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(7.25,1.1,1);
    glVertex3f(7.25,0,1);
    glVertex3f(7.35,0,1);
    glVertex3f(7.35,1.1,1);
    glEnd();
    
    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8,1,0.5);
    glVertex3f(8,0,0.5);
    glVertex3f(7.92,0,0.5);
    glVertex3f(7.92,1,0.5);
    glEnd();
    
    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(7.25,1.1,0);
    glVertex3f(7.25,0,0);
    glVertex3f(7.35,0,0);
    glVertex3f(7.35,1.1,0);
    glEnd();
    
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(6.4,1.1,0.5);
    glVertex3f(7.3,1.1,1);
    glVertex3f(8,1.1,0.5);
    glVertex3f(7.3,1.1,0);
    glEnd();
    
    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(7.25,1.1,1);
    glVertex3f(7.35,1.1,1);
    glVertex3f(7.35,1.5,1);
    glVertex3f(7.25,1.5,1);
    glEnd();
    
    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(7.25,1.5,1);
    glVertex3f(7.35,1.5,1);
    glVertex3f(8,1.5,0.5);
    glVertex3f(7.92,1.5,0.5);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8,1.1,0.5);
    glVertex3f(7.92,1.1,0.5);
    glVertex3f(7.92,1.5,0.5);
    glVertex3f(8,1.5,0.5);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(6.4,1.1,0.5);
    glVertex3f(6.48,1.1,0.5);
    glVertex3f(6.48,1.5,0.5);
    glVertex3f(6.4,1.5,0.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(6.4,1.5,0.5);
    glVertex3f(6.48,1.5,0.5);
    glVertex3f(7.25,1.5,0);
    glVertex3f(7.35,1.5,0);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(7.25,1.1,0);
    glVertex3f(7.35,1.1,0);
    glVertex3f(7.35,1.5,0);
    glVertex3f(7.25,1.5,0);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(8,1.5,0.5);
    glVertex3f(7.35,1.5,0);
    glVertex3f(7.35,2,0);
    glVertex3f(7.325,2.05,0);
    glVertex3f(7.975,2.05,0.5);
    glVertex3f(8,2,0.5);
    glEnd();
    
    //chair 4
    //side
    //LEFT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(8,0.9,4.5);
    glVertex3f(8.7,0.9,5);
    glVertex3f(8.7,1.1,5);
    glVertex3f(8,1.1,4.5);
    glEnd();
    //RIGHT FRONT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(9.4,0.9,4.5);
    glVertex3f(8.7,0.9,5);
    glVertex3f(8.7,1.1,5);
    glVertex3f(9.4,1.1,4.5);
    glEnd();
    //RIGHT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(9.4,0.9,4.5);
    glVertex3f(8.7,0.9,4);
    glVertex3f(8.7,1.1,4);
    glVertex3f(9.4,1.1,4.5);
    glEnd();
    //LRFT BEHIND
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_QUADS);
    glVertex3f(8,0.9,4.5);
    glVertex3f(8,1.1,4.5);
    glVertex3f(8.7,1.1,4);
    glVertex3f(8.7,0.9,4);
    glEnd();
    //TOP
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(8,1.1,4.5);
    glVertex3f(8.7,1.1,5);
    glVertex3f(9.4,1.1,4.5);
    glVertex3f(8.7,1.1,4);
    glEnd();
    //LEG LEFT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8,1,4.5);
    glVertex3f(8,0,4.5);
    glVertex3f(8.12,0,4.5);
    glVertex3f(8.12,1,4.5);
    glEnd();

    //LEG CENTER
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8.65,1.1,5);
    glVertex3f(8.65,0,5);
    glVertex3f(8.75,0,5);
    glVertex3f(8.75,1.1,5);
    glEnd();

    //LEG RIGHT
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(9.4,1,4.5);
    glVertex3f(9.4,0,4.5);
    glVertex3f(9.38,0,4.5);
    glVertex3f(9.38,1,4.5);
    glEnd();

    //leg center behind
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8.65,1.1,4);
    glVertex3f(8.65,0,4);
    glVertex3f(8.75,0,4);
    glVertex3f(8.75,1.1,4);
    glEnd();


    //handle behind  part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8,1.1,4.5);
    glVertex3f(8.12,1.1,4.5);
    glVertex3f(8.12,1.5,4.5);
    glVertex3f(8,1.5,4.5);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8,1.5,4.5);
    glVertex3f(8.12,1.5,4.5);
    glVertex3f(8.65,1.5,5);
    glVertex3f(8.75,1.5,5);
    glEnd();

    //handle front part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8.65,1.1,5);
    glVertex3f(8.75,1.1,5);
    glVertex3f(8.75,1.5,5);
    glVertex3f(8.65,1.5,5);
    glEnd();

    //handle behind  part right
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8.65,1.1,4);
    glVertex3f(8.75,1.1,4);
    glVertex3f(8.75,1.5,4);
    glVertex3f(8.65,1.5,4);
    glEnd();

    //handle upper part left
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(8.65,1.5,4);
    glVertex3f(8.75,1.5,4);
    glVertex3f(9.38,1.5,4.5);
    glVertex3f(9.4,1.5,4.5);
    glEnd();

    //handle front part
    glColor3f(0.36,0.25,0.2);
    glBegin(GL_POLYGON);
    glVertex3f(9.38,1.1,4.5);
    glVertex3f(9.4,1.1,4.5);
    glVertex3f(9.4,1.5,4.5);
    glVertex3f(9.38,1.5,4.5);
    glEnd();

    //upper part of tHe upper prt
    glColor3f(0.037255, 0.656863,0.319608);
    glBegin(GL_POLYGON);
    glVertex3f(8.7,1.5,5);
    glVertex3f(9.4,1.5,4.5);
    glVertex3f(9.4,2,4.5);
    glVertex3f(9.425,2.05,4.5);
    glVertex3f(8.875,2.05,5);
    glVertex3f(8.7,2,5);
    glEnd();
    
      //models
//    //LEFT FRONT
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_QUADS);
//    glVertex3f(-0.9,0.9,2.5);
//    glVertex3f(-0.2,0.9,3);
//    glVertex3f(-0.2,1.1,3);
//    glVertex3f(-0.9,1.1,2.5);
//    glEnd();
//    //RIGHT FRONT
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_QUADS);
//    glVertex3f(0.5,0.9,2.5);
//    glVertex3f(-0.2,0.9,3);
//    glVertex3f(-0.2,1.1,3);
//    glVertex3f(0.5,1.1,2.5);
//    glEnd();
//    //RIGHT BEHIND
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_QUADS);
//    glVertex3f(0.5,0.9,2.5);
//    glVertex3f(-0.2,0.9,2);
//    glVertex3f(-0.2,1.1,2);
//    glVertex3f(0.5,1.1,2.5);
//    glEnd();
//    //LRFT BEHIND
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_QUADS);
//    glVertex3f(-0.9,0.9,2.5);
//    glVertex3f(-0.9,1.1,2.5);
//    glVertex3f(-0.2,1.1,2);
//    glVertex3f(-0.2,0.9,2);
//    glEnd();
//    //TOP
//    glColor3f(0.36,0.25,0.2);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.9,1.1,2.5);
//    glVertex3f(-0.2,1.1,3);
//    glVertex3f(0.5,1.1,2.5);
//    glVertex3f(-0.2,1.1,2);
//    glEnd();
//    //LEG LEFT
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.9,1,2.5);
//    glVertex3f(-0.9,0,2.5);
//    glVertex3f(-0.82,0,2.5);
//    glVertex3f(-0.82,1,2.5);
//    glEnd();
//
//    //LEG CENTER
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.25,1.1,3);
//    glVertex3f(-0.25,0,3);
//    glVertex3f(-0.15,0,3);
//    glVertex3f(-0.15,1.1,3);
//    glEnd();
//
//    //LEG RIGHT
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.5,1,2.5);
//    glVertex3f(0.5,0,2.5);
//    glVertex3f(0.42,0,2.5);
//    glVertex3f(0.42,1,2.5);
//    glEnd();
//
//    //leg center behind
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.25,1.1,2);
//    glVertex3f(-0.25,0,2);
//    glVertex3f(-0.15,0,2);
//    glVertex3f(-0.15,1.1,2);
//    glEnd();
//
//
//    //handle behind  part
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.9,1.1,2.5);
//    glVertex3f(-0.8,1.1,2.5);
//    glVertex3f(-0.8,1.5,2.5);
//    glVertex3f(-0.9,1.5,2.5);
//    glEnd();
//
//    //handle upper part left
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.9,1.5,2.5);
//    glVertex3f(-0.8,1.5,2.5);
//    glVertex3f(-0.25,1.5,3);
//    glVertex3f(-0.15,1.5,3);
//    glEnd();
//
//    //handle front part left
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.25,1.1,3);
//    glVertex3f(-0.15,1.1,3);
//    glVertex3f(-0.15,1.5,3);
//    glVertex3f(-0.25,1.5,3);
//    glEnd();
//
//    //handle behind  part right
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.3,1.1,2);
//    glVertex3f(-0.2,1.1,2);
//    glVertex3f(-0.2,1.5,2);
//    glVertex3f(-0.3,1.5,2);
//    glEnd();
//
//    //handle upper part left
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.3,1.5,2);
//    glVertex3f(-0.2,1.5,2);
//    glVertex3f(0.4,1.5,2.5);
//    glVertex3f(0.5,1.5,2.5);
//    glEnd();
//
//    //handle front part
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(0.4,1.1,2.5);
//    glVertex3f(0.5,1.1,2.5);
//    glVertex3f(0.5,1.5,2.5);
//    glVertex3f(0.4,1.5,2.5);
//    glEnd();
//
//    //upper part of tHe upper prt
//    glColor3f(0.35,0.16,0.14);
//    glBegin(GL_POLYGON);
//    glVertex3f(-0.9,1.5,2.5);
//    glVertex3f(-0.2,1.5,2);
//    glVertex3f(-0.2,2,2);
//    glVertex3f(-0.225,2.05,2);
//    glVertex3f(-0.875,2.05,2.5);
//    glVertex3f(-0.9,2,2.5);
//    glEnd();
}

//void lights2(){
//    //light1
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex3f(-3.1, 9.75,-6.7f);
//    glVertex3f(-3.1f, 10,-6.7f);
//    glVertex3f(-2.95f, 10,-6.7f);
//    glVertex3f(-2.95f, 9.75,-6.7f);
//    glEnd();
//
//    //center left light
//    glColor3f(0.85,0.85,0.1);
//    glBegin(GL_POLYGON);
//    glVertex3f(-3.1, 9.25,-6.7f);
//    glVertex3f(-3.25f, 9.6,-6.7f);
//    glVertex3f(-3.1f, 9.75,-6.7f);
//    glVertex3f(-2.95f, 9.75,-6.7f);
//    glVertex3f(-2.8f, 9.6,-6.7f);
//    glVertex3f(-2.95f, 9.25,-6.7f);
//    glEnd();
//
//    //light2
//    //center right stand
//
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex3f(3.1, 9.75,-6.7f);
//    glVertex3f(3.1f, 10,-6.7f);
//    glVertex3f(2.95f, 10,-6.7f);
//    glVertex3f(2.95f, 9.75,-6.7f);
//    glEnd();
//
//    //center right light
//    glColor3f(0.85,0.85,0.1);
//    glBegin(GL_POLYGON);
//    glVertex3f(3.1, 9.25,-6.7f);
//    glVertex3f(3.25f, 9.6,-6.7f);
//    glVertex3f(3.1f, 9.75,-6.7f);
//    glVertex3f(2.95f, 9.75,-6.7f);
//    glVertex3f(2.8f,9.6,-6.7f);
//    glVertex3f(2.95f, 9.25,-6.7f);
//    glEnd();
//
//    //light3
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex3f(-3.1, 9.75,-2.7f);
//    glVertex3f(-3.1f, 10,-2.7f);
//    glVertex3f(-2.95f, 10,-2.7f);
//    glVertex3f(-2.95f, 9.75,-2.7f);
//    glEnd();
//
//    //center left light
//    glColor3f(0.85,0.85,0.1);
//    glBegin(GL_POLYGON);
//    glVertex3f(-3.1, 9.25,-2.7f);
//    glVertex3f(-3.25f, 9.6,-2.7f);
//    glVertex3f(-3.1f, 9.75,-2.7f);
//    glVertex3f(-2.95f, 9.75,-2.7f);
//    glVertex3f(-2.8f, 9.6,-2.7f);
//    glVertex3f(-2.95f, 9.25,-2.7f);
//    glEnd();
//
//    //light4
//
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex3f(-1.1, 9.75,-6.7f);
//    glVertex3f(-1.1f, 10,-6.7f);
//    glVertex3f(-0.95f, 10,-6.7f);
//    glVertex3f(-0.95f, 9.75,-6.7f);
//    glEnd();
//
//    //center left light
//    glColor3f(0.85,0.85,0.1);
//    glBegin(GL_POLYGON);
//    glVertex3f(-1.1, 9.25,-6.7f);
//    glVertex3f(-1.25f, 9.6,-6.7f);
//    glVertex3f(-1.1f, 9.75,-6.7f);
//    glVertex3f(-0.95f, 9.75,-6.7f);
//    glVertex3f(-0.8f, 9.6,-6.7f);
//    glVertex3f(-0.95f, 9.25,-6.7f);
//    glEnd();
//
//    //light4
//
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex3f(-1.1, 9.75,-2.7f);
//    glVertex3f(-1.1f, 10,-2.7f);
//    glVertex3f(-0.95f, 10,-2.7f);
//    glVertex3f(-0.95f, 9.75,-2.7f);
//    glEnd();
//
//    //center left light
//    glColor3f(0.85,0.85,0.1);
//    glBegin(GL_POLYGON);
//    glVertex3f(-1.1, 9.25,-2.7f);
//    glVertex3f(-1.25f, 9.6,-2.7f);
//    glVertex3f(-1.1f, 9.75,-2.7f);
//    glVertex3f(-0.95f, 9.75,-2.7f);
//    glVertex3f(-0.8f, 9.6,-2.7f);
//    glVertex3f(-0.95f, 9.25,-2.7f);
//    glEnd();
//
//    //light2
//    //center right stand
//
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex3f(3.1, 9.75,-2.7f);
//    glVertex3f(3.1f, 10,-2.7f);
//    glVertex3f(2.95f, 10,-2.7f);
//    glVertex3f(2.95f, 9.75,-2.7f);
//    glEnd();
//
//    //center right light
//    glColor3f(0.85,0.85,0.1);
//    glBegin(GL_POLYGON);
//    glVertex3f(3.1, 9.25,-2.7f);
//    glVertex3f(3.25f, 9.6,-2.7f);
//    glVertex3f(3.1f, 9.75,-2.7f);
//    glVertex3f(2.95f, 9.75,-2.7f);
//    glVertex3f(2.8f,9.6,-2.7f);
//    glVertex3f(2.95f, 9.25,-2.7f);
//    glEnd();
//
//    //light2
//    //center right stand
//
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex3f(5.1, 9.75,-2.7f);
//    glVertex3f(5.1f, 10,-2.7f);
//    glVertex3f(4.95f, 10,-2.7f);
//    glVertex3f(4.95f, 9.75,-2.7f);
//    glEnd();
//
//    //center right light
//    glColor3f(0.85,0.85,0.1);
//    glBegin(GL_POLYGON);
//    glVertex3f(5.1, 9.25,-2.7f);
//    glVertex3f(5.25f, 9.6,-2.7f);
//    glVertex3f(5.1f, 9.75,-2.7f);
//    glVertex3f(4.95f, 9.75,-2.7f);
//    glVertex3f(4.8f,9.6,-2.7f);
//    glVertex3f(4.95f, 9.25,-2.7f);
//    glEnd();
//
//
//}

void humanDisplay2(float x,float y,int ir,int ib,int ig,int row,float wave){
    
    //hair
    
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(2+x,15+y,0+wave);
    glVertex3f(2+x,15.25+y,0+wave);
    glVertex3f(2.25+x,15.25+y,0+wave);
    glVertex3f(2.5+x,15.5+y,0+wave);
    glVertex3f(2.5+x,15+y,0+wave);
    glEnd();
    
    //face
    glColor3f(0.858824,0.576471,0.439216);
      
    glBegin(GL_POLYGON);
    glVertex3f(2+x,14.7+y,0+wave);
    glVertex3f(2+x,15+y,0+wave);
    glVertex3f(2.5+x,15+y,0+wave);
    glVertex3f(2.5+x,14.7+y,0+wave);
    glEnd();
    
    
    //mouth
    
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(2.2+x,14.8+y,0.1+wave);
    glVertex3f(2.35+x,14.8+y,0.1+wave);
    glVertex3f(2.3+x,14.74+y,0.1+wave);
    glVertex3f(2.25+x,14.74+y,0.1+wave);
    glEnd();
    
    //eyebrows
    
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(2.1+x,14.95+y,0.1+wave);
    glVertex3f(2.25+x,14.9+y,0.1+wave);
    glEnd();
    
    //eyebrows
    
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex3f(2.45+x,14.95+y,0.1+wave);
    glVertex3f(2.3+x,14.9+y,0.1+wave);
    glEnd();
    
    
    
    
    //eyes
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.16+x,14.85+y,0.1+wave);
    glVertex3f(2.16+x,14.89+y,0.1+wave);
    glVertex3f(2.2+x,14.89+y,0.1+wave);
    glVertex3f(2.2+x,14.85+y,0.1+wave);
    glEnd();
    
    //eyes
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.35+x,14.85+y,0.1+wave);
    glVertex3f(2.35+x,14.89+y,0.1+wave);
    glVertex3f(2.39+x,14.89+y,0.1+wave);
    glVertex3f(2.39+x,14.85+y,0.1+wave);
    glEnd();
    
    
    //neck
    glColor3f(0.858824,0.576471,0.439216);
    glBegin(GL_POLYGON);
    glVertex3f(2.15+x,14.6+y,0+wave);
    glVertex3f(2.15+x,14.7+y,0+wave);
    glVertex3f(2.35+x,14.7+y,0+wave);
    glVertex3f(2.35+x,14.6+y,0+wave);
    glEnd();
    
    //BODY
    //  skin color  glColor3f(0.858824,0.576471,0.439216);
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex3f(2.65+x,13.5+y,0+wave);
    glVertex3f(2.65+x,14.6+y,0+wave);
    glVertex3f(1.8+x,14.6+y,0+wave);
    glVertex3f(1.8+x,13.5+y,0+wave);
    glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(1.81+x,13.51+y,0.1+wave);
        glVertex3f(1.81+x,14.59+y,0.1+wave);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(1.81+x,13.51+y,0+wave);
        glVertex3f(2.64+x,13.51+y,0+wave);
        glEnd();
        
        glColor3f(0,0,0);
        glBegin(GL_LINES);
        glVertex3f(2.64+x,13.51+y,0+wave);
        glVertex3f(2.64+x,14.59+y,0+wave);
        glEnd();
        
        glColor3f(1,1,1);
        glBegin(GL_LINES);
        glVertex3f(1.81+x,13.55+y,0.1+wave);
        glVertex3f(2.64+x,13.55+y,0.1+wave);
        glEnd();
    
    //coat lines right
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(2.65+x, 14.55+y,0.1+wave);
    glVertex3f(2.75+x, 14.4+y,0.1+wave);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(2.75+x, 14.4+y,0.1+wave);
    glVertex3f(2.4+x, 14.35+y,0.1+wave);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(2.4+x,14.35+y,0.1+wave);
    glVertex3f(2.45+x,14.2+y,0.1+wave);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(2.45+x,14.2+y,0.1+wave);
    glVertex3f(2.1+x,14.2+y,0.1+wave);
    glEnd();


    ///coat line center
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(2.25+x,14.3+y,0.1+wave);
    glVertex3f(2.25+x,12.5+y,0.1+wave);
    glEnd();

    //coat lines left
    glColor3f(1,1,1);
    glBegin(GL_LINES);
    glVertex3f(1.9+x, 14.55+y,0.1+wave);
    glVertex3f(1.8+x, 14.4+y,0.1+wave);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(1.8+x, 14.4+y,0.1+wave);
    glVertex3f(2.15+x, 14.35+y,0.1+wave);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(2.15+x,14.35+y,0.1+wave);
    glVertex3f(2.0+x,14.2+y,0.1+wave);
    glEnd();
    glBegin(GL_LINES);
    glVertex3f(2.0+x,14.2+y,0.1+wave);
    glVertex3f(2.35+x,14.2+y,0.1+wave);
    glEnd();

    //triangle
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(2.25+x,14.175+y,0.1+wave);
    glVertex3f(2.05+x,14.625+y,0.1+wave);
    glVertex3f(2.5+x,14.625+y,0.1+wave);
    glVertex3f(2.25+x,14.175+y,0.1+wave);
    glEnd();
    
    //tie
    glColor3f(0,0,0);
    glBegin(GL_POLYGON+wave);
    glVertex3f(2.2+x,14.625+y,0.11+wave);
    glVertex3f(2.2+x,14.5+y,0.11+wave);
    glVertex3f(2.3+x,14.56+y,0.11+wave);
    glEnd();
    
    //tie
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex3f(2.35+x,14.625+y,0.11+wave);
    glVertex3f(2.35+x,14.5+y,0.11+wave);
    glVertex3f(2.25+x,14.56+y,0.11+wave);
    glEnd();
    
    
    //left hand
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex3f(1.8+x,13.5+y,0+wave);
    glVertex3f(1.8+x,14.6+y,0+wave);
    glVertex3f(1.6+x,14.6+y,0+wave);
    glVertex3f(1.6+x,13.5+y,0+wave);
    glEnd();
        
        
    
    //left palm
    glColor3f(0.858824,0.576471,0.439216);
    glBegin(GL_POLYGON);
    glVertex3f(1.6+x,13.5+y,0+wave);
    glVertex3f(1.6+x,13.45+y,0+wave);
    glVertex3f(1.8+x,13.45+y,0+wave);
    glVertex3f(1.8+x,13.5+y,0+wave);
    glEnd();
    
       
    //right hand
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex3f(2.65+x,13.5+y,0+wave);
    glVertex3f(2.65+x,14.6+y,0+wave);
    glVertex3f(2.85+x,14.6+y,0+wave);
    glVertex3f(2.85+x,13.5+y,0+wave);
    glEnd();
           
        
       
            //right palm
            glColor3f(0.858824,0.576471,0.439216);
            glBegin(GL_POLYGON);
            glVertex3f(2.65+x,13.65+y,0+wave);
            glVertex3f(2.65+x,13.45+y,0+wave);
            glVertex3f(2.85+x,13.45+y,0+wave);
            glVertex3f(2.85+x,13.65+y,0+wave);
            glEnd();
   
        
    
   
    
    //right legs
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex3f(2.25+x,12.5+y,0+wave);
    glVertex3f(2.25+x,13.5+y,0+wave);
    glVertex3f(2.65+x,13.5+y,0+wave);
    glVertex3f(2.65+x,12.5+y,0+wave);
    glEnd();
    
    //right shoe
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex3f(2.25+x,12.45+y,0+wave);
    glVertex3f(2.85+x,12.45+y,0+wave);
    glVertex3f(2.75+x,12.5+y,0+wave);
    glVertex3f(2.25+x,12.5+y,0+wave);
    glEnd();
    //left leg
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex3f(1.8+x,12.5+y,0+wave);
    glVertex3f(1.8+x,13.5+y,0+wave);
    glVertex3f(2.25+x,13.5+y,0+wave);
    glVertex3f(2.25+x,12.5+y,0+wave);
    glEnd();
        
        
        //left palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex3f(1.6+x,13.65+y,0+wave);
        glVertex3f(1.6+x,13.45+y,0+wave);
        glVertex3f(1.8+x,13.45+y,0+wave);
        glVertex3f(1.8+x,13.65+y,0+wave);
        glEnd();
        
        
        //right palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex3f(2.7+x,13.5+y,0+wave);
        glVertex3f(2.7+x,13.45+y,0+wave);
        glVertex3f(2.85+x,13.45+y,0+wave);
        glVertex3f(2.85+x,13.5+y,0+wave);
        glEnd();
    
    //left shoe
    glColor3f(0+ib,0+ir,0+ig);
    glBegin(GL_POLYGON);
    glVertex3f(1.75+x,12.5+y,0+wave);
    glVertex3f(2.25+x,12.5+y,0+wave);
    glVertex3f(2.25+x,12.45+y,0+wave);
    glVertex3f(1.6+x,12.45+y,0+wave);
    glEnd();
    }
void talks2(float x,float y,float z,float xx,float yy){
    glColor3f(1,1,1);
    
    glRasterPos3f(x,y,1.1);
    glBegin(GL_POLYGON);
    glVertex3f(3.5+x,12+y,0.0+z);
    glVertex3f(7+x,12+y,0.0+z);
    glVertex3f(7+x,14+y,0.0+z);
    glVertex3f(3.5+x,14+y,0.0+z);
    glEnd();
    
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex3f(3.5+x,12.5+y,0+z);
    glVertex3f(4.25+x,12+y,0+z);
    glVertex3f(3.25+x,11.75+y,0+z);
    glEnd();
    
    if(xcc==1){
    glColor3f(0,0,0);
    glRasterPos3f(-1.25+xx,4+yy,1+z);
    char msg1[] = "Welcome to the Dining room";
    for(int i=0;i<strlen(msg1);i++){

        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
    }
    }
    else if(xcc==2){
        glColor3f(0,0,0);
        glRasterPos3f(-1.25+xx,4+yy,1+z);
        char msg1[] = "Welcome to the Bedroom";
        for(int i=0;i<strlen(msg1);i++){

            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
        }
        
    }
   
}
void processNormalKeys(unsigned char key, int x, int y) {

    if(key == 'b' || key == 'B'){
        
        glutDisplayFunc(display2);
        xc=0;
        xcc=2;
    }
    else if(key == 'd' || key == 'D'){
        
        glutDisplayFunc(display3);
        xc=0;
        xcc=1;
    }
    
    if (key == 's' || key == 'S'){
        xc=0;
        // Clear Color and Depth Buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Reset transformations
        glLoadIdentity();
        glDisable(GL_DEPTH);
        glutIdleFunc(myinit);
        glutDisplayFunc(display);
        glutKeyboardFunc(keys);
      
    }
    
    
    glutPostRedisplay();
   
}


void pressKey(int key, int xx, int yy) {

    switch (key) {
        case GLUT_KEY_LEFT : xc=1;deltaAngle = -0.01f; break;
        case GLUT_KEY_RIGHT : xc=1;deltaAngle = 0.01f; break;
        case GLUT_KEY_UP :  xc=1;deltaMove = 0.5f; break;
        case GLUT_KEY_DOWN :xc=1; deltaMove = -0.5f; break;
    }
}

void releaseKey(int key, int x, int y) {

    switch (key) {
        case GLUT_KEY_LEFT :
        case GLUT_KEY_RIGHT : deltaAngle = 0.0f;break;
        case GLUT_KEY_UP :
        case GLUT_KEY_DOWN : deltaMove = 0;break;
    }
}

void pressKey2(int key, int xx, int yy) {

    switch (key) {
        case GLUT_KEY_LEFT : xc=1;deltaAngle2 = -0.01f; break;
        case GLUT_KEY_RIGHT : xc=1;deltaAngle2 = 0.01f; break;
        case GLUT_KEY_UP : xc=1;deltaMove2 = 0.5f; break;
        case GLUT_KEY_DOWN : xc=1;deltaMove2 = -0.5f; break;
    }
}

void releaseKey2(int key, int x, int y) {

    switch (key) {
        case GLUT_KEY_LEFT :
        case GLUT_KEY_RIGHT : deltaAngle2 = 0.0f;break;
        case GLUT_KEY_UP :
        case GLUT_KEY_DOWN : deltaMove2 = 0;break;
    }
}
void storydisplay(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(100,150);
    glVertex2f(100,650);
    glVertex2f(875,650);
    glVertex2f(875,150);
    glEnd();
    glColor3f(0, 0, 0);
    glRasterPos3f(150,600,0);
    char msg1[] = "The Titanic was a luxury British steamship that sank in the early hours of April 15, 1912 after striking an iceberg, leading to the deaths of more than 1,500 passengers and crew.";
    for(int i=0;i<100;i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg1[i]);
       
      
    }
    glRasterPos3f(150,550,0);
    for(int i=101;i<strlen(msg1);i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg1[i]);
    }
    glRasterPos3f(150,450,0);
    char msg2[] = "The RMS Titanic, a luxury steamship, sank in the early hours of April 15, 1912, off the coast of Newfoundland in the North Atlantic after sideswiping an iceberg during its maiden voyage. Of the 2,240 passengers and crew on board, more than 1,500 lost their lives in the disaster. Titanic has inspired countless books, articles and films (including the 1997 'Titanic' movie starring Kate Winslet and Leonardo DiCaprio), and the ships story has entered the public consciousness as a cautionary tale about the perils of human hubris.";
    for(int i=0;i<100;i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);

    }
    glRasterPos3f(150,400,0);
    for(int i=101;i<200;i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);
    }
    glRasterPos3f(150,350,0);
    for(int i=201;i<300;i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);
    }
    glRasterPos3f(150,300,0);
    for(int i=301;i<400;i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);
    }
    glRasterPos3f(150,250,0);
    for(int i=401;i<500;i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);
    }
    
    glRasterPos3f(150,200,0);
    for(int i=501;i<strlen(msg2);i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);
    }
    char msg3[] = "Press a key to go next";
    glRasterPos3f(400,100,0);
    for(int i=0;i<strlen(msg3);i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg3[i]);
    }
    
    glFlush();
    glutSwapBuffers();
}

void graphicsi(){
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(17.5,8.5);
    glVertex2f(23,8.5);
    glVertex2f(23,14);
    glVertex2f(17.5,14);
    glEnd();
    
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(22.5,9.0);
    glVertex2f(21.5,8.5);
    glVertex2f(23,8);
    glEnd();
    
   

  
    
    glColor3f(0,0,0);
    glRasterPos3f(18,13.65,0);
    char msg1[] = "Welcome to the Titanic Project";
    for(int i=0;i<strlen(msg1);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
    }
    
    glColor3f(0,0,0);
    glRasterPos3f(18.5,12.65,0);
    char msgx[] = "Press the following for:";
    for(int i=0;i<strlen(msgx);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msgx[i]);
    }
    glColor3f(0,0,0);
    glRasterPos3f(19,11.65,0);
    char msg2[] = "S - TITANIC";
    for(int i=0;i<strlen(msg2);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg2[i]);
    }
    
    
    glRasterPos3f(18.85,10.65,0);
    char msg3[] = "B - BEDROOM";
    for(int i=0;i<strlen(msg3);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }
    
    glRasterPos3f(18.75,9.65,0);
    char msg4[] = "D - DINING HALL";
    for(int i=0;i<strlen(msg4);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg4[i]);
    }
    
    glColor3f(0,0,0);
    glRasterPos3f(18.5,8.65,0);
    char msg5[] = "Press A to begin journey";
    for(int i=0;i<strlen(msg5);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg5[i]);
    }
    
    
}
void welcomeDisplay(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    
    glColor3f(1, 0, 0);
    glRasterPos3f(361,750,0);
    char msg1[] = "COMPUTER GRAPHICS PROJECT";
    for(int i=0;i<strlen(msg1);i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg1[i]);
    }
    
    glRasterPos3f(471,700,0);
    char msg2[] = "The Titanic";
    for(int i=0;i<strlen(msg2);i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg2[i]);
    }
    
    glRasterPos3f(481,650,0);
    char msg3[] = "SUBMITTED BY";
    for(int i=0;i<strlen(msg3);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,msg3[i]);
    }
    
    glRasterPos3f(461,600,0);
    char msg4[] = "4NM18CS187";
    for(int i=0;i<strlen(msg4);i++){
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,msg4[i]);
    }
    
    glRasterPos3f(421,550,0);
    char msg5[] = "SREEHARI RAJENDRA KUMAR";
    for(int i=0;i<strlen(msg5);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg5[i]);
    }
    

    
    glColor3f(0,0,1);
    glRasterPos3f(470,430,0);
    char msg8[] = "Submitted to";
    for(int i=0;i<strlen(msg8);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg8[i]);
    }
    
    glColor3f(0,0,1);
    glRasterPos3f(440,390,0);
    char msg9[] = "Mr Pradeep Kanchan";
    for(int i=0;i<strlen(msg9);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg9[i]);
    }
    
    glColor3f(0,0,1);
    glRasterPos3f(465,360,0);
    char msg10[] = "Asst Professor";
    for(int i=0;i<strlen(msg10);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg10[i]);
    }
    
    glColor3f(0,0,1);
    glRasterPos3f(480,340,0);
    char msg11[] = "Grade III";
    for(int i=0;i<strlen(msg11);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg11[i]);
    }
    
    glColor3f(0,0,1);
    glRasterPos3f(405,320,0);
    char msg11x[] = "Department of Computer Science";
    for(int i=0;i<strlen(msg11x);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg11x[i]);
    }
    
    glColor3f(0,0,1);
    glRasterPos3f(390,300,0);
    char msg11xX[] = "NMAM Institute of Technology,NITTE";
    for(int i=0;i<strlen(msg11xX);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg11xX[i]);
    }
    
    glColor3f(0,0,1);
    glRasterPos3f(470,230,0);
    char msg12[] = "Press a key";
    for(int i=0;i<strlen(msg12);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg12[i]);
    }
    glutSwapBuffers();
}


void myinit()
{
    glClearColor(0.678431f,0.917647f,0.917647f,0.5f);
    //glClearColor(0.0f,0.0f,0.5f,1.0f); //night
    glColor3f(1.0,0.0,0.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,999.0,0.0,799.0);
}
//void display2(int argc, char* argv[]){
void display2(){
    glClear(GL_COLOR_BUFFER_BIT);
//    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(3200,3200);
    glutCreateWindow("Sinking Ship");

    // register callbacks
    glutKeyboardFunc(processNormalKeys);
    glutDisplayFunc(renderScene);
    glutReshapeFunc(changeSize);
    glutIdleFunc(renderScene);

    glutSpecialFunc(pressKey);

    // here are the new entries
    glutIgnoreKeyRepeat(1);
    glutSpecialUpFunc(releaseKey);
 
}

//void display2(int argc, char* argv[]){
void display3(){
    glClear(GL_COLOR_BUFFER_BIT);
//    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DEPTH | GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(3200,3200);
    glutCreateWindow("Sinking Ship");

    // register callbacks
    glutKeyboardFunc(processNormalKeys);
    glutDisplayFunc(renderScene2);
    glutReshapeFunc(changeSize);
    glutIdleFunc(renderScene2);

    glutSpecialFunc(pressKey2);

    // here are the new entries
    glutIgnoreKeyRepeat(1);
    glutSpecialUpFunc(releaseKey2);
 
}

struct timespec jmp, jmp2;

GLint a=950,b=950,c=500,xx=0,anglee=0,x22=0,xxx2=0,o=0;
GLfloat hx=0.678431,hy=0.917647f,hz=0.917647f,ha=0.5,hr=1.0,hw=1.0;
GLfloat theta=0.0;

void update30(int value)
{
    a-=10;
    glutPostRedisplay();
    glutTimerFunc(200,update30,0);
    hx-=0.012;
    hy-=0.012;
    hz-=0.012;
    ha+=0.1;
    if(hz<0.5){
        hz=0.5;
    }
    if(hx<0.0){
        hx=0.0;
    }
    if(hy<0.0){
        hy=0.0;
    }
    if(ha>1){
        ha=1;
    }
    myinit30();
}
void displayy30(){
    //    glutKeyboardFunc(keys);
        glDisable(GL_DEPTH_TEST);
        myinit30();
        glutDisplayFunc(display30);
        glScaled(40,50,0);
}
void display30()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    display130();

    if(a<0)

    {
        b-=5;
        
        display230();
      
        
    }
    if(b==510)
    {
        jmp.tv_sec = 2;
        jmp.tv_nsec = 500000000L;
        nanosleep(&jmp , &jmp2);
    }
    if(b<500)
    {

       
            if((anglee+15)<90){
                displayx30();
            anglee+=1;
//                c-=0.02;
            }
      
        else{
          
            display330();
            
        }
        if(b<-300){
            displayxx30();
        }
       
        
       

    }
   
    


    glFlush();
    glutSwapBuffers();
}
void displayxx30(){
//    glColor3f(0,0,0);
//    glBegin(GL_POLYGON);
//    glVertex2f(100,150);
//    glVertex2f(100,650);
//    glVertex2f(875,650);
//    glVertex2f(875,150);
//    glEnd();
    glColor3f(1, 1, 1);
    glRasterPos3f(150,600,0);
    char msg1[] = " On the evening of April 14 the Titanic began to approach an area known to have icebergs. Smith slightly altered the ship’s course to head farther south. However, he maintained the ship’s speed of some 22 knots. At approximately 9:40 PM the Mesaba sent a warning of an ice field. The message was never relayed to the Titanic’s bridge. At 10:55 PM the nearby Leyland liner Californian sent word that it had stopped after becoming surrounded by ice. Phillips, who was handling passenger messages, scolded the Californian for interrupting him.";
    for(int i=0;i<120;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
      
    }
    glRasterPos3f(150,570,0);
    for(int i=120;i<240;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
    }
    
    glRasterPos3f(150,540,0);
    for(int i=240;i<360;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
    }
    
    glRasterPos3f(150,510,0);
    for(int i=360;i<480;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
    }
    
    glRasterPos3f(150,480,0);
    for(int i=480;i<strlen(msg1);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg1[i]);
    }
    
    char msg2[] = "The End";
    glRasterPos3f(450,200,0);
    for(int i=0;i<strlen(msg2);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg2[i]);
    }
    
    char msg3[]=" At approximately 11:40 PM, about 400 nautical miles (740 km) south of Newfoundland, Canada, an iceberg was sighted, and the bridge was notified. First Officer William Murdoch ordered both the ship “hard-a-starboard”—a maneuver that under the order system then in place would turn the ship to port (left)—and the engines reversed. The Titanic began to turn, but it was too close to avoid a collision. The ship’s starboard side scraped along the iceberg. At least five of its supposedly watertight compartments toward the bow were ruptured. After assessing the damage, Andrews determined that, as the ship’s forward compartments filled with water, its bow would drop deeper into the ocean, causing water from the ruptured compartments to spill over into each succeeding compartment, thereby sealing the ship’s fate.";
    
    glRasterPos3f(150,430,0);
    for(int i=0;i<120;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }
    
    glRasterPos3f(150,400,0);
    for(int i=120;i<240;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }
    
    glRasterPos3f(150,370,0);
    for(int i=240;i<360;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }
    
    glRasterPos3f(150,340,0);
    for(int i=360;i<480;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }
    
    glRasterPos3f(150,310,0);
    for(int i=480;i<600;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }
    
    
    glRasterPos3f(150,280,0);
    for(int i=600;i<720;i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }

    glRasterPos3f(150,250,0);
    for(int i=720;i<strlen(msg3);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,msg3[i]);
    }
    
   
    
    
}

void water30()
{

    glColor3f(0.196078,0.6,0.8);
    glBegin(GL_POLYGON);
        glVertex2f(0,-1000);
        glVertex2f(1000,-1000);
        glVertex2f(1000,150);
        glVertex2f(0,150);
    glEnd();
}
//windows od the ship
void window3(float x1, float x2, float y1, float y2){
    glColor3f(0,0,0);
    if(hx==0.0 && hy==0.0 && hz==0.5 && ha==1.0){
    glColor3f(1,1,0); //night
    }
    
    if(anglee+15>30){
        glColor3f(0,0,0);
    }
    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    glVertex2f(x1,y2);
    glVertex2f(x2,y2);
    glVertex2f(x2,y1);
    glEnd();
    
}
void ship30(int x,int y)
{
    
    if(hr<=0.5){
        hr=0.5;
    }
    if(hw<0.658824){
        hw=0.658824;
    }
    glScaled(40,50,0);//scale of the ship
    
    glColor3f(hr,0,0);//red of the ship
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,2+y);
    glVertex2f(1.8+x,1+y);
    glVertex2f(22+x,1+y);
    glVertex2f(23+x,1.25+y);
    glVertex2f(23.5+x,1.5+y);
    glVertex2f(22.0+x,3.0+y);
    glEnd();
    
    glColor3f(0,0,0); //base black
    glBegin(GL_POLYGON);
    glVertex2f(1.75+x,2.0+y);
    glVertex2f(1.5+x,4.0+y);
    glVertex2f(23+x,4.0+y);
    glVertex2f(22+x,2.5+y);
    glVertex2f(20+x,2.0+y);
    glEnd();
    
    
    
    glColor3f(hw,hw,hw);//white ship 1
    glBegin(GL_POLYGON);
    glVertex2f(1.5+x,4+y);
    glVertex2f(1.4+x,4.75+y);
    glVertex2f(4.25+x,4.5+y);
    glVertex2f(4.5+x,4+y);
    glEnd();
    
    glColor3f(hw,hw,hw);
    glBegin(GL_POLYGON);
    glVertex2f(4.25+x,4+y);
    glVertex2f(4.25+x,4.25+y);
    glVertex2f(21.75+x,4.25+y);
    glVertex2f(21.75+x,4+y);
    glEnd();
    
    glColor3f(hw,hw,hw); //white piece_back
    
    glBegin(GL_POLYGON);
    glVertex2f(23+x,4+y);
    glVertex2f(23+x,4.35+y);
    glVertex2f(22+x,4.35+y);
    glVertex2f(21+x,4+y);
    glEnd();
    
    
    glColor3f(hw,hw,hw); //main_white_piece_1
    
    glBegin(GL_POLYGON);
    glVertex2f(5.75+x,4+y);
    glVertex2f(5.75+x,4.25+y);
    glVertex2f(6+x,4.75+y);
    glVertex2f(20.5+x,4.75+y);
    glVertex2f(20.75+x,4+y);
    glEnd();
    
    glColor3f(hw,hw,hw); //main_white_piece_1
   
    glBegin(GL_POLYGON);
    glVertex2f(6.5+x,4+y);
    glVertex2f(6.5+x,5.25+y);
    glVertex2f(20+x,5.25+y);
    glVertex2f(20+x,4+y);
    glEnd();
    
    glColor3f(hw,hw,hw); //main_white_piece_2
    
    glBegin(GL_POLYGON);
    glVertex2f(6.75+x,4+y);
    glVertex2f(6.75+x,5.75+y);
    glVertex2f(19.75+x,5.75+y);
    glVertex2f(19.75+x,4+y);
    glEnd();
    
    glColor3f(hw,hw,hw); //main_white_piece_2
    
    glBegin(GL_POLYGON);
    glVertex2f(6.75+x,4+y);
    glVertex2f(7.5+x,6+y);
    glVertex2f(11.5+x,6+y);
    glVertex2f(10.75+x,4+y);
    glEnd();
    
    glColor3f(hw,hw,hw); //main_white_piece_3
    
    glBegin(GL_POLYGON);
    glVertex2f(15+x,4+y);
    glVertex2f(15.75+x,6+y);
    glVertex2f(18.5+x,6+y);
    glVertex2f(18.25+x,4+y);
    glEnd();
    
   
    
        glColor3f(hr,0,0);//red pipe 1
        glBegin(GL_POLYGON);
        glVertex2f(8+x,6+y);
        glVertex2f(8.25+x,7.5+y);
        glVertex2f(8.8+x,7.45+y);
        glVertex2f(8.6+x,6+y);
        glEnd();
            
            glColor3f(0,0,0); //black_pipe_1
            glBegin(GL_POLYGON);
            glVertex2f(8.15+x,7+y);
            glVertex2f(8.25+x,7.5+y);
            glVertex2f(8.8+x,7.45+y);
            glVertex2f(8.75+x,6.95+y);
            glEnd();
  
    glColor3f(hr,0,0);//red pipe 2
    glBegin(GL_POLYGON);
    glVertex2f(10.7+x,6+y);
    glVertex2f(10.95+x,7.5+y);
    glVertex2f(11.5+x,7.45+y);
    glVertex2f(11.3+x,6+y);
    glEnd();
    
    
    glColor3f(0,0,0); //black_pipe_2
    glBegin(GL_POLYGON);
    glVertex2f(10.85+x,7+y);
    glVertex2f(10.95+x,7.5+y);
    glVertex2f(11.5+x,7.45+y);
    glVertex2f(11.45+x,6.95+y);
    glEnd();
    
    
    glColor3f(hr,0,0);//red pipe 3
    glBegin(GL_POLYGON);
    glVertex2f(13.4+x,5.75+y);
    glVertex2f(13.65+x,7.5+y);
    glVertex2f(14.2+x,7.45+y);
    glVertex2f(14.0+x,5.75+y);
    glEnd();
    
    glColor3f(0,0,0); //black_pipe_3
    glBegin(GL_POLYGON);
    glVertex2f(13.55+x,7+y);
    glVertex2f(13.65+x,7.5+y);
    glVertex2f(14.2+x,7.45+y);
    glVertex2f(14.15+x,6.95+y);
    glEnd();
    
    
    glColor3f(hr,0,0);//red pipe 4
    glBegin(GL_POLYGON);
    glVertex2f(16.1+x,6+y);
    glVertex2f(16.35+x,7.5+y);
    glVertex2f(16.9+x,7.45+y);
    glVertex2f(16.7+x,6+y);
    glEnd();
    
    glColor3f(0,0,0); //black_pipe_4
    glBegin(GL_POLYGON);
    glVertex2f(16.25+x,7+y);
    glVertex2f(16.35+x,7.5+y);
    glVertex2f(16.9+x,7.45+y);
    glVertex2f(16.85+x,6.95+y);
    glEnd();
    
    //Windows//
    
    //window 1//
   
    window3(6.7+x,6.75+x,4.35+y,4.45+y);
    window3(6.9+x,6.95+x,4.35+y,4.45+y);
    window3(7.4+x,7.45+x,4.35+y,4.45+y);
    window3(7.6+x,7.65+x,4.35+y,4.45+y);
    window3(7.8+x,7.85+x,4.35+y,4.45+y);
    window3(8.3+x,8.35+x,4.35+y,4.45+y);
    window3(8.5+x,8.55+x,4.35+y,4.45+y);
    window3(8.7+x,8.75+x,4.35+y,4.45+y);
    window3(9.2+x,9.25+x,4.35+y,4.45+y);
    window3(9.4+x,9.45+x,4.35+y,4.45+y);
    window3(9.6+x,9.65+x,4.35+y,4.45+y);
    window3(10.1+x,10.15+x,4.35+y,4.45+y);
    window3(10.3+x, 10.35+x, 4.35+y, 4.45+y);
    window3(10.5+x,10.55+x,4.35+y,4.45+y);
    window3(11+x,11.05+x,4.35+y,4.45+y);
    window3(11.2+x,11.25+x,4.35+y,4.45+y);
    window3(11.4+x,11.45+x,4.35+y,4.45+y);
    window3(11.9+x,11.95+x,4.35+y,4.45+y);
    window3(12.1+x,12.15+x,4.35+y,4.45+y);
    window3(12.3+x,12.35+x,4.35+y,4.45+y);
    window3(12.8+x,12.85+x,4.35+y,4.45+y);
    window3(13+x,13.05+x,4.35+y,4.45+y);
    window3(13.2+x,13.25+x,4.35+y,4.45+y);
    window3(13.7+x,13.75+x,4.35+y,4.45+y);
    window3(13.9+x,13.95+x,4.35+y,4.45+y);
    window3(14.1+x,14.15+x,4.35+y,4.45+y);
    window3(14.6+x,14.65+x,4.35+y,4.45+y);
    window3(14.8+x,14.85+x,4.35+y,4.45+y);
    window3(15.4+x,15.45+x,4.35+y,4.45+y);
    window3(15.6+x,15.65+x,4.35+y,4.45+y);
    window3(15.8+x,15.85+x,4.35+y,4.45+y);
    window3(16+x,16.05+x,4.35+y,4.45+y);
    window3(16.5+x,16.55+x,4.35+y,4.45+y);
    window3(16.7+x,16.75+x,4.35+y,4.45+y);
    window3(16.9+x,16.95+x,4.35+y,4.45+y);
    window3(17.2+x,17.25+x,4.35+y,4.45+y);
    window3(17.4+x,17.45+x,4.35+y,4.45+y);
    window3(17.6+x,17.65+x,4.35+y,4.45+y);
    window3(18.2+x,18.3+x,4.35+y,4.5+y);
    window3(18.4+x,18.5+x,4.35+y,4.5+y);
    window3(18.6+x,18.7,4.35+y,4.5+y);
    window3(18.8+x,18.9+x,4.35+y,4.5+y);
    window3(19.3+x,19.4+x,4.35+y,4.5+y);
    window3(19.5+x,19.6+x,4.35+y,4.5+y);
    window3(19.7+x,19.8+x,4.35+y,4.5+y);
    window3(19.9+x,20+x,4.35+y,4.5+y);
    window3(20.1+x,20.2+x,4.35+y,4.5+y);
    
    //window_2
    
    window3(6.6+x,6.8+x,4.85+y,5.1+y);
    window3(6.9+x,7.1+x,4.85+y,5.1+y);
    for(float i=7.7;i<=10.1;i+=0.2){
        window3(i+x,i+0.1+x,4.85+y,5+y);
    }
    window3(10.6+x,10.7+x,4.85+y,5+y);
    window3(11.1+x,11.2+x,4.85+y,5+y);
    for(float i=11.6;i<=13;i+=0.2){
        window3(i+x,i+0.1+x,4.85+y,5+y);
    }
    for(float i=13.5;i<=15.1;i+=0.2){
        window3(i+x,i+0.1+x,4.85+y,5+y);
    }
    for(float i=15.6;i<=17.2;i+=0.2){
        window3(i+x,i+0.1+x,4.85+y,5+y);
    }
    for(float i=17.7;i<=18.5;i+=0.2){
        window3(i+x,i+0.1+x,4.85+y,5+y);
    }
    window3(18.8+x,19+x,4.85+y,5.1+y);
    window3(19.1+x,19.4+x,4.85+y,5.1+y);
    window3(19.5+x,19.9+x,4.85+y,5.1+y);
   
    //Window3
    window3(6.9+x,7.15+x,5.3+y,5.6+y);
    window3(7.25+x,7.5+x,5.3+y,5.6+y);
    for(float i=7.75;i<=13.35;i+=0.2){
        window3(i+x,i+0.1+x,5.3+y,5.45+y);
    }
    for(float i=13.55;i<19.5;i+=0.35){
        window3(i+x,i+0.25+x,5.3+y,5.5+y);
        
    }
    
    glColor3f(1,1,1);
    glRasterPos3f(1.75+x,3.65+y,0);
    char msg7[] = "TITANIC";
    for(int i=0;i<strlen(msg7);i++){
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,msg7[i]);
    }
    hr-=0.003;
    hw-=0.003;
}

void humanDisplay30(float x,float y,int ir,int ib,int ig,int row,float wave){
    
    glPushMatrix();
    glTranslated(250+x,-300+y,0.0);
    glScaled(40,50,0);
   
    if(row==4){
        glPushMatrix();
        glTranslated(0,xxx2/2,0);
        //hair
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.2,15.5);
        glVertex2f(0.22,15.55);
        glVertex2f(0.225,15.55);
        glVertex2f(0.275,15.575);
        glVertex2f(0.275,15.5);
        glEnd();

        //face
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.2,15.445);
        glVertex2f(0.2,15.5);
        glVertex2f(0.275,15.5);
        glVertex2f(0.275,15.445);
        glEnd();

        //neck
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.225,15.435);
        glVertex2f(0.225,15.445);
        glVertex2f(0.25,15.445);
        glVertex2f(0.25,15.435);
        glEnd();

        //BODY
        //  skin color  glColor3f(0.858824,0.576471,0.439216);
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175,15.3);
        glVertex2f(0.175,15.435);
        glVertex2f(0.3,15.435);
        glVertex2f(0.3,15.3);
        glEnd();

        //coat lines right
        glColor3f(1,1,1);
        glBegin(GL_LINES);
        glVertex2f(0.285,15.435);
        glVertex2f(0.295,15.42);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.295,15.42);
        glVertex2f(0.26,15.415);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.26,15.415);
        glVertex2f(0.265,15.4);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.265,15.4);
        glVertex2f(0.23,15.4);
        glEnd();


        ///coat line center
        glBegin(GL_LINES);
        glVertex2f(0.2325,15.4);
        glVertex2f(0.2325,15.3);
        glEnd();

        //coat lines left
        glColor3f(1,1,1);
        glBegin(GL_LINES);
        glVertex2f(0.19,15.435);
        glVertex2f(0.18,15.42);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.18,15.42);
        glVertex2f(0.215,15.415);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.215,15.415);
        glVertex2f(0.2,15.4);
        glEnd();
        glBegin(GL_LINES);
        glVertex2f(0.2,15.4);
        glVertex2f(0.235,15.4);
        glEnd();

        //triangle
        glColor3f(1,1,1);
        glBegin(GL_POLYGON);
        glVertex2f(0.235,15.4);
        glVertex2f(0.215,15.435);
        glVertex2f(0.26,15.435);
        glVertex2f(0.35,15.4);
        glEnd();

        //left hand
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.15,15.3);
        glVertex2f(0.15,15.435);
        glVertex2f(0.175,15.435);
        glVertex2f(0.175,15.3);
        glEnd();

        //left palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.15,15.3);
        glVertex2f(0.15,15.275);
        glVertex2f(0.175,15.275);
        glVertex2f(0.175,15.3);
        glEnd();

        //right hand
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.3,15.3);
        glVertex2f(0.3,15.435);
        glVertex2f(0.325,15.435);
        glVertex2f(0.325,15.3);
        glEnd();

        //right palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.3,15.3);
        glVertex2f(0.3,15.275);
        glVertex2f(0.325,15.275);
        glVertex2f(0.325,15.3);
        glEnd();

        //right legs
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.23,15.15);
        glVertex2f(0.23,15.3);
        glVertex2f(0.3,15.3);
        glVertex2f(0.3,15.15);
        glEnd();

        //right shoe
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.3,15.15);
        glVertex2f(0.32,15.125);
        glVertex2f(0.23,15.125);
        glVertex2f(0.23,15.15);
        glEnd();
        //left leg
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175,15.15);
        glVertex2f(0.175,15.3);
        glVertex2f(0.23,15.3);
        glVertex2f(0.23,15.15);
        glEnd();

        //left shoe
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.175,15.15);
        glVertex2f(0.155,15.125);
        glVertex2f(0.23,15.125);
        glVertex2f(0.23,15.15);
        glEnd();
        glPopMatrix();

    }
   
    glPopMatrix();
    
}

    

void humanDisplay130(float x,float y,int ir,int ib,int ig,int row,float wave){
    glPushMatrix();
    glTranslated(250+x,-300+y,0.0);
    glScaled(40,50,0);
   
    
    if(row==4){
        glPushMatrix();
        glTranslated(0,xxx2/2,0);
        //hair
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
       
        glVertex2f(0.2,15.445);
        glVertex2f(0.2,15.5);
        glVertex2f(0.16,15.5);
        glVertex2f(0.16,15.445);
        
      
        glEnd();
        
        glBegin(GL_POLYGON);
           
           glVertex2f(0.275,15.445);
           glVertex2f(0.275,15.5);
           glVertex2f(0.315,15.5);
           glVertex2f(0.315,15.445);
           glEnd();
       
        glBegin(GL_POLYGON);
        glVertex2f(0.17,15.5);
        glVertex2f(0.17,15.55);
        glVertex2f(0.305,15.55);
        glVertex2f(0.305,15.5);
        glEnd();

        //face
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.2,15.445);
        glVertex2f(0.2,15.5);
        glVertex2f(0.275,15.5);
        glVertex2f(0.275,15.445);
        glEnd();

        //neck
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.225,15.435);
        glVertex2f(0.225,15.445);
        glVertex2f(0.25,15.445);
        glVertex2f(0.25,15.435);
        glEnd();

        //BODY
        //  skin color  glColor3f(0.858824,0.576471,0.439216);
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175,15.3);
        glVertex2f(0.175,15.435);
        glVertex2f(0.3,15.435);
        glVertex2f(0.3,15.3);
        glEnd();

//        //coat lines right
//        glColor3f(1,1,1);
//        glBegin(GL_LINES);
//        glVertex2f(0.285+x, 15.435+y);
//        glVertex2f(0.295+x, 15.42+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.295+x, 15.42+y);
//        glVertex2f(0.26+x, 15.415+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.26+x,15.415+y);
//        glVertex2f(0.265+x,15.4+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.265+x,15.4+y);
//        glVertex2f(0.23+x,15.4+y);
//        glEnd();
//
//
//        ///coat line center
//        glBegin(GL_LINES);
//        glVertex2f(0.2325+x,15.4+y);
//        glVertex2f(0.2325+x,15.3+y);
//        glEnd();
//
//        //coat lines left
//        glColor3f(1,1,1);
//        glBegin(GL_LINES);
//        glVertex2f(0.19+x, 15.435+y);
//        glVertex2f(0.18+x, 15.42+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.18+x, 15.42+y);
//        glVertex2f(0.215+x, 15.415+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.215+x,15.415+y);
//        glVertex2f(0.2+x,15.4+y);
//        glEnd();
//        glBegin(GL_LINES);
//        glVertex2f(0.2+x,15.4+y);
//        glVertex2f(0.235+x,15.4+y);
//        glEnd();
//
//        //triangle
//        glColor3f(1,1,1);
//        glBegin(GL_POLYGON);
//        glVertex2f(0.235+x,15.4+y);
//        glVertex2f(0.215+x,15.435+y);
//        glVertex2f(0.26+x,15.435+y);
//        glVertex2f(0.35+x,15.4+y);
//        glEnd();

        //left hand
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.15,15.3);
        glVertex2f(0.15,15.435);
        glVertex2f(0.175,15.435);
        glVertex2f(0.175,15.3);
        glEnd();

        //left palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.15,15.3);
        glVertex2f(0.15,15.275);
        glVertex2f(0.175,15.275);
        glVertex2f(0.175,15.3);
        glEnd();

        //right hand
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.3,15.3);
        glVertex2f(0.3,15.435);
        glVertex2f(0.325,15.435);
        glVertex2f(0.325,15.3);
        glEnd();

        //right palm
        glColor3f(0.858824,0.576471,0.439216);
        glBegin(GL_POLYGON);
        glVertex2f(0.3,15.3);
        glVertex2f(0.3,15.275);
        glVertex2f(0.325,15.275);
        glVertex2f(0.325,15.3);
        glEnd();

        //right legs
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.23,15.15);
        glVertex2f(0.23,15.3);
        glVertex2f(0.3,15.3);
        glVertex2f(0.3,15.15);
        glEnd();

        //right shoe
        glColor3f(1,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.3,15.15);
        glVertex2f(0.32,15.125);
        glVertex2f(0.23,15.125);
        glVertex2f(0.23,15.15);
        glEnd();
        //left leg
        glColor3f(0+ib,0+ir,0+ig);
        glBegin(GL_POLYGON);
        glVertex2f(0.175,15.15);
        glVertex2f(0.175,15.3);
        glVertex2f(0.23,15.3);
        glVertex2f(0.23,15.15);
        glEnd();

        //left shoe
        glColor3f(0,0,0);
        glBegin(GL_POLYGON);
        glVertex2f(0.175,15.15);
        glVertex2f(0.155,15.125);
        glVertex2f(0.23,15.125);
        glVertex2f(0.23,15.15);
        glEnd();

        glPopMatrix();

    }
    glPopMatrix();
    
    

   
}


void rock30()
{
    glPushMatrix();
    glTranslated(420,50,0.0);
    glScaled(10,10,0);
    glColor3f(0.9,0.9,0.9);
    
    if(c<950)
    {
        glPushMatrix();
        glTranslated(0,xx,0);
        glPushMatrix();
        glTranslated(7,2,0.0);
        glRotated(-xx,0,0,1);
        glTranslated(-7,-2,0.0);
        
        glBegin(GL_POLYGON);
        glVertex2f(8.1,1);
        glVertex2f(7.89,1.23);
        glVertex2f(11.26,18);
        glVertex2f(13.23,21.33);
        glVertex2f(14.23,2.53);
        glEnd();
        
        glPopMatrix();
        glPushMatrix();

        glTranslated(12,3,0.0);
        glRotated(xx,0,0,1);
        glTranslated(-12,-3,0.0);
        
        glBegin(GL_POLYGON);
        glVertex2f(11.1,3.5);
        glVertex2f(13.2,18.7);
        glVertex2f(16.4,18.5);
        glVertex2f(18.12,3.65);
        glVertex2f(19.21,1.25);
        glEnd();
        
        glPopMatrix();
        glPopMatrix();
    }
    else
    {
        glBegin(GL_POLYGON);
        glVertex2f(8.1,1);
        glVertex2f(7.89,1.23);
        glVertex2f(11.26,18);
        glVertex2f(13.23,21.33);
        glVertex2f(14.23,2.53);
        glEnd();
            glBegin(GL_POLYGON);
            glVertex2f(11.1,3.5);
            glVertex2f(13.2,18.7);
            glVertex2f(16.4,18.5);
            glVertex2f(18.12,3.65);
            glVertex2f(19.21,1.25);
            glEnd();
    }


    glPopMatrix();
    water30();

}



void displayx30(){
    x22-=5;
    xxx2-=1;
    glClear(GL_COLOR_BUFFER_BIT);
    rock30();
    glPushMatrix();
    glTranslated(c,0+x22,0.0);
    glRotated(15+anglee,0,0,1);
    ship30(0,0);
    glPopMatrix();
    if(x22>-85){
    humanDisplay130(300,-180.5,0,0,0,4,0);
    humanDisplay30(320,-180.5,0,0,0,4,0);
    }
    else if(x22==-85){
        xxx2=-0;
    }
    else if(x22>-165){
        humanDisplay30(320,-190,0,0,0,4,0);
    }
    else if(x22==-165){
        xxx2=0;
    }
    else if(x22>-250){
        humanDisplay130(340,-150,0,0,0,4,0);
        humanDisplay130(350,-120,0,1,0,4,0);
        humanDisplay30(370,-150,0,0,1,4,0);
        humanDisplay30(400,-100,1,0,0,4,0);
        humanDisplay30(450,-100,0,0,0,4,0);
        humanDisplay130(480,-120,1,1,0,4,0);
        humanDisplay130(470,-80,1,0,1,4,0);
        humanDisplay130(420,-100,0,0,0,4,0);
        humanDisplay130(500,-100,0,0,0,4,0);
        humanDisplay130(550,-30,1,0,1,4,0);
        humanDisplay30(530,-100,0,0,0,4,0);
        humanDisplay30(570,-30,1,0,0,4,0);
        humanDisplay30(670,-10,0,1,0,4,0);
        humanDisplay130(590,-50,0,1,0,4,0);
        humanDisplay130(520,-100,1,0,0,4,0);
        humanDisplay30(600,-10,0,0,1,4,0);
    }
    else if(x22==-250){
        xxx2=-0;
    }
    else if(x22>-335){
        humanDisplay130(420,70,0,0,0,4,0);
        humanDisplay30(400,10,0,0,0,4,0);
        humanDisplay130(380,20,0,0,0,4,0);
        humanDisplay30(450,30,0,0,0,4,0);
        humanDisplay130(470,80,1,0,0,4,0);
        humanDisplay30(390,10,0,1,0,4,0);
        humanDisplay30(480,-0,0,0,1,4,0);
        humanDisplay30(400,80,0,1,0,4,0);
    }
    else if(x22==-335){
        xxx2=0;
    }
    
    else if(x22>-420){
        humanDisplay30(120,70,1,0,0,4,0);
        humanDisplay130(100,10,0,1,0,4,0);
        humanDisplay130(80,20,0,0,0,4,0);
        humanDisplay30(150,30,0,0,1,4,0);
        humanDisplay30(170,80,0,1,0,4,0);
        humanDisplay130(90,10,1,0,0,4,0);
        humanDisplay30(180,-0,0,0,0,4,0);
        humanDisplay130(100,80,0,1,0,4,0);
    }
    else if(x22==-420){
        xxx2=0;
    }
//    if(x22>-105){
//        humanDisplay30(20,-2.5,0,0,0,4,0);
//        humanDisplay30(40,-2.5,0,0,0,4,0);
//    }
//    else if(x22==-105){
//        xxx2=-35;
//    }
//    if(x22>-140){
//        humanDisplay30(20,-3.5,0,0,0,4,0);
//        humanDisplay30(40,-3.5,0,0,0,4,0);
//    }
//    else{
//        xxx2=0;
//    }
   
        
    water30();
  
}
void display130()
{
    
    glPushMatrix();
    glTranslated(a,75,0.0);
    ship30(0,0);
    glPopMatrix();
    water30();
}

void display230()
{

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    rock30();
    glPushMatrix();
    glTranslated(b,75,0.0);
    ship30(0,0);
    glPopMatrix();
  
    water30();

}

void display330()
{
    anglee=90;
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    xx-=1;
    o+=1;
    xxx2-=1;
        rock30();
    
        glPushMatrix();
        glTranslated(c,x22+xx*5,0.0);
        glRotated(anglee,0,0,1);
    ship30(0,0);
   
//    humanDisplay130(1.6,-10.7,0,0,1,4,0);
//    humanDisplay30(1.4,-10.7,1,0,1,4,0);
        glPopMatrix();
    if(xx>-12){
    humanDisplay130(20,-0.5,1,0,1,4,0);
    humanDisplay30(40,-0.5,0,1,0,4,0);
        humanDisplay130(80,-1.5,0,1,0,4,0);
        humanDisplay30(110,-1.5,1,0,0,4,0);
    }
    else if(xx==-12){
        xxx2=0;
    }
    else if(xx>-24){
        humanDisplay130(20,-1,0,0,0,4,0);
    }
    else if(xx==-24){
        xxx2=-2;
    }
    else if(xx>-36){
        humanDisplay30(20,-2.5,0,0,0,4,0);
        humanDisplay30(40,-2.5,0,1,0,4,0);
    }
    else if(xx==-36){
        xxx2=-5;
    }
    else if(xx>-48){
        humanDisplay30(20,-3.5,0,0,0,4,0);
        humanDisplay130(40,-3.5,1,0,0,4,0);
    }
   
        water30();


}




void myinit30()
{
    
  
    glClearColor(hx,hy,hz,ha);
  
    //glClearColor(0.0f,0.0f,0.5f,1.0f); //night
  
    glColor3f(1.0,0.0,0.0);
    glPointSize(1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,999.0,0.0,799.0);
}

void display4(){
   
    glDisable(GL_DEPTH_TEST);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(3000.0,3000.0);
    glutInitWindowPosition(0,0);
   
    glutDisplayFunc(displayy30);
    myinit30();
    glutTimerFunc(100,update30,0);
    glutMainLoop();
    
}
void keys(unsigned char key,int x,int y){

    
        if(ij==0){
            glutDisplayFunc(storydisplay);
        }
    
    else if (ij==1){
        
        glutDisplayFunc(display);
    }
    else if(key =='s' || key=='S'){
        // Clear Color and Depth Buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Reset transformations
        glLoadIdentity();
        glDisable(GL_DEPTH);
        glutIdleFunc(displayx);
        glutDisplayFunc(display);
    }
    else if(key == 'b' || key == 'B'){
        glutDisplayFunc(display2);
        xc=0;
        xcc=2;
    }
    
    else if(key == 'd' || key == 'D'){
        glutDisplayFunc(display3);
        xc=0;
        xcc=1;
    }
    else if(key == 'a' || key == 'A'){
        // Clear Color and Depth Buffers
        
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Reset transformations
        glLoadIdentity();
        glDisable(GL_DEPTH);
        glutIdleFunc(myinit30);
//        SDL2SoundEffects se;
//        se.addSoundEffect("/Users/sreeharinambiar/Downloads/test2.wav");
        glutDisplayFunc(display4);
//        choice=1;
//        se.playSoundEffect(choice);
    }
    else{
        // Clear Color and Depth Buffers
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        // Reset transformations
        glLoadIdentity();
        glDisable(GL_DEPTH);
        glutIdleFunc(displayx);
        glutDisplayFunc(display);
    }
//     if(ij==0){
//         glutDisplayFunc(humanDisplay);
//         glScaled(40,50,0);
//
//        }
    
    ij++;
  
   
    glutPostRedisplay();
}






int main(int argc, char* argv[])

{
    SDL2SoundEffects se;
    se.addSoundEffect("/Users/sreeharinambiar/Downloads/test.wav");
 
    while(choice!=-1){
   
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1500.0,1000.0);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Sinking Ship");
    glutTimerFunc(20, NULL, 0);
    glutDisplayFunc(welcomeDisplay);
    glutKeyboardFunc(keys);
    myinit();
    choice=0;
    se.playSoundEffect(choice);
    glutMainLoop();
        
    }
    return 0;
}
